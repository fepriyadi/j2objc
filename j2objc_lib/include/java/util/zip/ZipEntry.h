//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/zip/ZipEntry.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilZipZipEntry")
#ifdef RESTRICT_JavaUtilZipZipEntry
#define INCLUDE_ALL_JavaUtilZipZipEntry 0
#else
#define INCLUDE_ALL_JavaUtilZipZipEntry 1
#endif
#undef RESTRICT_JavaUtilZipZipEntry

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilZipZipEntry_) && (INCLUDE_ALL_JavaUtilZipZipEntry || defined(INCLUDE_JavaUtilZipZipEntry))
#define JavaUtilZipZipEntry_

#define RESTRICT_JavaUtilZipZipConstants 1
#define INCLUDE_JavaUtilZipZipConstants 1
#include "java/util/zip/ZipConstants.h"

@class IOSByteArray;
@class JavaNioFileAttributeFileTime;

/*!
 @brief This class is used to represent a ZIP file entry.
 @author David Connelly
 */
@interface JavaUtilZipZipEntry : NSObject < JavaUtilZipZipConstants, NSCopying > {
 @public
  NSString *name_;
  jlong xdostime_;
  JavaNioFileAttributeFileTime *mtime_;
  JavaNioFileAttributeFileTime *atime_;
  JavaNioFileAttributeFileTime *ctime_;
  jlong crc_;
  jlong size_;
  jlong csize_;
  jint method_;
  jint flag_;
  IOSByteArray *extra_;
  NSString *comment_;
  jlong dataOffset_;
}
@property (readonly, class) jint STORED NS_SWIFT_NAME(STORED);
@property (readonly, class) jint DEFLATED NS_SWIFT_NAME(DEFLATED);
@property (readonly, class) jlong DOSTIME_BEFORE_1980 NS_SWIFT_NAME(DOSTIME_BEFORE_1980);
@property (readonly, class) jlong UPPER_DOSTIME_BOUND NS_SWIFT_NAME(UPPER_DOSTIME_BOUND);

#pragma mark Public

/*!
 @brief Creates a new zip entry with the specified name.
 @param name The entry name
 @throw NullPointerExceptionif the entry name is null
 @throw IllegalArgumentExceptionif the entry name is longer than
          0xFFFF bytes
 */
- (instancetype __nonnull)initWithNSString:(NSString *)name;

/*!
 */
- (instancetype __nonnull)initWithNSString:(NSString *)name
                              withNSString:(NSString *)comment
                                  withLong:(jlong)crc
                                  withLong:(jlong)compressedSize
                                  withLong:(jlong)size
                                   withInt:(jint)compressionMethod
                                   withInt:(jint)xdostime
                             withByteArray:(IOSByteArray *)extra
                                  withLong:(jlong)dataOffset;

/*!
 @brief Creates a new zip entry with fields taken from the specified
  zip entry.
 @param e A zip Entry object
 @throw NullPointerExceptionif the entry object is null
 */
- (instancetype __nonnull)initWithJavaUtilZipZipEntry:(JavaUtilZipZipEntry *)e;

/*!
 @brief Returns a copy of this entry.
 */
- (id)java_clone;

/*!
 @brief Returns the comment string for the entry.
 @return the comment string for the entry, or null if none
 - seealso: #setComment(String)
 */
- (NSString *)getComment;

/*!
 @brief Returns the size of the compressed entry data.
 <p> In the case of a stored entry, the compressed size will be the same
  as the uncompressed size of the entry.
 @return the size of the compressed entry data, or -1 if not known
 - seealso: #setCompressedSize(long)
 */
- (jlong)getCompressedSize;

/*!
 @brief Returns the CRC-32 checksum of the uncompressed entry data.
 @return the CRC-32 checksum of the uncompressed entry data, or -1 if
  not known
 - seealso: #setCrc(long)
 */
- (jlong)getCrc;

/*!
 @brief Returns the creation time of the entry.
 <p> The creation time is from the extended timestamp fields of
  entry's <code>optional extra data</code> when read from a ZIP file
  or ZIP file formatted stream.
 @return the creation time of the entry, null if not specified
 - seealso: #setCreationTime(FileTime)
 @since 1.8
 */
- (JavaNioFileAttributeFileTime *)getCreationTime;

/*!
 */
- (jlong)getDataOffset;

/*!
 @brief Returns the extra field data for the entry.
 @return the extra field data for the entry, or null if none
 - seealso: #setExtra(byte[])
 */
- (IOSByteArray *)getExtra;

/*!
 @brief Returns the last access time of the entry.
 <p> The last access time is from the extended timestamp fields
  of entry's <code>optional extra data</code> when read from a ZIP file
  or ZIP file formatted stream.
 @return The last access time of the entry, null if not specified
 - seealso: #setLastAccessTime(FileTime)
 @since 1.8
 */
- (JavaNioFileAttributeFileTime *)getLastAccessTime;

/*!
 @brief Returns the last modification time of the entry.
 <p> If the entry is read from a ZIP file or ZIP file formatted
  input stream, this is the last modification time from the zip
  file entry's <code>optional extra data</code> if the extended timestamp
  fields are present. Otherwise the last modification time is read
  from the entry's <code>date and time fields</code>, the <code>default TimeZone</code>
  is used to convert
  the standard MS-DOS formatted date and time to the epoch time.
 @return The last modification time of the entry, null if not specified
 - seealso: #setLastModifiedTime(FileTime)
 @since 1.8
 */
- (JavaNioFileAttributeFileTime *)getLastModifiedTime;

/*!
 @brief Returns the compression method of the entry.
 @return the compression method of the entry, or -1 if not specified
 - seealso: #setMethod(int)
 */
- (jint)getMethod;

/*!
 @brief Returns the name of the entry.
 @return the name of the entry
 */
- (NSString *)getName;

/*!
 @brief Returns the uncompressed size of the entry data.
 @return the uncompressed size of the entry data, or -1 if not known
 - seealso: #setSize(long)
 */
- (jlong)getSize;

/*!
 @brief Returns the last modification time of the entry.
 <p> If the entry is read from a ZIP file or ZIP file formatted
  input stream, this is the last modification time from the <code>date and time fields</code>
  of the zip file entry. The 
 <code>default TimeZone</code> is used
  to convert the standard MS-DOS formatted date and time to the
  epoch time.
 @return The last modification time of the entry in milliseconds
           since the epoch, or -1 if not specified
 - seealso: #setTime(long)
 - seealso: #setLastModifiedTime(FileTime)
 */
- (jlong)getTime;

/*!
 @brief Returns the hash code value for this entry.
 */
- (NSUInteger)hash;

/*!
 @brief Returns true if this is a directory entry.A directory entry is
  defined to be one whose name ends with a '/'.
 @return true if this is a directory entry
 */
- (jboolean)isDirectory;

/*!
 @brief Sets the optional comment string for the entry.
 <p>ZIP entry comments have maximum length of 0xffff. If the length of the
  specified comment string is greater than 0xFFFF bytes after encoding, only
  the first 0xFFFF bytes are output to the ZIP file entry.
 @param comment the comment string
 - seealso: #getComment()
 */
- (void)setCommentWithNSString:(NSString *)comment;

/*!
 @brief Sets the size of the compressed entry data.
 @param csize the compressed size to set to
 - seealso: #getCompressedSize()
 */
- (void)setCompressedSizeWithLong:(jlong)csize;

/*!
 @brief Sets the CRC-32 checksum of the uncompressed entry data.
 @param crc the CRC-32 value
 @throw IllegalArgumentExceptionif the specified CRC-32 value is
          less than 0 or greater than 0xFFFFFFFF
 - seealso: #getCrc()
 */
- (void)setCrcWithLong:(jlong)crc;

/*!
 @brief Sets the creation time of the entry.
 <p> If set, the creation time will be stored into the extended
  timestamp fields of entry's <code>optional extra data</code>, when
  output to a ZIP file or ZIP file formatted stream.
 @param time The creation time of the entry
 @return This zip entry
 @throw NullPointerExceptionif the <code>time</code> is null
 - seealso: #getCreationTime()
 @since 1.8
 */
- (JavaUtilZipZipEntry *)setCreationTimeWithJavaNioFileAttributeFileTime:(JavaNioFileAttributeFileTime *)time;

/*!
 @brief Sets the optional extra field data for the entry.
 <p> Invoking this method may change this entry's last modification
  time, last access time and creation time, if the <code>extra</code> field
  data includes the extensible timestamp fields, such as <code>NTFS tag
  0x0001</code>
  or <code>Info-ZIP Extended Timestamp</code>, as specified in 
 <a href="http://www.info-zip.org/doc/appnote-19970311-iz.zip">Info-ZIP
  Application Note 970311</a>.
 @param extra The extra field data bytes
 @throw IllegalArgumentExceptionif the length of the specified
          extra field data is greater than 0xFFFF bytes
 - seealso: #getExtra()
 */
- (void)setExtraWithByteArray:(IOSByteArray *)extra;

/*!
 @brief Sets the last access time of the entry.
 <p> If set, the last access time will be stored into the extended
  timestamp fields of entry's <code>optional extra data</code>, when output
  to a ZIP file or ZIP file formatted stream.
 @param time The last access time of the entry
 @return This zip entry
 @throw NullPointerExceptionif the <code>time</code> is null
 - seealso: #getLastAccessTime()
 @since 1.8
 */
- (JavaUtilZipZipEntry *)setLastAccessTimeWithJavaNioFileAttributeFileTime:(JavaNioFileAttributeFileTime *)time;

/*!
 @brief Sets the last modification time of the entry.
 <p> When output to a ZIP file or ZIP file formatted output stream
  the last modification time set by this method will be stored into
  zip file entry's <code>date and time fields</code> in <code>standard
  MS-DOS date and time format</code>
 ), and the extended timestamp fields
  in <code>optional extra data</code> in UTC time.
 @param time The last modification time of the entry
 @return This zip entry
 @throw NullPointerExceptionif the <code>time</code> is null
 - seealso: #getLastModifiedTime()
 @since 1.8
 */
- (JavaUtilZipZipEntry *)setLastModifiedTimeWithJavaNioFileAttributeFileTime:(JavaNioFileAttributeFileTime *)time;

/*!
 @brief Sets the compression method for the entry.
 @param method the compression method, either STORED or DEFLATED
 @throw IllegalArgumentExceptionif the specified compression
           method is invalid
 - seealso: #getMethod()
 */
- (void)setMethodWithInt:(jint)method;

/*!
 @brief Sets the uncompressed size of the entry data.
 @param size the uncompressed size in bytes
 @throw IllegalArgumentExceptionif the specified size is less
          than 0, is greater than 0xFFFFFFFF when         
 <a href="package-summary.html#zip64">ZIP64 format</a> is not supported,
          or is less than 0 when ZIP64 is supported
 - seealso: #getSize()
 */
- (void)setSizeWithLong:(jlong)size;

/*!
 @brief Sets the last modification time of the entry.
 <p> If the entry is output to a ZIP file or ZIP file formatted
  output stream the last modification time set by this method will
  be stored into the <code>date and time fields</code> of the zip file
  entry and encoded in standard <code>MS-DOS date and time format</code>.
  The <code>default TimeZone</code> is
  used to convert the epoch time to the MS-DOS data and time.
 @param time The last modification time of the entry in milliseconds
           since the epoch
 - seealso: #getTime()
 - seealso: #getLastModifiedTime()
 */
- (void)setTimeWithLong:(jlong)time;

/*!
 @brief Returns a string representation of the ZIP entry.
 */
- (NSString *)description;

#pragma mark Package-Private

/*!
 @brief Creates a new un-initialized zip entry
 */
- (instancetype __nonnull)init;

/*!
 @brief Sets the optional extra field data for the entry.
 @param extra the extra field data bytes
 @param doZIP64 if true, set size and csize from ZIP64 fields if present
 */
- (void)setExtra0WithByteArray:(IOSByteArray *)extra
                   withBoolean:(jboolean)doZIP64;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipZipEntry)

J2OBJC_FIELD_SETTER(JavaUtilZipZipEntry, name_, NSString *)
J2OBJC_FIELD_SETTER(JavaUtilZipZipEntry, mtime_, JavaNioFileAttributeFileTime *)
J2OBJC_FIELD_SETTER(JavaUtilZipZipEntry, atime_, JavaNioFileAttributeFileTime *)
J2OBJC_FIELD_SETTER(JavaUtilZipZipEntry, ctime_, JavaNioFileAttributeFileTime *)
J2OBJC_FIELD_SETTER(JavaUtilZipZipEntry, extra_, IOSByteArray *)
J2OBJC_FIELD_SETTER(JavaUtilZipZipEntry, comment_, NSString *)

/*!
 @brief Compression method for uncompressed entries.
 */
inline jint JavaUtilZipZipEntry_get_STORED(void);
#define JavaUtilZipZipEntry_STORED 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipZipEntry, STORED, jint)

/*!
 @brief Compression method for compressed (deflated) entries.
 */
inline jint JavaUtilZipZipEntry_get_DEFLATED(void);
#define JavaUtilZipZipEntry_DEFLATED 8
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipZipEntry, DEFLATED, jint)

/*!
 @brief DOS time constant for representing timestamps before 1980.
 */
inline jlong JavaUtilZipZipEntry_get_DOSTIME_BEFORE_1980(void);
#define JavaUtilZipZipEntry_DOSTIME_BEFORE_1980 2162688LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipZipEntry, DOSTIME_BEFORE_1980, jlong)

/*!
 @brief Approximately 128 years, in milliseconds (ignoring leap years etc).
 This establish an approximate high-bound value for DOS times in
  milliseconds since epoch, used to enable an efficient but
  sufficient bounds check to avoid generating extended last modified
  time entries.
  Calculating the exact number is locale dependent, would require loading
  TimeZone data eagerly, and would make little practical sense. Since DOS
  times theoretically go to 2107 - with compatibility not guaranteed
  after 2099 - setting this to a time that is before but near 2099
  should be sufficient.
 */
inline jlong JavaUtilZipZipEntry_get_UPPER_DOSTIME_BOUND(void);
#define JavaUtilZipZipEntry_UPPER_DOSTIME_BOUND 4036608000000LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipZipEntry, UPPER_DOSTIME_BOUND, jlong)

FOUNDATION_EXPORT void JavaUtilZipZipEntry_initWithNSString_withNSString_withLong_withLong_withLong_withInt_withInt_withByteArray_withLong_(JavaUtilZipZipEntry *self, NSString *name, NSString *comment, jlong crc, jlong compressedSize, jlong size, jint compressionMethod, jint xdostime, IOSByteArray *extra, jlong dataOffset);

FOUNDATION_EXPORT JavaUtilZipZipEntry *new_JavaUtilZipZipEntry_initWithNSString_withNSString_withLong_withLong_withLong_withInt_withInt_withByteArray_withLong_(NSString *name, NSString *comment, jlong crc, jlong compressedSize, jlong size, jint compressionMethod, jint xdostime, IOSByteArray *extra, jlong dataOffset) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipZipEntry *create_JavaUtilZipZipEntry_initWithNSString_withNSString_withLong_withLong_withLong_withInt_withInt_withByteArray_withLong_(NSString *name, NSString *comment, jlong crc, jlong compressedSize, jlong size, jint compressionMethod, jint xdostime, IOSByteArray *extra, jlong dataOffset);

FOUNDATION_EXPORT void JavaUtilZipZipEntry_initWithNSString_(JavaUtilZipZipEntry *self, NSString *name);

FOUNDATION_EXPORT JavaUtilZipZipEntry *new_JavaUtilZipZipEntry_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipZipEntry *create_JavaUtilZipZipEntry_initWithNSString_(NSString *name);

FOUNDATION_EXPORT void JavaUtilZipZipEntry_initWithJavaUtilZipZipEntry_(JavaUtilZipZipEntry *self, JavaUtilZipZipEntry *e);

FOUNDATION_EXPORT JavaUtilZipZipEntry *new_JavaUtilZipZipEntry_initWithJavaUtilZipZipEntry_(JavaUtilZipZipEntry *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipZipEntry *create_JavaUtilZipZipEntry_initWithJavaUtilZipZipEntry_(JavaUtilZipZipEntry *e);

FOUNDATION_EXPORT void JavaUtilZipZipEntry_init(JavaUtilZipZipEntry *self);

FOUNDATION_EXPORT JavaUtilZipZipEntry *new_JavaUtilZipZipEntry_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipZipEntry *create_JavaUtilZipZipEntry_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipZipEntry)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilZipZipEntry")
