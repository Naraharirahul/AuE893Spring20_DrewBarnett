// Generated by gencpp from file people_msgs/PositionMeasurementArray.msg
// DO NOT EDIT!


#ifndef PEOPLE_MSGS_MESSAGE_POSITIONMEASUREMENTARRAY_H
#define PEOPLE_MSGS_MESSAGE_POSITIONMEASUREMENTARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <people_msgs/PositionMeasurement.h>

namespace people_msgs
{
template <class ContainerAllocator>
struct PositionMeasurementArray_
{
  typedef PositionMeasurementArray_<ContainerAllocator> Type;

  PositionMeasurementArray_()
    : header()
    , people()
    , cooccurrence()  {
    }
  PositionMeasurementArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , people(_alloc)
    , cooccurrence(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::people_msgs::PositionMeasurement_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::people_msgs::PositionMeasurement_<ContainerAllocator> >::other >  _people_type;
  _people_type people;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _cooccurrence_type;
  _cooccurrence_type cooccurrence;





  typedef boost::shared_ptr< ::people_msgs::PositionMeasurementArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::people_msgs::PositionMeasurementArray_<ContainerAllocator> const> ConstPtr;

}; // struct PositionMeasurementArray_

typedef ::people_msgs::PositionMeasurementArray_<std::allocator<void> > PositionMeasurementArray;

typedef boost::shared_ptr< ::people_msgs::PositionMeasurementArray > PositionMeasurementArrayPtr;
typedef boost::shared_ptr< ::people_msgs::PositionMeasurementArray const> PositionMeasurementArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::people_msgs::PositionMeasurementArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::people_msgs::PositionMeasurementArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace people_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'people_msgs': ['/home/drew/SCHOOL/AuE893Spring20_DrewBarnett/catkin_auefinals/src/auefinals/People_Detection/people/people_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::people_msgs::PositionMeasurementArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::people_msgs::PositionMeasurementArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::people_msgs::PositionMeasurementArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::people_msgs::PositionMeasurementArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::people_msgs::PositionMeasurementArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::people_msgs::PositionMeasurementArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::people_msgs::PositionMeasurementArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "59c860d40aa739ec920eb3ad24ae019e";
  }

  static const char* value(const ::people_msgs::PositionMeasurementArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x59c860d40aa739ecULL;
  static const uint64_t static_value2 = 0x920eb3ad24ae019eULL;
};

template<class ContainerAllocator>
struct DataType< ::people_msgs::PositionMeasurementArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "people_msgs/PositionMeasurementArray";
  }

  static const char* value(const ::people_msgs::PositionMeasurementArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::people_msgs::PositionMeasurementArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header          header\n\
\n\
# All of the people found\n\
people_msgs/PositionMeasurement[] people\n\
\n\
# The co-occurrence matrix between people\n\
float32[] cooccurrence\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: people_msgs/PositionMeasurement\n\
Header          header\n\
string          name\n\
string          object_id\n\
geometry_msgs/Point pos\n\
float64         reliability\n\
float64[9] 	covariance\n\
byte            initialization\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::people_msgs::PositionMeasurementArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::people_msgs::PositionMeasurementArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.people);
      stream.next(m.cooccurrence);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PositionMeasurementArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::people_msgs::PositionMeasurementArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::people_msgs::PositionMeasurementArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "people[]" << std::endl;
    for (size_t i = 0; i < v.people.size(); ++i)
    {
      s << indent << "  people[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::people_msgs::PositionMeasurement_<ContainerAllocator> >::stream(s, indent + "    ", v.people[i]);
    }
    s << indent << "cooccurrence[]" << std::endl;
    for (size_t i = 0; i < v.cooccurrence.size(); ++i)
    {
      s << indent << "  cooccurrence[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.cooccurrence[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PEOPLE_MSGS_MESSAGE_POSITIONMEASUREMENTARRAY_H
