//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/attribute/UserDefinedFileAttributeView.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioFileAttributeUserDefinedFileAttributeView")
#ifdef RESTRICT_JavaNioFileAttributeUserDefinedFileAttributeView
#define INCLUDE_ALL_JavaNioFileAttributeUserDefinedFileAttributeView 0
#else
#define INCLUDE_ALL_JavaNioFileAttributeUserDefinedFileAttributeView 1
#endif
#undef RESTRICT_JavaNioFileAttributeUserDefinedFileAttributeView

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileAttributeUserDefinedFileAttributeView_) && (INCLUDE_ALL_JavaNioFileAttributeUserDefinedFileAttributeView || defined(INCLUDE_JavaNioFileAttributeUserDefinedFileAttributeView))
#define JavaNioFileAttributeUserDefinedFileAttributeView_

#define RESTRICT_JavaNioFileAttributeFileAttributeView 1
#define INCLUDE_JavaNioFileAttributeFileAttributeView 1
#include "java/nio/file/attribute/FileAttributeView.h"

@class JavaNioByteBuffer;
@protocol JavaUtilList;

/*!
 @brief A file attribute view that provides a view of a file's user-defined
  attributes, sometimes known as <em>extended attributes</em>.User-defined
  file attributes are used to store metadata with a file that is not meaningful
  to the file system.
 It is primarily intended for file system implementations
  that support such a capability directly but may be emulated. The details of
  such emulation are highly implementation specific and therefore not specified. 
 <p> This <code>FileAttributeView</code> provides a view of a file's user-defined
  attributes as a set of name/value pairs, where the attribute name is
  represented by a <code>String</code>. An implementation may require to encode and
  decode from the platform or file system representation when accessing the
  attribute. The value has opaque content. This attribute view defines the 
 <code>read</code> and <code>write</code> methods to read the value into
  or write from a <code>ByteBuffer</code>. This <code>FileAttributeView</code> is not
  intended for use where the size of an attribute value is larger than <code>Integer.MAX_VALUE</code>
 .
  
 <p> User-defined attributes may be used in some implementations to store
  security related attributes so consequently, in the case of the default
  provider at least, all methods that access user-defined attributes require the 
 <code>RuntimePermission("accessUserDefinedAttributes")</code> permission when a
  security manager is installed. 
 <p> The <code>supportsFileAttributeView</code>
  method may be used to test if a specific <code>FileStore</code>
  supports the storage of user-defined
  attributes. 
 <p> Where dynamic access to file attributes is required, the <code>getAttribute</code>
  method may be used to read
  the attribute value. The attribute value is returned as a byte array (byte[]). The 
 <code>setAttribute</code> method may be used
  to write the value of a user-defined attribute from a buffer (as if by
  invoking the <code>write</code> method), or byte array (byte[]).
 @since 1.7
 */
@protocol JavaNioFileAttributeUserDefinedFileAttributeView < JavaNioFileAttributeFileAttributeView, JavaObject >

/*!
 @brief Returns the name of this attribute view.Attribute views of this type
  have the name <code>"user"</code>.
 */
- (NSString *)name;

/*!
 @brief Returns a list containing the names of the user-defined attributes.
 @return An unmodifiable list containing the names of the file's
           user-defined
 @throw IOException
 If an I/O error occurs
 @throw SecurityException
 In the case of the default provider, a security manager is
           installed, and it denies <code>RuntimePermission</code>
 <tt>("accessUserDefinedAttributes")</tt>
           or its <code>checkRead</code> method
           denies read access to the file.
 */
- (id<JavaUtilList>)list;

/*!
 @brief Returns the size of the value of a user-defined attribute.
 @param name The attribute name
 @return The size of the attribute value, in bytes.
 @throw ArithmeticException
 If the size of the attribute is larger than <code>Integer.MAX_VALUE</code>
 @throw IOException
 If an I/O error occurs
 @throw SecurityException
 In the case of the default provider, a security manager is
           installed, and it denies <code>RuntimePermission</code>
 <tt>("accessUserDefinedAttributes")</tt>
           or its <code>checkRead</code> method
           denies read access to the file.
 */
- (jint)sizeWithNSString:(NSString *)name;

/*!
 @brief Read the value of a user-defined attribute into a buffer.
 <p> This method reads the value of the attribute into the given buffer
  as a sequence of bytes, failing if the number of bytes remaining in
  the buffer is insufficient to read the complete attribute value. The
  number of bytes transferred into the buffer is <code>n</code>, where <code>n</code>
  is the size of the attribute value. The first byte in the sequence is at
  index <code>p</code> and the last byte is at index <code>p + n - 1</code>, where 
 <code>p</code> is the buffer's position. Upon return the buffer's position
  will be equal to <code>p + n</code>; its limit will not have changed. 
 <p> <b>Usage Example:</b>
  Suppose we want to read a file's MIME type that is stored as a user-defined
  attribute with the name "<code>user.mimetype</code>".
  @code

     UserDefinedFileAttributeView view =
         Files.getFileAttributeView(path, UserDefinedFileAttributeView.class);
     String name = "user.mimetype";
     ByteBuffer buf = ByteBuffer.allocate(view.size(name));
     view.read(name, buf);
     buf.flip();
     String value = Charset.defaultCharset().decode(buf).toString(); 
  
@endcode
 @param name The attribute name
 @param dst The destination buffer
 @return The number of bytes read, possibly zero
 @throw IllegalArgumentException
 If the destination buffer is read-only
 @throw IOException
 If an I/O error occurs or there is insufficient space in the
           destination buffer for the attribute value
 @throw SecurityException
 In the case of the default provider, a security manager is
           installed, and it denies <code>RuntimePermission</code>
 <tt>("accessUserDefinedAttributes")</tt>
           or its <code>checkRead</code> method
           denies read access to the file.
 - seealso: #size
 */
- (jint)readWithNSString:(NSString *)name
   withJavaNioByteBuffer:(JavaNioByteBuffer *)dst;

/*!
 @brief Writes the value of a user-defined attribute from a buffer.
 <p> This method writes the value of the attribute from a given buffer as
  a sequence of bytes. The size of the value to transfer is <code>r</code>,
  where <code>r</code> is the number of bytes remaining in the buffer, that is 
 <code>src.remaining()</code>. The sequence of bytes is transferred from the
  buffer starting at index <code>p</code>, where <code>p</code> is the buffer's
  position. Upon return, the buffer's position will be equal to <code>p + n</code>
 , where <code>n</code> is the number of bytes transferred; its limit
  will not have changed. 
 <p> If an attribute of the given name already exists then its value is
  replaced. If the attribute does not exist then it is created. If it
  implementation specific if a test to check for the existence of the
  attribute and the creation of attribute are atomic with respect to other
  file system activities. 
 <p> Where there is insufficient space to store the attribute, or the
  attribute name or value exceed an implementation specific maximum size
  then an <code>IOException</code> is thrown. 
 <p> <b>Usage Example:</b>
  Suppose we want to write a file's MIME type as a user-defined attribute: 
 @code

     UserDefinedFileAttributeView view =
         FIles.getFileAttributeView(path, UserDefinedFileAttributeView.class);
     view.write("user.mimetype", Charset.defaultCharset().encode("text/html")); 
  
@endcode
 @param name The attribute name
 @param src The buffer containing the attribute value
 @return The number of bytes written, possibly zero
 @throw IOException
 If an I/O error occurs
 @throw SecurityException
 In the case of the default provider, a security manager is
           installed, and it denies <code>RuntimePermission</code>
 <tt>("accessUserDefinedAttributes")</tt>
           or its <code>checkWrite</code>
           method denies write access to the file.
 */
- (jint)writeWithNSString:(NSString *)name
    withJavaNioByteBuffer:(JavaNioByteBuffer *)src;

/*!
 @brief Deletes a user-defined attribute.
 @param name The attribute name
 @throw IOException
 If an I/O error occurs or the attribute does not exist
 @throw SecurityException
 In the case of the default provider, a security manager is
           installed, and it denies <code>RuntimePermission</code>
 <tt>("accessUserDefinedAttributes")</tt>
           or its <code>checkWrite</code>
           method denies write access to the file.
 */
- (void)delete__WithNSString:(NSString *)name;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileAttributeUserDefinedFileAttributeView)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileAttributeUserDefinedFileAttributeView)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioFileAttributeUserDefinedFileAttributeView")
