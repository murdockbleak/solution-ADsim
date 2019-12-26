// Generated by gencpp from file duckietown_msgs/LEDInterpreter.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_LEDINTERPRETER_H
#define DUCKIETOWN_MSGS_MESSAGE_LEDINTERPRETER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace duckietown_msgs
{
template <class ContainerAllocator>
struct LEDInterpreter_
{
  typedef LEDInterpreter_<ContainerAllocator> Type;

  LEDInterpreter_()
    : header()
    , vehicle(false)
    , trafficlight(false)  {
    }
  LEDInterpreter_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , vehicle(false)
    , trafficlight(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _vehicle_type;
  _vehicle_type vehicle;

   typedef uint8_t _trafficlight_type;
  _trafficlight_type trafficlight;





  typedef boost::shared_ptr< ::duckietown_msgs::LEDInterpreter_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::LEDInterpreter_<ContainerAllocator> const> ConstPtr;

}; // struct LEDInterpreter_

typedef ::duckietown_msgs::LEDInterpreter_<std::allocator<void> > LEDInterpreter;

typedef boost::shared_ptr< ::duckietown_msgs::LEDInterpreter > LEDInterpreterPtr;
typedef boost::shared_ptr< ::duckietown_msgs::LEDInterpreter const> LEDInterpreterConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::LEDInterpreter_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::LEDInterpreter_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'duckietown_msgs': ['/home/murd0ckbl3ak/AD-simulator/ros/catkin_ws/src/duckietown_msgs/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::LEDInterpreter_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::LEDInterpreter_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::LEDInterpreter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::LEDInterpreter_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::LEDInterpreter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::LEDInterpreter_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::LEDInterpreter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "100d6a2c19dff0c3d52b5c327f7ecae9";
  }

  static const char* value(const ::duckietown_msgs::LEDInterpreter_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x100d6a2c19dff0c3ULL;
  static const uint64_t static_value2 = 0xd52b5c327f7ecae9ULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::LEDInterpreter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/LEDInterpreter";
  }

  static const char* value(const ::duckietown_msgs::LEDInterpreter_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::LEDInterpreter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"bool vehicle\n"
"bool trafficlight\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::duckietown_msgs::LEDInterpreter_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::LEDInterpreter_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.vehicle);
      stream.next(m.trafficlight);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LEDInterpreter_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::LEDInterpreter_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::LEDInterpreter_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "vehicle: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.vehicle);
    s << indent << "trafficlight: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.trafficlight);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_LEDINTERPRETER_H
