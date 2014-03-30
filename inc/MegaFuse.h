#include <fuse.h>

class MegaFuseModel;
class MegaFuse
{
private:
	MegaFuseModel *model;
	
	public:
	MegaFuse(MegaFuseModel *);
	
	int open(const char *path, struct fuse_file_info *fi);
    int readdir(const char *path, void *buf, fuse_fill_dir_t filler,off_t offset, struct fuse_file_info *fi);
    int getAttr(const char *path, struct stat *stbuf);
    int release(const char *path, struct fuse_file_info *fi);
    int mkdir(const char * path, mode_t mode);
    int read(const char *path, char *buf, size_t size, off_t offset, struct fuse_file_info *fi);
    int create(const char *path, mode_t mode, struct fuse_file_info * fi);
    int write(const char * path, const char *buf, size_t size, off_t offset, struct fuse_file_info * fi);
    int rename(const char * src, const char *dst);
	int unlink(const char*);
	
	
};