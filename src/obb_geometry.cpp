#include <cassert>
#include <cmath>
#include <iostream>

struct OrientedBoundingBox {
    double center_x_px{};
    double center_y_px{};
    double width_px{};
    double height_px{};
    double angle_rad{};

    [[nodiscard]]
    double area_px2() const {
        // return the rectangle area in px^2
        return width_px * height_px;
    }

    [[nodiscard]]
    bool is_valid() const {
        // return true if the OBB is valid, false otherwise
        return width_px > 0.0 && height_px > 0.0;
    }
};

int main() {
    const OrientedBoundingBox speaker{320.0, 240.0, 100.0, 60.0, 0.5};
    const OrientedBoundingBox broken{100.0, 80.0, -20.0, 10.0, 0.0};
    const OrientedBoundingBox zero_width{100.0, 80.0, 0.0, 10.0, 0.0};

    assert(std::abs(speaker.area_px2() - 6000.0) < 1e-6);
    assert(speaker.is_valid());
    assert(!broken.is_valid());
    assert(!zero_width.is_valid());

    std::cout << "OBB checks passed\n";
}
