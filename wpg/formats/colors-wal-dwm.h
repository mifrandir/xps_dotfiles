static const char norm_fg[] = "#e9eef6";
static const char norm_bg[] = "#0d1216";
static const char norm_border[] = "#1b262f";

static const char sel_fg[] = "#e9eef6";
static const char sel_bg[] = "#3B806D";
static const char sel_border[] = "#e9eef6";

static const char urg_fg[] = "#e9eef6";
static const char urg_bg[] = "#927162";
static const char urg_border[] = "#927162";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
