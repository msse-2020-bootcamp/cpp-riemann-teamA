---
layout: post
title: "Day 6 Homework Discussion"
author: Angela, Camille, Jasmine
---

1. Both x and the return type are doubles.

2. The bounds of a and b are doubles, and npoints should be an integer. The function should return a double.

3. The width of the rectangles dx = (b - a) / npoints.

4. Starting with (a + dx/2), increment by dx until we reach (b - dx/2).

6. It takes about 190 points to start converging to the proper result.

## Discussion

The Monte-Carlo method is preferred when the integrand becomes more complicated. When we use Riemann sums, we approximate the integral by using rectangles, so having a curve that oscillates, for example, will force us to have smaller rectangles (and a higher number of points). This idea extends to higher dimensional systems.