const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0b1014", /* black   */
  [1] = "#af3c3c", /* red     */
  [2] = "#6D8D6D", /* green   */
  [3] = "#D4A84B", /* yellow  */
  [4] = "#456E92", /* blue    */
  [5] = "#bd794b", /* magenta */
  [6] = "#61B2D4", /* cyan    */
  [7] = "#eaeaea", /* white   */

  /* 8 bright colors */
  [8]  = "#18242e",  /* black   */
  [9]  = "#f23e3e",  /* red     */
  [10] = "#7dc77d", /* green   */
  [11] = "#ffe14e", /* yellow  */
  [12] = "#4b8fcb", /* blue    */
  [13] = "#ff9950", /* magenta */
  [14] = "#6aefff", /* cyan    */
  [15] = "#ffffff", /* white   */

  /* special colors */
  [256] = "#0b1014", /* background */
  [257] = "#ffffff", /* foreground */
  [258] = "#ffffff",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
