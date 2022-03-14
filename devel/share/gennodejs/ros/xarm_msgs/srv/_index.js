
"use strict";

let SetControllerAnalogIO = require('./SetControllerAnalogIO.js')
let GetInt32 = require('./GetInt32.js')
let SetDigitalIO = require('./SetDigitalIO.js')
let GripperState = require('./GripperState.js')
let SetAxis = require('./SetAxis.js')
let GripperMove = require('./GripperMove.js')
let ClearErr = require('./ClearErr.js')
let GetFloat32List = require('./GetFloat32List.js')
let MoveAxisAngle = require('./MoveAxisAngle.js')
let SetToolModbus = require('./SetToolModbus.js')
let ConfigToolModbus = require('./ConfigToolModbus.js')
let GetDigitalIO = require('./GetDigitalIO.js')
let SetMultipleInts = require('./SetMultipleInts.js')
let GetControllerDigitalIO = require('./GetControllerDigitalIO.js')
let Move = require('./Move.js')
let GetAnalogIO = require('./GetAnalogIO.js')
let GetErr = require('./GetErr.js')
let TCPOffset = require('./TCPOffset.js')
let PlayTraj = require('./PlayTraj.js')
let MoveVelo = require('./MoveVelo.js')
let SetFloat32 = require('./SetFloat32.js')
let SetString = require('./SetString.js')
let SetInt16 = require('./SetInt16.js')
let MoveVelocity = require('./MoveVelocity.js')
let SetLoad = require('./SetLoad.js')
let GripperConfig = require('./GripperConfig.js')

module.exports = {
  SetControllerAnalogIO: SetControllerAnalogIO,
  GetInt32: GetInt32,
  SetDigitalIO: SetDigitalIO,
  GripperState: GripperState,
  SetAxis: SetAxis,
  GripperMove: GripperMove,
  ClearErr: ClearErr,
  GetFloat32List: GetFloat32List,
  MoveAxisAngle: MoveAxisAngle,
  SetToolModbus: SetToolModbus,
  ConfigToolModbus: ConfigToolModbus,
  GetDigitalIO: GetDigitalIO,
  SetMultipleInts: SetMultipleInts,
  GetControllerDigitalIO: GetControllerDigitalIO,
  Move: Move,
  GetAnalogIO: GetAnalogIO,
  GetErr: GetErr,
  TCPOffset: TCPOffset,
  PlayTraj: PlayTraj,
  MoveVelo: MoveVelo,
  SetFloat32: SetFloat32,
  SetString: SetString,
  SetInt16: SetInt16,
  MoveVelocity: MoveVelocity,
  SetLoad: SetLoad,
  GripperConfig: GripperConfig,
};
