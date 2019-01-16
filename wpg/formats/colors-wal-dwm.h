static const char norm_fg[] = "#ffffff";
static const char norm_bg[] = "#0b1014";
static const char norm_border[] = "#18242e";

static const char sel_fg[] = "#ffffff";
static const char sel_bg[] = "#6D8D6D";
static const char sel_border[] = "#ffffff";

static const char urg_fg[] = "#ffffff";
static const char urg_bg[] = "#af3c3c";
static const char urg_border[] = "#af3c3c";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
