static const char norm_fg[] = "#ffd8bb";
static const char norm_bg[] = "#0a0c0f";
static const char norm_border[] = "#191f27";

static const char sel_fg[] = "#ffd8bb";
static const char sel_bg[] = "#4E4641";
static const char sel_border[] = "#ffd8bb";

static const char urg_fg[] = "#ffd8bb";
static const char urg_bg[] = "#A93526";
static const char urg_border[] = "#A93526";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
