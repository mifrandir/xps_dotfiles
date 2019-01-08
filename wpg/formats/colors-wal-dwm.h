static const char norm_fg[] = "#fff7ff";
static const char norm_bg[] = "#1f2230";
static const char norm_border[] = "#2e3348";

static const char sel_fg[] = "#fff7ff";
static const char sel_bg[] = "#A19CCB";
static const char sel_border[] = "#fff7ff";

static const char urg_fg[] = "#fff7ff";
static const char urg_bg[] = "#A490B4";
static const char urg_border[] = "#A490B4";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
