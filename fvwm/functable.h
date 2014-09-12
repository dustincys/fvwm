/* -*-c-*- */

#ifndef FUNCTABLE_H
#define FUNCTABLE_H

/* ---------------------------- included header files ---------------------- */

/* ---------------------------- global definitions ------------------------- */

#define PRE_KEEPRC       "keeprc"
#define PRE_REPEAT       "repeat"
#define PRE_SILENT       "silent"

/* ---------------------------- global macros ------------------------------ */

/* ---------------------------- type definitions --------------------------- */

/* ---------------------------- exported variables (globals) --------------- */

extern const func_t func_table[];

/* ---------------------------- interface functions ------------------------ */

const func_t *find_builtin_function(const char *func);

#endif /* FUNCTABLE_H */
