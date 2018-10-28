const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0d1216", /* black   */
  [1] = "#927162", /* red     */
  [2] = "#3B806D", /* green   */
  [3] = "#EC9C60", /* yellow  */
  [4] = "#6E746D", /* blue    */
  [5] = "#8E8878", /* magenta */
  [6] = "#738676", /* cyan    */
  [7] = "#afb3b9", /* white   */

  /* 8 bright colors */
  [8]  = "#1b262f",  /* black   */
  [9]  = "#cd8c6f",  /* red     */
  [10] = "#40b293", /* green   */
  [11] = "#ffc767", /* yellow  */
  [12] = "#84a57f", /* blue    */
  [13] = "#c9b88b", /* magenta */
  [14] = "#85be8e", /* cyan    */
  [15] = "#e9eef6", /* white   */

  /* special colors */
  [256] = "#0d1216", /* background */
  [257] = "#e9eef6", /* foreground */
  [258] = "#e9eef6",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
