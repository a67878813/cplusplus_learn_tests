#include "unpipc.h"
#include <cstdio>
#include <cstdlib>
#define PATH_MAX 255
#include <cstddef>
#include <cstring>
char* px_ipc_name(const char *name);

char*
px_ipc_name(const char* name)
{
    char  *dst;
    const char* dir;
    const char* slash;
    if( (dst = static_cast<char*>(malloc(PATH_MAX))) == NULL)
        return(NULL);
    
    /* can override default directory with enviroment variable */
    if (( dir = getenv("PX_IPC_NAME"))== NULL){
#ifdef POSIX_IPC_PREFIX
    dir= POSIX_IPC_PREFIX; /* from "config.h" */
#else 
    dir = "/tmp/";/* default */
#endif 
    }

    /* dir must end in a slash */

    slash = (dir[strlen(dir) -1] =='/')  ? "" : "/";
    snprintf(dst, PATH_MAX, "%s%s%s",dir,slash,name);

    return (dst);
}

char *
Px_ipc_name(const char *name)
{
	char	*ptr;

	if ( (ptr = px_ipc_name(name)) == NULL){}
		//err_sys("px_ipc_name error for %s", name);
	return(ptr);
}