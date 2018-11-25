const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1a1d27", /* black   */
  [1] = "#c83e2b", /* red     */
  [2] = "#ac3f31", /* green   */
  [3] = "#f0ae52", /* yellow  */
  [4] = "#c55935", /* blue    */
  [5] = "#cf695a", /* magenta */
  [6] = "#ee6533", /* cyan    */
  [7] = "#c8c8cc", /* white   */

  /* 8 bright colors */
  [8]  = "#292e3f",  /* black   */
  [9]  = "#ff4428",  /* red     */
  [10] = "#ee4631", /* green   */
  [11] = "#ffe555", /* yellow  */
  [12] = "#ff6b34", /* blue    */
  [13] = "#ff7a61", /* magenta */
  [14] = "#ff7a2f", /* cyan    */
  [15] = "#fcfcff", /* white   */

  /* special colors */
  [256] = "#1a1d27", /* background */
  [257] = "#fcfcff", /* foreground */
  [258] = "#fcfcff",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
