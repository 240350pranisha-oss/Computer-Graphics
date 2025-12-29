Title: Bresenhem Line Drawing Algorithm

Algorithm:

Input the two line end-points, storing the left end-point in (x0, y0)

Plot the point (x0, y0)

Calculate the constants Δx, Δy, 2Δy, and (2Δy - 2Δx) and get the first value for the decision parameter as: p0 = 2Δy - Δx

At each xk along the line, starting at k = 0, perform the following test. If pk < 0, the next point to plot is (xk+1, yk ) and:

           pk+1 = pk + 2Δy
Otherwise, the next point to plot is (xk+1, yk+1) and:

              pk+1 = pk + 2Δy - 2Δx
Repeat step 4 (Δx – 1) times NOTE: The algorithm and derivation above assumes slopes are less than 1. For other slopes we need to adjust the algorithm slightly


Result:
A green circle is displayed on the graphics screen at the given center coordinates (xc, yc) with radius R. Due to the use of delay(50), the pixels are plotted gradually, allowing the circle to be drawn visibly step by step. The text “Pranisha Sijapati” and “240350” appears inside the circle. The circle looks smooth and perfectly balanced because the algorithm applies the 8-way symmetry property.

Conclusion:
This program effectively demonstrates the Midpoint Circle Algorithm using C graphics. It shows how symmetry is used to minimize calculations by determining points in one octant and reflecting them to complete the circle. The delay function helps visualize the drawing process, making the concept easier to understand. The use of outtextxy for labeling enhances clarity, and the program serves as a strong example of basic circle drawing without relying on the built-in circle() function.