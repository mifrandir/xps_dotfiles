const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1a1d27", /* black   */
  [1] = "#fdad5d", /* red     */
  [2] = "#e8d56d", /* green   */
  [3] = "#af98e6", /* yellow  */
  [4] = "#76c5a4", /* blue    */
  [5] = "#56c9db", /* magenta */
  [6] = "#fb7da7", /* cyan    */
  [7] = "#ffffff", /* white   */

  /* 8 bright colors */
  [8]  = "#292e3f",  /* black   */
  [9]  = "#ffe062",  /* red     */
  [10] = "#ffff77", /* green   */
  [11] = "#d9acff", /* yellow  */
  [12] = "#84ffd8", /* blue    */
  [13] = "#5bffff", /* magenta */
  [14] = "#ff8ad0", /* cyan    */
  [15] = "#ffffff", /* white   */

  /* special colors */
  [256] = "#1a1d27", /* background */
  [257] = "#ffffff", /* foreground */
  [258] = "#ffffff",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
