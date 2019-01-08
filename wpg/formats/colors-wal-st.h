const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1f2230", /* black   */
  [1] = "#A490B4", /* red     */
  [2] = "#A19CCB", /* green   */
  [3] = "#DBA6B5", /* yellow  */
  [4] = "#6F85B6", /* blue    */
  [5] = "#9578A2", /* magenta */
  [6] = "#678CD0", /* cyan    */
  [7] = "#ddd1dc", /* white   */

  /* 8 bright colors */
  [8]  = "#2e3348",  /* black   */
  [9]  = "#d7a6fe",  /* red     */
  [10] = "#beb3ff", /* green   */
  [11] = "#ffbee0", /* yellow  */
  [12] = "#7da5ff", /* blue    */
  [13] = "#c889e4", /* magenta */
  [14] = "#71b0ff", /* cyan    */
  [15] = "#fff7ff", /* white   */

  /* special colors */
  [256] = "#1f2230", /* background */
  [257] = "#fff7ff", /* foreground */
  [258] = "#fff7ff",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
