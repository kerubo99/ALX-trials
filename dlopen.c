#include <dlfcn.h>
.
.
void* lib_handle;

lib_handle = dlopen("/full/path/to/library", RTLD_LAZY);
if (!lib_handle)
{
fprintf(stderr, "Error during dlopen(): %s\n" , dlerror());
exit(1);
}
