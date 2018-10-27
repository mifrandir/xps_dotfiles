static const char norm_fg[] = "#fdfffe";
static const char norm_bg[] = "#10151e";
static const char norm_border[] = "#1d2738";

static const char sel_fg[] = "#fdfffe";
static const char sel_bg[] = "#758373";
static const char sel_border[] = "#fdfffe";

static const char urg_fg[] = "#fdfffe";
static const char urg_bg[] = "#A68E68";
static const char urg_border[] = "#A68E68";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
