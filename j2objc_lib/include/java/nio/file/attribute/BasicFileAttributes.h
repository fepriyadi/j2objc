//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/attribute/BasicFileAttributes.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioFileAttributeBasicFileAttributes")
#ifdef RESTRICT_JavaNioFileAttributeBasicFileAttributes
#define INCLUDE_ALL_JavaNioFileAttributeBasicFileAttributes 0
#else
#define INCLUDE_ALL_JavaNioFileAttributeBasicFileAttributes 1
#endif
#undef RESTRICT_JavaNioFileAttributeBasicFileAttributes

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileAttributeBasicFileAttributes_) && (INCLUDE_ALL_JavaNioFileAttributeBasicFileAttributes || defined(INCLUDE_JavaNioFileAttributeBasicFileAttributes))
#define JavaNioFileAttributeBasicFileAttributes_

@class JavaNioFileAttributeFileTime;

/*!
 @brief Basic attributes associated with a file in a file system.
 <p> Basic file attributes are attributes that are common to many file systems
  and consist of mandatory and optional file attributes as defined by this
  interface. 
 <p> <b>Usage Example:</b>
  @code

     Path file = ...
     BasicFileAttributes attrs = Files.readAttributes(file, BasicFileAttributes.class); 
  
@endcode
 @since 1.7
 - seealso: BasicFileAttributeView
 */
@protocol JavaNioFileAttributeBasicFileAttributes < JavaObject >

/*!
 @brief Returns the time of last modification.
 <p> If the file system implementation does not support a time stamp
  to indicate the time of last modification then this method returns an
  implementation specific default value, typically a <code>FileTime</code>
  representing the epoch (1970-01-01T00:00:00Z).
 @return a <code>FileTime</code> representing the time the file was last
           modified
 */
- (JavaNioFileAttributeFileTime *)lastModifiedTime;

/*!
 @brief Returns the time of last access.
 <p> If the file system implementation does not support a time stamp
  to indicate the time of last access then this method returns
  an implementation specific default value, typically the <code>last-modified-time</code>
  or a <code>FileTime</code>
  representing the epoch (1970-01-01T00:00:00Z).
 @return a <code>FileTime</code> representing the time of last access
 */
- (JavaNioFileAttributeFileTime *)lastAccessTime;

/*!
 @brief Returns the creation time.The creation time is the time that the file
  was created.
 <p> If the file system implementation does not support a time stamp
  to indicate the time when the file was created then this method returns
  an implementation specific default value, typically the <code>last-modified-time</code>
  or a <code>FileTime</code>
  representing the epoch (1970-01-01T00:00:00Z).
 @return a <code>FileTime</code> representing the time the file was created
 */
- (JavaNioFileAttributeFileTime *)creationTime;

/*!
 @brief Tells whether the file is a regular file with opaque content.
 @return <code>true</code> if the file is a regular file with opaque content
 */
- (jboolean)isRegularFile;

/*!
 @brief Tells whether the file is a directory.
 @return <code>true</code> if the file is a directory
 */
- (jboolean)isDirectory;

/*!
 @brief Tells whether the file is a symbolic link.
 @return <code>true</code> if the file is a symbolic link
 */
- (jboolean)isSymbolicLink;

/*!
 @brief Tells whether the file is something other than a regular file, directory,
  or symbolic link.
 @return <code>true</code> if the file something other than a regular file,
          directory or symbolic link
 */
- (jboolean)isOther;

/*!
 @brief Returns the size of the file (in bytes).The size may differ from the
  actual size on the file system due to compression, support for sparse
  files, or other reasons.
 The size of files that are not <code>regular</code>
  files is implementation specific and
  therefore unspecified.
 @return the file size, in bytes
 */
- (jlong)size;

/*!
 @brief Returns an object that uniquely identifies the given file, or <code>null</code>
  if a file key is not available.On some platforms or file systems
  it is possible to use an identifier, or a combination of identifiers to
  uniquely identify a file.
 Such identifiers are important for operations
  such as file tree traversal in file systems that support <a href="../package-summary.html#links">
 symbolic links</a> or file systems
  that allow a file to be an entry in more than one directory. On UNIX file
  systems, for example, the <em>device ID</em> and <em>inode</em> are
  commonly used for such purposes. 
 <p> The file key returned by this method can only be guaranteed to be
  unique if the file system and files remain static. Whether a file system
  re-uses identifiers after a file is deleted is implementation dependent and
  therefore unspecified. 
 <p> File keys returned by this method can be compared for equality and are
  suitable for use in collections. If the file system and files remain static,
  and two files are the <code>same</code> with
  non-<code>null</code> file keys, then their file keys are equal.
 @return an object that uniquely identifies the given file, or <code>null</code>
 - seealso: java.nio.file.Files#walkFileTree
 */
- (id)fileKey;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileAttributeBasicFileAttributes)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileAttributeBasicFileAttributes)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioFileAttributeBasicFileAttributes")
