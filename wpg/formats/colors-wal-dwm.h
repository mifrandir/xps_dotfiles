static const char norm_fg[] = "#f1f1f4";
static const char norm_bg[] = "#171d26";
static const char norm_border[] = "#26303f";

static const char sel_fg[] = "#f1f1f4";
static const char sel_bg[] = "#ac3f31";
static const char sel_border[] = "#f1f1f4";

static const char urg_fg[] = "#f1f1f4";
static const char urg_bg[] = "#c83e2b";
static const char urg_border[] = "#c83e2b";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
