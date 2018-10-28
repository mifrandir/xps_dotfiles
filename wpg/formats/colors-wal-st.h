const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0a0c0f", /* black   */
  [1] = "#A93526", /* red     */
  [2] = "#4E4641", /* green   */
  [3] = "#A84C2E", /* yellow  */
  [4] = "#2A3944", /* blue    */
  [5] = "#605157", /* magenta */
  [6] = "#8F362A", /* cyan    */
  [7] = "#e6a48e", /* white   */

  /* 8 bright colors */
  [8]  = "#191f27",  /* black   */
  [9]  = "#e93a23",  /* red     */
  [10] = "#6e584b", /* green   */
  [11] = "#e85b2d", /* yellow  */
  [12] = "#2f4b5f", /* blue    */
  [13] = "#885d6e", /* magenta */
  [14] = "#c53c2a", /* cyan    */
  [15] = "#ffd8bb", /* white   */

  /* special colors */
  [256] = "#0a0c0f", /* background */
  [257] = "#ffd8bb", /* foreground */
  [258] = "#ffd8bb",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
