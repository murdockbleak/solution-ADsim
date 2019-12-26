
"use strict";

let TagInfo = require('./TagInfo.js');
let Pose2DStamped = require('./Pose2DStamped.js');
let VehiclePose = require('./VehiclePose.js');
let KinematicsWeights = require('./KinematicsWeights.js');
let StreetNames = require('./StreetNames.js');
let LanePose = require('./LanePose.js');
let ObstacleImageDetection = require('./ObstacleImageDetection.js');
let AntiInstagramHealth = require('./AntiInstagramHealth.js');
let VehicleCorners = require('./VehicleCorners.js');
let StopLineReading = require('./StopLineReading.js');
let ObstacleImageDetectionList = require('./ObstacleImageDetectionList.js');
let ObstacleProjectedDetectionList = require('./ObstacleProjectedDetectionList.js');
let StreetNameDetection = require('./StreetNameDetection.js');
let SourceTargetNodes = require('./SourceTargetNodes.js');
let Rects = require('./Rects.js');
let CarControl = require('./CarControl.js');
let SceneSegments = require('./SceneSegments.js');
let BoolStamped = require('./BoolStamped.js');
let Vector2D = require('./Vector2D.js');
let AprilTagDetection = require('./AprilTagDetection.js');
let SignalsDetection = require('./SignalsDetection.js');
let ObstacleProjectedDetection = require('./ObstacleProjectedDetection.js');
let FSMState = require('./FSMState.js');
let WheelsCmd = require('./WheelsCmd.js');
let AprilTagsWithInfos = require('./AprilTagsWithInfos.js');
let LEDDetectionArray = require('./LEDDetectionArray.js');
let Twist2DStamped = require('./Twist2DStamped.js');
let AntiInstagramTransform = require('./AntiInstagramTransform.js');
let KinematicsParameters = require('./KinematicsParameters.js');
let Segment = require('./Segment.js');
let ThetaDotSample = require('./ThetaDotSample.js');
let LEDDetection = require('./LEDDetection.js');
let DuckieSensor = require('./DuckieSensor.js');
let LEDDetectionDebugInfo = require('./LEDDetectionDebugInfo.js');
let Pixel = require('./Pixel.js');
let CoordinationClearance = require('./CoordinationClearance.js');
let Trajectory = require('./Trajectory.js');
let SegmentList = require('./SegmentList.js');
let AprilTagDetectionArray = require('./AprilTagDetectionArray.js');
let ObstacleType = require('./ObstacleType.js');
let LEDInterpreter = require('./LEDInterpreter.js');
let Vsample = require('./Vsample.js');
let CoordinationSignal = require('./CoordinationSignal.js');
let WheelsCmdStamped = require('./WheelsCmdStamped.js');
let Rect = require('./Rect.js');

module.exports = {
  TagInfo: TagInfo,
  Pose2DStamped: Pose2DStamped,
  VehiclePose: VehiclePose,
  KinematicsWeights: KinematicsWeights,
  StreetNames: StreetNames,
  LanePose: LanePose,
  ObstacleImageDetection: ObstacleImageDetection,
  AntiInstagramHealth: AntiInstagramHealth,
  VehicleCorners: VehicleCorners,
  StopLineReading: StopLineReading,
  ObstacleImageDetectionList: ObstacleImageDetectionList,
  ObstacleProjectedDetectionList: ObstacleProjectedDetectionList,
  StreetNameDetection: StreetNameDetection,
  SourceTargetNodes: SourceTargetNodes,
  Rects: Rects,
  CarControl: CarControl,
  SceneSegments: SceneSegments,
  BoolStamped: BoolStamped,
  Vector2D: Vector2D,
  AprilTagDetection: AprilTagDetection,
  SignalsDetection: SignalsDetection,
  ObstacleProjectedDetection: ObstacleProjectedDetection,
  FSMState: FSMState,
  WheelsCmd: WheelsCmd,
  AprilTagsWithInfos: AprilTagsWithInfos,
  LEDDetectionArray: LEDDetectionArray,
  Twist2DStamped: Twist2DStamped,
  AntiInstagramTransform: AntiInstagramTransform,
  KinematicsParameters: KinematicsParameters,
  Segment: Segment,
  ThetaDotSample: ThetaDotSample,
  LEDDetection: LEDDetection,
  DuckieSensor: DuckieSensor,
  LEDDetectionDebugInfo: LEDDetectionDebugInfo,
  Pixel: Pixel,
  CoordinationClearance: CoordinationClearance,
  Trajectory: Trajectory,
  SegmentList: SegmentList,
  AprilTagDetectionArray: AprilTagDetectionArray,
  ObstacleType: ObstacleType,
  LEDInterpreter: LEDInterpreter,
  Vsample: Vsample,
  CoordinationSignal: CoordinationSignal,
  WheelsCmdStamped: WheelsCmdStamped,
  Rect: Rect,
};
