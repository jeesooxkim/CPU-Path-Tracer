# CPU Physically Based Path Tracer with Sampling and Noise Analysis

## Summary

A CPU physically based path tracer written in C++ that uses a bounding volume hierarchy for ray acceleration. The primary focus is **reducing image noise** **and improving convergence** by comparing different sampling strategies, including light importance sampling and multiple importance sampling, and analyzing their impact on **performance using profiling techniques**.

## Significance

This project demonstrates hands-on experience with light transport algorithms, sampling strategies, and performance profiling for realistic rendering.

## Background

Sampling strategies in path tracing involve tradeoffs between *noise, convergence speed, and computation time*. **Random sampling** traces paths using randomly sampled directions, which produces unbiased results but often leads to high image noise and slow convergence, requiring many samples to achieve acceptable image quality. **Light importance sampling** improves upon this by biasing direction sampling toward light sources, increasing the likelihood of capturing significant lighting contributions and reducing noise in direct illumination. **Multiple importance sampling** further improves convergence speed by combining multiple sampling strategies and weighting their contributions in a way that reduces variance across a wider range of lighting conditions.

As sampling strategies become more sophisticated, however, the cost of evaluating probability distributions and weighting samples increases, introducing performance tradeoffs. These tradeoffs are particularly relevant to real-time rendering and film production where render time directly impacts interactivity, production schedules, and budgets. This project investigates such performance tradeoffs through profiling and visual comparison of rendered images produced using different sampling strategies.

## Project Specifications

**Language**: C++

**Core Features**

- [ ] Scene Input Processing
- [ ] Scene Output Rendering
- [ ] Core Path Tracing Algorithm
- [ ] **BVH** for ray acceleration (enable via flag)
- [ ] **Profiling** and Benchmark Measurement Integration
    - [ ] Total render time
    - [ ] Time spent in ray-scene intersection
    - [ ] Time spent in sampling calculations
- [ ] Sampling Strategies (enable via flags)
    - [ ] **Random Sampling**
    - [ ] **Light Importance Sampling**
    - [ ] **Multiple Importance Sampling**
- [ ] Unit testing suite

**Implementation Planning Items**

- [ ] Decide on Input Scene Format (simple OBJ, JSON or hardcoded primitives?)
- [ ] Generate and select test scenes for benchmarking
- [ ] Prepare diagrams for sampling strategies
- [ ] Prepare charts/visualizations with profiling results
- [ ] Write README with:
    - [ ] Project motivation and learning goals
    - [ ] Background on sampling strategies — bias vs variance, and how convergence is affected
    - [ ] Key implementation decisions (how to measure success)
    - [ ] Instructions to build and run
    - [ ] Sample rendered images comparing sampling strategies
    - [ ] Future extensions