/* Auto-generated by genmsg_cpp for file /opt/ros/hydro/share/Butia/srv/ButiaGetButton.srv */
#ifndef BUTIA_SERVICE_BUTIAGETBUTTON_H
#define BUTIA_SERVICE_BUTIAGETBUTTON_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace Butia
{
template <class ContainerAllocator>
struct ButiaGetButtonRequest_ {
  typedef ButiaGetButtonRequest_<ContainerAllocator> Type;

  ButiaGetButtonRequest_()
  : a(0)
  {
  }

  ButiaGetButtonRequest_(const ContainerAllocator& _alloc)
  : a(0)
  {
  }

  typedef int64_t _a_type;
  int64_t a;


  typedef boost::shared_ptr< ::Butia::ButiaGetButtonRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::Butia::ButiaGetButtonRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ButiaGetButtonRequest
typedef  ::Butia::ButiaGetButtonRequest_<std::allocator<void> > ButiaGetButtonRequest;

typedef boost::shared_ptr< ::Butia::ButiaGetButtonRequest> ButiaGetButtonRequestPtr;
typedef boost::shared_ptr< ::Butia::ButiaGetButtonRequest const> ButiaGetButtonRequestConstPtr;



template <class ContainerAllocator>
struct ButiaGetButtonResponse_ {
  typedef ButiaGetButtonResponse_<ContainerAllocator> Type;

  ButiaGetButtonResponse_()
  : value(0)
  {
  }

  ButiaGetButtonResponse_(const ContainerAllocator& _alloc)
  : value(0)
  {
  }

  typedef int64_t _value_type;
  int64_t value;


  typedef boost::shared_ptr< ::Butia::ButiaGetButtonResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::Butia::ButiaGetButtonResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ButiaGetButtonResponse
typedef  ::Butia::ButiaGetButtonResponse_<std::allocator<void> > ButiaGetButtonResponse;

typedef boost::shared_ptr< ::Butia::ButiaGetButtonResponse> ButiaGetButtonResponsePtr;
typedef boost::shared_ptr< ::Butia::ButiaGetButtonResponse const> ButiaGetButtonResponseConstPtr;


struct ButiaGetButton
{

typedef ButiaGetButtonRequest Request;
typedef ButiaGetButtonResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct ButiaGetButton
} // namespace Butia

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::Butia::ButiaGetButtonRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::Butia::ButiaGetButtonRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::Butia::ButiaGetButtonRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "019706110004b728d56d8baaa8e32797";
  }

  static const char* value(const  ::Butia::ButiaGetButtonRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x019706110004b728ULL;
  static const uint64_t static_value2 = 0xd56d8baaa8e32797ULL;
};

template<class ContainerAllocator>
struct DataType< ::Butia::ButiaGetButtonRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Butia/ButiaGetButtonRequest";
  }

  static const char* value(const  ::Butia::ButiaGetButtonRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::Butia::ButiaGetButtonRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int64 a\n\
\n\
";
  }

  static const char* value(const  ::Butia::ButiaGetButtonRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::Butia::ButiaGetButtonRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::Butia::ButiaGetButtonResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::Butia::ButiaGetButtonResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::Butia::ButiaGetButtonResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6dd7c3e2ac5f4efb95e3dafd2085a161";
  }

  static const char* value(const  ::Butia::ButiaGetButtonResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x6dd7c3e2ac5f4efbULL;
  static const uint64_t static_value2 = 0x95e3dafd2085a161ULL;
};

template<class ContainerAllocator>
struct DataType< ::Butia::ButiaGetButtonResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Butia/ButiaGetButtonResponse";
  }

  static const char* value(const  ::Butia::ButiaGetButtonResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::Butia::ButiaGetButtonResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int64 value\n\
\n\
\n\
";
  }

  static const char* value(const  ::Butia::ButiaGetButtonResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::Butia::ButiaGetButtonResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::Butia::ButiaGetButtonRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.a);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ButiaGetButtonRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::Butia::ButiaGetButtonResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.value);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ButiaGetButtonResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<Butia::ButiaGetButton> {
  static const char* value() 
  {
    return "7f3e10264ccd535f5708d53bf708e428";
  }

  static const char* value(const Butia::ButiaGetButton&) { return value(); } 
};

template<>
struct DataType<Butia::ButiaGetButton> {
  static const char* value() 
  {
    return "Butia/ButiaGetButton";
  }

  static const char* value(const Butia::ButiaGetButton&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<Butia::ButiaGetButtonRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "7f3e10264ccd535f5708d53bf708e428";
  }

  static const char* value(const Butia::ButiaGetButtonRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<Butia::ButiaGetButtonRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Butia/ButiaGetButton";
  }

  static const char* value(const Butia::ButiaGetButtonRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<Butia::ButiaGetButtonResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "7f3e10264ccd535f5708d53bf708e428";
  }

  static const char* value(const Butia::ButiaGetButtonResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<Butia::ButiaGetButtonResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Butia/ButiaGetButton";
  }

  static const char* value(const Butia::ButiaGetButtonResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // BUTIA_SERVICE_BUTIAGETBUTTON_H
