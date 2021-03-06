// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: space.proto

#ifndef PROTOBUF_space_2eproto__INCLUDED
#define PROTOBUF_space_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace Space {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_space_2eproto();
void protobuf_AssignDesc_space_2eproto();
void protobuf_ShutdownFile_space_2eproto();

class TControl;
class TPlanet;
class TShip;
class TPlayer;
class TWorld;

// ===================================================================

class TControl : public ::google::protobuf::Message {
 public:
  TControl();
  virtual ~TControl();
  
  TControl(const TControl& from);
  
  inline TControl& operator=(const TControl& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const TControl& default_instance();
  
  void Swap(TControl* other);
  
  // implements Message ----------------------------------------------
  
  TControl* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TControl& from);
  void MergeFrom(const TControl& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required int32 PlanetFrom = 1;
  inline bool has_planetfrom() const;
  inline void clear_planetfrom();
  static const int kPlanetFromFieldNumber = 1;
  inline ::google::protobuf::int32 planetfrom() const;
  inline void set_planetfrom(::google::protobuf::int32 value);
  
  // required int32 PlanetTo = 2;
  inline bool has_planetto() const;
  inline void clear_planetto();
  static const int kPlanetToFieldNumber = 2;
  inline ::google::protobuf::int32 planetto() const;
  inline void set_planetto(::google::protobuf::int32 value);
  
  // required int32 EnergyPercent = 3;
  inline bool has_energypercent() const;
  inline void clear_energypercent();
  static const int kEnergyPercentFieldNumber = 3;
  inline ::google::protobuf::int32 energypercent() const;
  inline void set_energypercent(::google::protobuf::int32 value);
  
  // required string PlayerName = 4;
  inline bool has_playername() const;
  inline void clear_playername();
  static const int kPlayerNameFieldNumber = 4;
  inline const ::std::string& playername() const;
  inline void set_playername(const ::std::string& value);
  inline void set_playername(const char* value);
  inline void set_playername(const char* value, size_t size);
  inline ::std::string* mutable_playername();
  inline ::std::string* release_playername();
  
  // @@protoc_insertion_point(class_scope:Space.TControl)
 private:
  inline void set_has_planetfrom();
  inline void clear_has_planetfrom();
  inline void set_has_planetto();
  inline void clear_has_planetto();
  inline void set_has_energypercent();
  inline void clear_has_energypercent();
  inline void set_has_playername();
  inline void clear_has_playername();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int32 planetfrom_;
  ::google::protobuf::int32 planetto_;
  ::std::string* playername_;
  ::google::protobuf::int32 energypercent_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_space_2eproto();
  friend void protobuf_AssignDesc_space_2eproto();
  friend void protobuf_ShutdownFile_space_2eproto();
  
  void InitAsDefaultInstance();
  static TControl* default_instance_;
};
// -------------------------------------------------------------------

class TPlanet : public ::google::protobuf::Message {
 public:
  TPlanet();
  virtual ~TPlanet();
  
  TPlanet(const TPlanet& from);
  
  inline TPlanet& operator=(const TPlanet& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const TPlanet& default_instance();
  
  void Swap(TPlanet* other);
  
  // implements Message ----------------------------------------------
  
  TPlanet* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TPlanet& from);
  void MergeFrom(const TPlanet& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required int32 ID = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIDFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);
  
  // required int32 X = 2;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 2;
  inline ::google::protobuf::int32 x() const;
  inline void set_x(::google::protobuf::int32 value);
  
  // required int32 Y = 3;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 3;
  inline ::google::protobuf::int32 y() const;
  inline void set_y(::google::protobuf::int32 value);
  
  // required int32 Radius = 4;
  inline bool has_radius() const;
  inline void clear_radius();
  static const int kRadiusFieldNumber = 4;
  inline ::google::protobuf::int32 radius() const;
  inline void set_radius(::google::protobuf::int32 value);
  
  // required int32 PlayerId = 5;
  inline bool has_playerid() const;
  inline void clear_playerid();
  static const int kPlayerIdFieldNumber = 5;
  inline ::google::protobuf::int32 playerid() const;
  inline void set_playerid(::google::protobuf::int32 value);
  
  // required int32 Energy = 6;
  inline bool has_energy() const;
  inline void clear_energy();
  static const int kEnergyFieldNumber = 6;
  inline ::google::protobuf::int32 energy() const;
  inline void set_energy(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:Space.TPlanet)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_radius();
  inline void clear_has_radius();
  inline void set_has_playerid();
  inline void clear_has_playerid();
  inline void set_has_energy();
  inline void clear_has_energy();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  ::google::protobuf::int32 radius_;
  ::google::protobuf::int32 playerid_;
  ::google::protobuf::int32 energy_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];
  
  friend void  protobuf_AddDesc_space_2eproto();
  friend void protobuf_AssignDesc_space_2eproto();
  friend void protobuf_ShutdownFile_space_2eproto();
  
  void InitAsDefaultInstance();
  static TPlanet* default_instance_;
};
// -------------------------------------------------------------------

class TShip : public ::google::protobuf::Message {
 public:
  TShip();
  virtual ~TShip();
  
  TShip(const TShip& from);
  
  inline TShip& operator=(const TShip& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const TShip& default_instance();
  
  void Swap(TShip* other);
  
  // implements Message ----------------------------------------------
  
  TShip* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TShip& from);
  void MergeFrom(const TShip& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required int32 X = 1;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline ::google::protobuf::int32 x() const;
  inline void set_x(::google::protobuf::int32 value);
  
  // required int32 Y = 2;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline ::google::protobuf::int32 y() const;
  inline void set_y(::google::protobuf::int32 value);
  
  // required int32 PlayerID = 3;
  inline bool has_playerid() const;
  inline void clear_playerid();
  static const int kPlayerIDFieldNumber = 3;
  inline ::google::protobuf::int32 playerid() const;
  inline void set_playerid(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:Space.TShip)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_playerid();
  inline void clear_has_playerid();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  ::google::protobuf::int32 playerid_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_space_2eproto();
  friend void protobuf_AssignDesc_space_2eproto();
  friend void protobuf_ShutdownFile_space_2eproto();
  
  void InitAsDefaultInstance();
  static TShip* default_instance_;
};
// -------------------------------------------------------------------

class TPlayer : public ::google::protobuf::Message {
 public:
  TPlayer();
  virtual ~TPlayer();
  
  TPlayer(const TPlayer& from);
  
  inline TPlayer& operator=(const TPlayer& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const TPlayer& default_instance();
  
  void Swap(TPlayer* other);
  
  // implements Message ----------------------------------------------
  
  TPlayer* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TPlayer& from);
  void MergeFrom(const TPlayer& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required int32 ID = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIDFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);
  
  // required string Name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  
  // @@protoc_insertion_point(class_scope:Space.TPlayer)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_name();
  inline void clear_has_name();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* name_;
  ::google::protobuf::int32 id_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_space_2eproto();
  friend void protobuf_AssignDesc_space_2eproto();
  friend void protobuf_ShutdownFile_space_2eproto();
  
  void InitAsDefaultInstance();
  static TPlayer* default_instance_;
};
// -------------------------------------------------------------------

class TWorld : public ::google::protobuf::Message {
 public:
  TWorld();
  virtual ~TWorld();
  
  TWorld(const TWorld& from);
  
  inline TWorld& operator=(const TWorld& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const TWorld& default_instance();
  
  void Swap(TWorld* other);
  
  // implements Message ----------------------------------------------
  
  TWorld* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TWorld& from);
  void MergeFrom(const TWorld& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // repeated .Space.TPlanet Planets = 1;
  inline int planets_size() const;
  inline void clear_planets();
  static const int kPlanetsFieldNumber = 1;
  inline const ::Space::TPlanet& planets(int index) const;
  inline ::Space::TPlanet* mutable_planets(int index);
  inline ::Space::TPlanet* add_planets();
  inline const ::google::protobuf::RepeatedPtrField< ::Space::TPlanet >&
      planets() const;
  inline ::google::protobuf::RepeatedPtrField< ::Space::TPlanet >*
      mutable_planets();
  
  // repeated .Space.TShip Ships = 2;
  inline int ships_size() const;
  inline void clear_ships();
  static const int kShipsFieldNumber = 2;
  inline const ::Space::TShip& ships(int index) const;
  inline ::Space::TShip* mutable_ships(int index);
  inline ::Space::TShip* add_ships();
  inline const ::google::protobuf::RepeatedPtrField< ::Space::TShip >&
      ships() const;
  inline ::google::protobuf::RepeatedPtrField< ::Space::TShip >*
      mutable_ships();
  
  // repeated .Space.TPlayer Players = 3;
  inline int players_size() const;
  inline void clear_players();
  static const int kPlayersFieldNumber = 3;
  inline const ::Space::TPlayer& players(int index) const;
  inline ::Space::TPlayer* mutable_players(int index);
  inline ::Space::TPlayer* add_players();
  inline const ::google::protobuf::RepeatedPtrField< ::Space::TPlayer >&
      players() const;
  inline ::google::protobuf::RepeatedPtrField< ::Space::TPlayer >*
      mutable_players();
  
  // @@protoc_insertion_point(class_scope:Space.TWorld)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::Space::TPlanet > planets_;
  ::google::protobuf::RepeatedPtrField< ::Space::TShip > ships_;
  ::google::protobuf::RepeatedPtrField< ::Space::TPlayer > players_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_space_2eproto();
  friend void protobuf_AssignDesc_space_2eproto();
  friend void protobuf_ShutdownFile_space_2eproto();
  
  void InitAsDefaultInstance();
  static TWorld* default_instance_;
};
// ===================================================================


// ===================================================================

// TControl

// required int32 PlanetFrom = 1;
inline bool TControl::has_planetfrom() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TControl::set_has_planetfrom() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TControl::clear_has_planetfrom() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TControl::clear_planetfrom() {
  planetfrom_ = 0;
  clear_has_planetfrom();
}
inline ::google::protobuf::int32 TControl::planetfrom() const {
  return planetfrom_;
}
inline void TControl::set_planetfrom(::google::protobuf::int32 value) {
  set_has_planetfrom();
  planetfrom_ = value;
}

// required int32 PlanetTo = 2;
inline bool TControl::has_planetto() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TControl::set_has_planetto() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TControl::clear_has_planetto() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TControl::clear_planetto() {
  planetto_ = 0;
  clear_has_planetto();
}
inline ::google::protobuf::int32 TControl::planetto() const {
  return planetto_;
}
inline void TControl::set_planetto(::google::protobuf::int32 value) {
  set_has_planetto();
  planetto_ = value;
}

// required int32 EnergyPercent = 3;
inline bool TControl::has_energypercent() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TControl::set_has_energypercent() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TControl::clear_has_energypercent() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TControl::clear_energypercent() {
  energypercent_ = 0;
  clear_has_energypercent();
}
inline ::google::protobuf::int32 TControl::energypercent() const {
  return energypercent_;
}
inline void TControl::set_energypercent(::google::protobuf::int32 value) {
  set_has_energypercent();
  energypercent_ = value;
}

// required string PlayerName = 4;
inline bool TControl::has_playername() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void TControl::set_has_playername() {
  _has_bits_[0] |= 0x00000008u;
}
inline void TControl::clear_has_playername() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void TControl::clear_playername() {
  if (playername_ != &::google::protobuf::internal::kEmptyString) {
    playername_->clear();
  }
  clear_has_playername();
}
inline const ::std::string& TControl::playername() const {
  return *playername_;
}
inline void TControl::set_playername(const ::std::string& value) {
  set_has_playername();
  if (playername_ == &::google::protobuf::internal::kEmptyString) {
    playername_ = new ::std::string;
  }
  playername_->assign(value);
}
inline void TControl::set_playername(const char* value) {
  set_has_playername();
  if (playername_ == &::google::protobuf::internal::kEmptyString) {
    playername_ = new ::std::string;
  }
  playername_->assign(value);
}
inline void TControl::set_playername(const char* value, size_t size) {
  set_has_playername();
  if (playername_ == &::google::protobuf::internal::kEmptyString) {
    playername_ = new ::std::string;
  }
  playername_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* TControl::mutable_playername() {
  set_has_playername();
  if (playername_ == &::google::protobuf::internal::kEmptyString) {
    playername_ = new ::std::string;
  }
  return playername_;
}
inline ::std::string* TControl::release_playername() {
  clear_has_playername();
  if (playername_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = playername_;
    playername_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// TPlanet

// required int32 ID = 1;
inline bool TPlanet::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TPlanet::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TPlanet::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TPlanet::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 TPlanet::id() const {
  return id_;
}
inline void TPlanet::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// required int32 X = 2;
inline bool TPlanet::has_x() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TPlanet::set_has_x() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TPlanet::clear_has_x() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TPlanet::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline ::google::protobuf::int32 TPlanet::x() const {
  return x_;
}
inline void TPlanet::set_x(::google::protobuf::int32 value) {
  set_has_x();
  x_ = value;
}

// required int32 Y = 3;
inline bool TPlanet::has_y() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TPlanet::set_has_y() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TPlanet::clear_has_y() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TPlanet::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline ::google::protobuf::int32 TPlanet::y() const {
  return y_;
}
inline void TPlanet::set_y(::google::protobuf::int32 value) {
  set_has_y();
  y_ = value;
}

// required int32 Radius = 4;
inline bool TPlanet::has_radius() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void TPlanet::set_has_radius() {
  _has_bits_[0] |= 0x00000008u;
}
inline void TPlanet::clear_has_radius() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void TPlanet::clear_radius() {
  radius_ = 0;
  clear_has_radius();
}
inline ::google::protobuf::int32 TPlanet::radius() const {
  return radius_;
}
inline void TPlanet::set_radius(::google::protobuf::int32 value) {
  set_has_radius();
  radius_ = value;
}

// required int32 PlayerId = 5;
inline bool TPlanet::has_playerid() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void TPlanet::set_has_playerid() {
  _has_bits_[0] |= 0x00000010u;
}
inline void TPlanet::clear_has_playerid() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void TPlanet::clear_playerid() {
  playerid_ = 0;
  clear_has_playerid();
}
inline ::google::protobuf::int32 TPlanet::playerid() const {
  return playerid_;
}
inline void TPlanet::set_playerid(::google::protobuf::int32 value) {
  set_has_playerid();
  playerid_ = value;
}

// required int32 Energy = 6;
inline bool TPlanet::has_energy() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void TPlanet::set_has_energy() {
  _has_bits_[0] |= 0x00000020u;
}
inline void TPlanet::clear_has_energy() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void TPlanet::clear_energy() {
  energy_ = 0;
  clear_has_energy();
}
inline ::google::protobuf::int32 TPlanet::energy() const {
  return energy_;
}
inline void TPlanet::set_energy(::google::protobuf::int32 value) {
  set_has_energy();
  energy_ = value;
}

// -------------------------------------------------------------------

// TShip

// required int32 X = 1;
inline bool TShip::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TShip::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TShip::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TShip::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline ::google::protobuf::int32 TShip::x() const {
  return x_;
}
inline void TShip::set_x(::google::protobuf::int32 value) {
  set_has_x();
  x_ = value;
}

// required int32 Y = 2;
inline bool TShip::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TShip::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TShip::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TShip::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline ::google::protobuf::int32 TShip::y() const {
  return y_;
}
inline void TShip::set_y(::google::protobuf::int32 value) {
  set_has_y();
  y_ = value;
}

// required int32 PlayerID = 3;
inline bool TShip::has_playerid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TShip::set_has_playerid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TShip::clear_has_playerid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TShip::clear_playerid() {
  playerid_ = 0;
  clear_has_playerid();
}
inline ::google::protobuf::int32 TShip::playerid() const {
  return playerid_;
}
inline void TShip::set_playerid(::google::protobuf::int32 value) {
  set_has_playerid();
  playerid_ = value;
}

// -------------------------------------------------------------------

// TPlayer

// required int32 ID = 1;
inline bool TPlayer::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TPlayer::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TPlayer::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TPlayer::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 TPlayer::id() const {
  return id_;
}
inline void TPlayer::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// required string Name = 2;
inline bool TPlayer::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TPlayer::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TPlayer::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TPlayer::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& TPlayer::name() const {
  return *name_;
}
inline void TPlayer::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void TPlayer::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void TPlayer::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* TPlayer::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* TPlayer::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// TWorld

// repeated .Space.TPlanet Planets = 1;
inline int TWorld::planets_size() const {
  return planets_.size();
}
inline void TWorld::clear_planets() {
  planets_.Clear();
}
inline const ::Space::TPlanet& TWorld::planets(int index) const {
  return planets_.Get(index);
}
inline ::Space::TPlanet* TWorld::mutable_planets(int index) {
  return planets_.Mutable(index);
}
inline ::Space::TPlanet* TWorld::add_planets() {
  return planets_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Space::TPlanet >&
TWorld::planets() const {
  return planets_;
}
inline ::google::protobuf::RepeatedPtrField< ::Space::TPlanet >*
TWorld::mutable_planets() {
  return &planets_;
}

// repeated .Space.TShip Ships = 2;
inline int TWorld::ships_size() const {
  return ships_.size();
}
inline void TWorld::clear_ships() {
  ships_.Clear();
}
inline const ::Space::TShip& TWorld::ships(int index) const {
  return ships_.Get(index);
}
inline ::Space::TShip* TWorld::mutable_ships(int index) {
  return ships_.Mutable(index);
}
inline ::Space::TShip* TWorld::add_ships() {
  return ships_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Space::TShip >&
TWorld::ships() const {
  return ships_;
}
inline ::google::protobuf::RepeatedPtrField< ::Space::TShip >*
TWorld::mutable_ships() {
  return &ships_;
}

// repeated .Space.TPlayer Players = 3;
inline int TWorld::players_size() const {
  return players_.size();
}
inline void TWorld::clear_players() {
  players_.Clear();
}
inline const ::Space::TPlayer& TWorld::players(int index) const {
  return players_.Get(index);
}
inline ::Space::TPlayer* TWorld::mutable_players(int index) {
  return players_.Mutable(index);
}
inline ::Space::TPlayer* TWorld::add_players() {
  return players_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Space::TPlayer >&
TWorld::players() const {
  return players_;
}
inline ::google::protobuf::RepeatedPtrField< ::Space::TPlayer >*
TWorld::mutable_players() {
  return &players_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Space

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_space_2eproto__INCLUDED
