static const char norm_fg[] = "#fcfcff";
static const char norm_bg[] = "#1a1d27";
static const char norm_border[] = "#292e3f";

static const char sel_fg[] = "#fcfcff";
static const char sel_bg[] = "#ac3f31";
static const char sel_border[] = "#fcfcff";

static const char urg_fg[] = "#fcfcff";
static const char urg_bg[] = "#c83e2b";
static const char urg_border[] = "#c83e2b";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
