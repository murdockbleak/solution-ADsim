// Generated by gencpp from file duckietown_msgs/Pixel.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_PIXEL_H
#define DUCKIETOWN_MSGS_MESSAGE_PIXEL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace duckietown_msgs
{
template <class ContainerAllocator>
struct Pixel_
{
  typedef Pixel_<ContainerAllocator> Type;

  Pixel_()
    : u(0)
    , v(0)  {
    }
  Pixel_(const ContainerAllocator& _alloc)
    : u(0)
    , v(0)  {
  (void)_alloc;
    }



   typedef int32_t _u_type;
  _u_type u;

   typedef int32_t _v_type;
  _v_type v;





  typedef boost::shared_ptr< ::duckietown_msgs::Pixel_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::Pixel_<ContainerAllocator> const> ConstPtr;

}; // struct Pixel_

typedef ::duckietown_msgs::Pixel_<std::allocator<void> > Pixel;

typedef boost::shared_ptr< ::duckietown_msgs::Pixel > PixelPtr;
typedef boost::shared_ptr< ::duckietown_msgs::Pixel const> PixelConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::Pixel_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::Pixel_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'duckietown_msgs': ['/home/murd0ckbl3ak/AD-simulator/ros/catkin_ws/src/duckietown_msgs/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::Pixel_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::Pixel_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::Pixel_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::Pixel_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::Pixel_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::Pixel_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::Pixel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f06a7e8dd345ffb826d71a489782114b";
  }

  static const char* value(const ::duckietown_msgs::Pixel_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf06a7e8dd345ffb8ULL;
  static const uint64_t static_value2 = 0x26d71a489782114bULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::Pixel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/Pixel";
  }

  static const char* value(const ::duckietown_msgs::Pixel_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::Pixel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 u\n"
"int32 v\n"
;
  }

  static const char* value(const ::duckietown_msgs::Pixel_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::Pixel_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.u);
      stream.next(m.v);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Pixel_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::Pixel_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::Pixel_<ContainerAllocator>& v)
  {
    s << indent << "u: ";
    Printer<int32_t>::stream(s, indent + "  ", v.u);
    s << indent << "v: ";
    Printer<int32_t>::stream(s, indent + "  ", v.v);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_PIXEL_H
