const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1a1d27", /* black   */
  [1] = "#fb7da7", /* red     */
  [2] = "#76c5a4", /* green   */
  [3] = "#e8d56d", /* yellow  */
  [4] = "#56c9db", /* blue    */
  [5] = "#af98e6", /* magenta */
  [6] = "#fdad5d", /* cyan    */
  [7] = "#ffffff", /* white   */

  /* 8 bright colors */
  [8]  = "#292e3f",  /* black   */
  [9]  = "#fb7da7",  /* red     */
  [10] = "#76c5a4", /* green   */
  [11] = "#e8d56d", /* yellow  */
  [12] = "#56c9db", /* blue    */
  [13] = "#af98e6", /* magenta */
  [14] = "#fdad5d", /* cyan    */
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
