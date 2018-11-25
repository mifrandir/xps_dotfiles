const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#171d26", /* black   */
  [1] = "#c83e2b", /* red     */
  [2] = "#ac3f31", /* green   */
  [3] = "#f0ae52", /* yellow  */
  [4] = "#c55935", /* blue    */
  [5] = "#cf695a", /* magenta */
  [6] = "#ee6533", /* cyan    */
  [7] = "#c8c8cc", /* white   */

  /* 8 bright colors */
  [8]  = "#26303f",  /* black   */
  [9]  = "#ed4628",  /* red     */
  [10] = "#ee4832", /* green   */
  [11] = "#f0e556", /* yellow  */
  [12] = "#ee6d35", /* blue    */
  [13] = "#f07b63", /* magenta */
  [14] = "#ee7b2f", /* cyan    */
  [15] = "#f1f1f4", /* white   */

  /* special colors */
  [256] = "#171d26", /* background */
  [257] = "#f1f1f4", /* foreground */
  [258] = "#f1f1f4",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
