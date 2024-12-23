 /* Terminal colors (16 first used in escape sequence) */
 static const char *colorname[] = {
 	/* 8 normal colors */
	"#282828", /* black   */
	"#bf616a", /* red     */
	"#a3be8c", /* green   */
	"#ebcb8b", /* yellow  */
	"#81a1c1", /* blue    */
	"#b48ead", /* magenta */
	"#88c0d0", /* cyan    */
	"#a89984", /* white   */

 	/* 8 bright colors */
	"#928374", /* black   */
	"#bf616a", /* red     */
	"#a3be8c", /* green   */
	"#ebcb8b", /* yellow  */
	"#81a1c1", /* blue    */
	"#b48ead", /* magenta */
	"#8fbcbb", /* cyan    */
	"#ebdbb2", /* white   */
 };
 
unsigned int defaultfg = 15;
unsigned int defaultbg = 0;
unsigned int defaultcs = 15;
static unsigned int defaultrcs = 257;
