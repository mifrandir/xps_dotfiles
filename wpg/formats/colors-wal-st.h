const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#10151e", /* black   */
  [1] = "#A68E68", /* red     */
  [2] = "#758373", /* green   */
  [3] = "#C7AF52", /* yellow  */
  [4] = "#4E738D", /* blue    */
  [5] = "#D1A66A", /* magenta */
  [6] = "#6D8C9B", /* cyan    */
  [7] = "#c7cac8", /* white   */

  /* 8 bright colors */
  [8]  = "#1d2738",  /* black   */
  [9]  = "#e9bc75",  /* red     */
  [10] = "#8cba85", /* green   */
  [11] = "#ffee58", /* yellow  */
  [12] = "#5797c5", /* blue    */
  [13] = "#ffdb75", /* magenta */
  [14] = "#7cbbda", /* cyan    */
  [15] = "#fdfffe", /* white   */

  /* special colors */
  [256] = "#10151e", /* background */
  [257] = "#fdfffe", /* foreground */
  [258] = "#fdfffe",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
