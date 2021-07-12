/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static int centered = 1;
static int min_width = 300;
static const unsigned int alpha = 210;

static const char *fonts[] = {
	"Gohu GohuFont:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
/*	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#282a36", "#005577" },
	[SchemeSelHighlight] = {"#0d1117", "#6272a4"},
	[SchemeNormHighlight] = {"#ffffff", "#161b22"},
	[SchemeOut] = { "#000000", "#00ffff" },
	[SchemeOutHighlight] = {"#ffc978", "#00ffff"},

*/
	[SchemeNorm] = { "#E1E1E6", "#191622" },
	[SchemeSel] = { "#E1E1E6", "#483C67" },
	[SchemeSelHighlight] = { "#fe8019", "#191622" },
	[SchemeNormHighlight] = { "#988BC7", "#191622" },
	[SchemeOut] = { "#b8bb26", "#483C67" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines   = 5;
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 0;
/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* border size */
static const unsigned int border_width = 2;
