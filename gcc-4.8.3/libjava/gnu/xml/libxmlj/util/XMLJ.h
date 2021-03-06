
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_libxmlj_util_XMLJ__
#define __gnu_xml_libxmlj_util_XMLJ__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace libxmlj
      {
        namespace util
        {
            class NamedInputStream;
            class XMLJ;
        }
      }
    }
  }
  namespace java
  {
    namespace net
    {
        class URL;
    }
  }
  namespace javax
  {
    namespace xml
    {
      namespace transform
      {
          class Result;
          class Source;
      }
    }
  }
  namespace org
  {
    namespace xml
    {
      namespace sax
      {
          class InputSource;
      }
    }
  }
}

class gnu::xml::libxmlj::util::XMLJ : public ::java::lang::Object
{

public:
  XMLJ();
  static void init();
  static ::gnu::xml::libxmlj::util::NamedInputStream * getInputStream(::org::xml::sax::InputSource *);
  static ::gnu::xml::libxmlj::util::NamedInputStream * getInputStream(::javax::xml::transform::Source *);
private:
  static ::java::io::InputStream * getInputStream(::java::lang::String *);
public:
  static ::gnu::xml::libxmlj::util::NamedInputStream * getInputStream(::java::net::URL *);
public: // actually package-private
  static ::gnu::xml::libxmlj::util::NamedInputStream * xmljGetInputStream(::java::lang::String *, ::java::lang::String *);
public:
  static ::java::io::OutputStream * getOutputStream(::javax::xml::transform::Result *);
  static ::java::lang::String * getAbsoluteURI(::java::lang::String *, ::java::lang::String *);
  static ::java::lang::String * getBaseURI(::java::lang::String *);
private:
  static jboolean initialised;
  static const jint LOOKAHEAD = 50;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_libxmlj_util_XMLJ__
