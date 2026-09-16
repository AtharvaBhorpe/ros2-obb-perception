# ROS 2 OBB Perception

> Status: Work in progress

## Goal

- The system will detect 3 items initially: bottle, small speaker and lip balm.
- The system will identify and generate oriented bounding-boxes (OBBs) for each item.
- Uses ROS 2 framework.
- Python 3.12 for training perception models.
- C++20 for inference of OBBs.
- Will integrate with the SO-ARM101 follower robot to make a pick-and-place system.

## Current milestone

- [ ] Represent and test oriented bounding-box geometry in C++20.

## Planned pipeline

Webcam → OBB detection → object selection → planar projection → grasp preview → SO-ARM101 pick-and-place

## Project status

Project is currently in progress.
Detection, projection, and robot integration are not implemented yet.
