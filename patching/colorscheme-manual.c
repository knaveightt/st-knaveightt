/* Using custom theme I'm naming "Chevronic", using terminal.sexy
 * Needed to remove 'static' from definition of defaultfg and defaultbg
 * As well as add a definition for defaultrcs */

/* Suggested wallpaper
https://www.wallpaperflare.com/black-and-orange-surface-digital-art-geometry-texture-dark-wallpaper-cqtw
"Chevronic" import using XResources mode @ terminal.sexy

! special
*.foreground:   #bdbdbd
*.background:   #0d0d0d
*.cursorColor:  #bdbdbd

! black
*.color0:       #555555
*.color8:       #888888

! red
*.color1:       #c44332
*.color9:       #ee6352

! green
*.color2:       #c68641
*.color10:      #dd3838

! yellow
*.color3:       #d06d32
*.color11:      #fd8f5a

! blue
*.color4:       #690da8
*.color12:      #b20fbd

! magenta
*.color5:       #744560
*.color13:      #9e5e83

! cyan
*.color6:       #288e9c
*.color14:      #36bed1

! white
*.color7:       #8b7d70
*.color15:      #9f9f9f

*/

/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#555555", /* black   */
  [1] = "#c44332", /* red     */
  [2] = "#c68641", /* green   */
  [3] = "#d06d32", /* yellow  */
  [4] = "#690da8", /* blue    */
  [5] = "#744560", /* magenta */
  [6] = "#288e9c", /* cyan    */
  [7] = "#8b7d70", /* white   */

  /* 8 bright colors */
  [8]  = "#888888", /* black   */
  [9]  = "#ee6352", /* red     */
  [10] = "#dd3838", /* green   */
  [11] = "#fd8f5a", /* yellow  */
  [12] = "#b20fbd", /* blue    */
  [13] = "#9e5e83", /* magenta */
  [14] = "#36bed1", /* cyan    */
  [15] = "#9f9f9f", /* white   */

  /* special colors */
  [256] = "#0d0d0d", /* background */
  [257] = "#bdbdbd", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;
static unsigned int defaultrcs = 257;

/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
static unsigned int defaultitalic = 7;
static unsigned int defaultunderline = 7;

