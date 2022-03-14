// Generated by gencpp from file xarm_msgs/SetDigitalIORequest.msg
// DO NOT EDIT!


#ifndef XARM_MSGS_MESSAGE_SETDIGITALIOREQUEST_H
#define XARM_MSGS_MESSAGE_SETDIGITALIOREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace xarm_msgs
{
template <class ContainerAllocator>
struct SetDigitalIORequest_
{
  typedef SetDigitalIORequest_<ContainerAllocator> Type;

  SetDigitalIORequest_()
    : io_num(0)
    , value(0)  {
    }
  SetDigitalIORequest_(const ContainerAllocator& _alloc)
    : io_num(0)
    , value(0)  {
  (void)_alloc;
    }



   typedef int16_t _io_num_type;
  _io_num_type io_num;

   typedef int16_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::xarm_msgs::SetDigitalIORequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::xarm_msgs::SetDigitalIORequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetDigitalIORequest_

typedef ::xarm_msgs::SetDigitalIORequest_<std::allocator<void> > SetDigitalIORequest;

typedef boost::shared_ptr< ::xarm_msgs::SetDigitalIORequest > SetDigitalIORequestPtr;
typedef boost::shared_ptr< ::xarm_msgs::SetDigitalIORequest const> SetDigitalIORequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::xarm_msgs::SetDigitalIORequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::xarm_msgs::SetDigitalIORequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::xarm_msgs::SetDigitalIORequest_<ContainerAllocator1> & lhs, const ::xarm_msgs::SetDigitalIORequest_<ContainerAllocator2> & rhs)
{
  return lhs.io_num == rhs.io_num &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::xarm_msgs::SetDigitalIORequest_<ContainerAllocator1> & lhs, const ::xarm_msgs::SetDigitalIORequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace xarm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::xarm_msgs::SetDigitalIORequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xarm_msgs::SetDigitalIORequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::xarm_msgs::SetDigitalIORequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::xarm_msgs::SetDigitalIORequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xarm_msgs::SetDigitalIORequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xarm_msgs::SetDigitalIORequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::xarm_msgs::SetDigitalIORequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1771f2d1811ba054f649ad2a6a53d52f";
  }

  static const char* value(const ::xarm_msgs::SetDigitalIORequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1771f2d1811ba054ULL;
  static const uint64_t static_value2 = 0xf649ad2a6a53d52fULL;
};

template<class ContainerAllocator>
struct DataType< ::xarm_msgs::SetDigitalIORequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "xarm_msgs/SetDigitalIORequest";
  }

  static const char* value(const ::xarm_msgs::SetDigitalIORequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::xarm_msgs::SetDigitalIORequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Setting the digital Output port at control box or robot end connector\n"
"\n"
"int16 io_num\n"
"\n"
"int16 value\n"
"\n"
;
  }

  static const char* value(const ::xarm_msgs::SetDigitalIORequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::xarm_msgs::SetDigitalIORequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.io_num);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetDigitalIORequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::xarm_msgs::SetDigitalIORequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::xarm_msgs::SetDigitalIORequest_<ContainerAllocator>& v)
  {
    s << indent << "io_num: ";
    Printer<int16_t>::stream(s, indent + "  ", v.io_num);
    s << indent << "value: ";
    Printer<int16_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // XARM_MSGS_MESSAGE_SETDIGITALIOREQUEST_H
