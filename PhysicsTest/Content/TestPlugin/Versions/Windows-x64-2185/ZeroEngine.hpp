// MIT Licensed (see LICENSE.md).

#pragma once
#ifndef ZEROENGINE_HPP
#define ZEROENGINE_HPP

#include "Zilch.hpp"


#define ZeroCogGetComponentTemplate                                      \
  template <typename ComponentType>                                      \
  ComponentType* GetComponent()                                          \
  {                                                                      \
    Zilch::String name = ZilchTypeId(ComponentType)->Name;               \
    return static_cast<ComponentType*>                                   \
      (this->GetComponentByName(name).Dereference());                    \
  }                                                                        
#define has(ComponentType) GetComponent<ComponentType>()                   


namespace ZeroEngine
{
  class Ray;
  class Segment;
  class Aabb;
  class Sphere;
  class Plane;
  class Frustum;
  class DebugArc;
  class DebugBox;
  class DebugCapsule;
  class DebugCircle;
  class DebugCone;
  class DebugCylinder;
  class DebugFrustum;
  class DebugLine;
  class DebugLineCross;
  class DebugObb;
  class DebugSphere;
  class DebugText;
  class DebugTriangle;
  class MetaSelectionRange;
  class SendsEvents;
  class InternetProtocol;
  class Object;
  class EventObject;
  class ReferenceCountedEmpty;
  class SafeId32;
  class SafeId64;
  class ThreadSafeId32;
  class ThreadSafeId64;
  class ReferenceCountedSafeId32;
  class ReferenceCountedSafeId64;
  class ReferenceCountedThreadSafeId32;
  class ReferenceCountedThreadSafeId64;
  class ReferenceCountedObject;
  class SafeId32Object;
  class SafeId64Object;
  class ThreadSafeId32Object;
  class ThreadSafeId64Object;
  class ReferenceCountedSafeId32Object;
  class ReferenceCountedSafeId64Object;
  class ReferenceCountedThreadSafeId32Object;
  class ReferenceCountedThreadSafeId64Object;
  class ReferenceCountedEventObject;
  class SafeId32EventObject;
  class SafeId64EventObject;
  class ThreadSafeId32EventObject;
  class ThreadSafeId64EventObject;
  class ReferenceCountedSafeId32EventObject;
  class ReferenceCountedSafeId64EventObject;
  class ReferenceCountedThreadSafeId32EventObject;
  class ReferenceCountedThreadSafeId64EventObject;
  class ThreadSafeReferenceCounted;
  class MetaAttribute;
  class CogComponentMeta;
  class MetaOwner;
  class MetaGroup;
  class MetaCustomUi;
  class MetaOperations;
  class MetaPropertyFilter;
  class MetaPropertyBasicFilter;
  class MetaEditorGizmo;
  class MetaDisplay;
  class TypeNameDisplay;
  class StringNameDisplay;
  class MetaTransform;
  class MetaPropertyRename;
  class MetaShaderInput;
  class EditorPropertyExtension;
  class EditorIndexedStringArray;
  class EditorRange;
  class EditorSlider;
  class EditorRotationBasis;
  class MetaEditorResource;
  class MetaDataInheritance;
  class MetaDataInheritanceRoot;
  class MetaSerializedProperty;
  class MetaComposition;
  class MetaArray;
  class MetaArrayWrapper;
  class Event;
  class MetaLibraryEvent;
  class SelectionChangedEvent;
  class NotifyEvent;
  class PropertyEvent;
  class TypeEvent;
  class MetaSelection;
  class ObjectEvent;
  class LocalModifications;
  class PropertyPath;
  class IpAddress;
  class Revision;
  class ZeroMetaArrayRevisions;
  class Revisions;
  class MetaSerialization;
  class SerializationFilter;
  class PrimitiveMetaSerializationInteger;
  class PrimitiveMetaSerializationInteger2;
  class PrimitiveMetaSerializationInteger3;
  class PrimitiveMetaSerializationInteger4;
  class PrimitiveMetaSerializationString;
  class PrimitiveMetaSerializationBoolean;
  class PrimitiveMetaSerializationReal;
  class PrimitiveMetaSerializationReal2;
  class PrimitiveMetaSerializationReal3;
  class PrimitiveMetaSerializationReal4;
  class PrimitiveMetaSerializationMat2;
  class PrimitiveMetaSerializationMat3;
  class PrimitiveMetaSerializationMat4;
  class PrimitiveMetaSerializationQuat;
  class MetaStringSerialization;
  class EnumMetaSerialization;
  class AudioCueImport;
  class BasisType;
  class ConflictAction;
  class ImageImport;
  class LoopingMode;
  class MeshImport;
  class PhysicsImport;
  class PhysicsMeshType;
  class ScaleConversion;
  class SpriteFill;
  class SpriteSampling;
  class TrackType;
  class TextureAddressing;
  class TextureAnisotropy;
  class TextureCompression;
  class TextureFace;
  class TextureFiltering;
  class TextureFormat;
  class TextureMipMapping;
  class TextureType;
  class AudioFileLoadType;
  class ZeroMetaArrayAnimationClips;
  class AnimationClips;
  class ContentMetaComposition;
  class ContentItemMetaOperations;
  class ContentSystemEvent;
  class KeyFrameEvent;
  class TrackEvent;
  class ContentItem;
  class ContentLibrary;
  class ContentSystem;
  class ContentComposition;
  class ContentComponent;
  class BuilderComponent;
  class DataContent;
  class DataBuilder;
  class ContentTags;
  class ZilchPluginBuilder;
  class FontContent;
  class FontBuilder;
  class ImageContent;
  class ImageOptions;
  class ShowNormalGenerationOptionsFilter;
  class GeometryOptions;
  class AudioOptions;
  class ConflictOptions;
  class ImportOptions;
  class ShowPremultipliedAlphaFilter;
  class ShowGammaCorrectionFilter;
  class TextureBuilder;
  class SpriteData;
  class SpriteSourceBuilder;
  class TextContent;
  class BaseTextBuilder;
  class TextBuilder;
  class ZilchScriptBuilder;
  class ZilchFragmentBuilder;
  class ContentCopyright;
  class ContentHistory;
  class ContentNotes;
  class ContentEditorOptions;
  class ResourceTemplate;
  class RichAnimation;
  class RichAnimationBuilder;
  class TrackNode;
  class GeometryImport;
  class GeometryResourceEntry;
  class MeshBuilder;
  class PhysicsMeshBuilder;
  class AnimationClip;
  class AnimationBuilder;
  class TextureContent;
  class GeometryContent;
  class AudioContent;
  class TextureInfo;
  class SoundBuilder;
  class BinaryContent;
  class BinaryBuilder;
  class GeneratedArchetype;
  class IBroadPhase;
  class NSquaredBroadPhase;
  class BoundingBoxBroadPhase;
  class BoundingSphereBroadPhase;
  class StaticAabbTreeBroadPhase;
  class SapBroadPhase;
  class DynamicAabbTreeBroadPhase;
  class AvlDynamicAabbTreeBroadPhase;
  class DynamicBroadphasePropertyExtension;
  class StaticBroadphasePropertyExtension;
  class HierarchyNameRange;
  class HierarchyListNameRange;
  class HierarchyRange;
  class CogNameRange;
  class CogRootNameRange;
  class HierarchyListRange;
  class HierarchyListReverseRange;
  class SpaceRange;
  class SpaceMapValueRange;
  class ObjectLinkRange;
  class JoystickRange;
  class CogHashSetRange;
  class ResourceTableEntryRange;
  class OperationListRange;
  class GameSessionRange;
  class ActionExecuteMode;
  class ActionState;
  class AnimationBlendMode;
  class AnimationBlendType;
  class AnimationPlayMode;
  class Buttons;
  class CogPathPreference;
  class Cursor;
  class Ease;
  class FlickedStick;
  class InputDevice;
  class Keys;
  class KeyState;
  class LauncherAutoRunMode;
  class Location;
  class CurveType;
  class MouseButtons;
  class ProgressType;
  class SplineType;
  class StoreResult;
  class StreamType;
  class TabWidth;
  class TimeMode;
  class WindowState;
  class WindowStyleFlags;
  class ZeroMetaArrayContentLibraryReferenceArray;
  class ContentLibraryReferenceArray;
  class DataSource;
  class System;
  class TransformMetaTransform;
  class CogMetaComposition;
  class CogMetaDataInheritance;
  class CogMetaDisplay;
  class CogMetaSerialization;
  class CogMetaOperations;
  class CogMetaTransform;
  class CogArchetypeExtension;
  class CogSerializationFilter;
  class CogPathMetaSerialization;
  class ComponentMetaDataInheritance;
  class DataResourceInheritance;
  class ResourceMetaSerialization;
  class EngineMetaComposition;
  class HierarchyComposition;
  class MetaResource;
  class ComponentMetaOperations;
  class ResourceMetaOperations;
  class CogArchetypePropertyFilter;
  class CogPathMetaComposition;
  class MetaEditorScriptObject;
  class MetaDependency;
  class MetaInterface;
  class RaycasterMetaComposition;
  class CogPathEvent;
  class UpdateEvent;
  class ResourceEvent;
  class InputDeviceEvent;
  class GameEvent;
  class AnimationGraphEvent;
  class KeyboardEvent;
  class FileEditEvent;
  class KeyboardTextEvent;
  class OsMouseEvent;
  class HierarchyEvent;
  class JoystickEvent;
  class CogInitializerEvent;
  class ObjectLinkEvent;
  class ObjectLinkPointChangedEvent;
  class HeightMapEvent;
  class AreaEvent;
  class GamepadEvent;
  class OperationQueueEvent;
  class OsWindowEvent;
  class OsWindowBorderHitTest;
  class OsMouseDropEvent;
  class SavingEvent;
  class ScriptEvent;
  class DataEvent;
  class DataReplaceEvent;
  class CogReplaceEvent;
  class TextEvent;
  class TextErrorEvent;
  class ProgressEvent;
  class OsFileSelection;
  class ClipboardEvent;
  class ZilchCompiledEvent;
  class ZilchCompileFragmentEvent;
  class ZilchCompileEvent;
  class SplineEvent;
  class BlockingTaskEvent;
  class AsyncProcessEvent;
  class Component;
  class Transform;
  class Hierarchy;
  class TimeSpace;
  class ObjectLink;
  class ObjectLinkAnchor;
  class AnimationGraph;
  class SimpleAnimation;
  class HeightMap;
  class Area;
  class ProjectSettings;
  class ProjectDescription;
  class Cog;
  class Space;
  class ResourceDisplayFunctions;
  class Resource;
  class DataResource;
  class ResourceSystem;
  class ResourcePackageDisplay;
  class ResourcePackage;
  class ResourceLibrary;
  class CogPath;
  class Engine;
  class GameSession;
  class AnimationNode;
  class PoseNode;
  class BasicAnimation;
  class DualBlendDirectBlend;
  class DirectBlend;
  class DualBlendCrossBlend;
  class CrossBlend;
  class DualBlendSelectiveNode;
  class SelectiveNode;
  class DualBlendChainNode;
  class ChainNode;
  class ObjectTrack;
  class Animation;
  class Environment;
  class Keyboard;
  class TimeSystem;
  class OsShell;
  class OsWindow;
  class Mouse;
  class Factory;
  class Operation;
  class OperationQueue;
  class OperationBatch;
  class PropertyOperation;
  class Tracker;
  class Spline;
  class SplineSampleData;
  class SplineBakedPoints;
  class SplineBakedPoint;
  class SplineControlPoints;
  class SplineControlPoint;
  class AsyncProcess;
  class Action;
  class ActionSet;
  class Actions;
  class ActionGroup;
  class ActionSequence;
  class ActionSpace;
  class ActionDelay;
  class CogInitializer;
  class Thickness;
  class Rectangle;
  class LinkId;
  class Named;
  class EditorFlags;
  class SpaceObjects;
  class Archetype;
  class Archetyped;
  class ArchetypeInstance;
  class ObjectLinkEdge;
  class Level;
  class DebugDraw;
  class DocumentResource;
  class TextBlock;
  class MainConfig;
  class EditorConfig;
  class WindowLaunchSettings;
  class FrameRateSettings;
  class DebugSettings;
  class ExportSettings;
  class ContentConfig;
  class UserConfig;
  class DeveloperConfig;
  class ZilchPluginConfig;
  class TextEditorConfig;
  class RecentProjects;
  class EditorSettings;
  class LauncherConfig;
  class LauncherLegacySettings;
  class HierarchySpline;
  class ObjectStore;
  class ResourceTable;
  class ResourceTableEntry;
  class SampleCurve;
  class HeightPatch;
  class HeightMapSource;
  class SceneGraphSource;
  class ColorGradient;
  class ContentLibraryReference;
  class SharedContent;
  class RaycastProvider;
  class Raycaster;
  class Gamepad;
  class Gamepads;
  class Tweakables;
  class RawControlMapping;
  class Joystick;
  class Joysticks;
  class EventDirectoryWatcher;
  class Job;
  class DocumentationLibrary;
  class Shortcuts;
  class ComponentProxy;
  class LauncherProjectInfo;
  class ZilchLibraryResource;
  class ZilchDocumentResource;
  class PropertyReal;
  class PropertyReal2;
  class PropertyReal3;
  class PropertyReal4;
  class PropertyQuaternion;
  class PropertyInteger;
  class PropertyBoolean;
  class PropertyString;
  class GraphicalEntryRange;
  class MultiSpriteEntryRange;
  class ParticleListRange;
  class VertexSemanticRange;
  class ArrayHandleOfMaterial;
  class ArrayHandleOfRenderGroup;
  class BlendMode;
  class BlendFactor;
  class BlendEquation;
  class CullMode;
  class DepthMode;
  class GraphicalSortMethod;
  class MeshEmitMode;
  class PerspectiveMode;
  class PrimitiveType;
  class SpriteGeometryMode;
  class SpriteParticleAnimationMode;
  class SpriteParticleGeometryMode;
  class SpriteParticleSortMode;
  class StencilMode;
  class StencilOp;
  class SystemSpace;
  class TextAlign;
  class TextureCompareFunc;
  class TextureCompareMode;
  class VertexElementType;
  class VertexSemantic;
  class ViewportScaling;
  class MaterialFactory;
  class CompositionLabelExtension;
  class HideBaseFilter;
  class GraphicalEvent;
  class GraphicalSortEvent;
  class ParticleEvent;
  class RenderTasksEvent;
  class ResourceListEvent;
  class ShaderInputsEvent;
  class Graphical;
  class SlicedDefinition;
  class Atlas;
  class BaseSprite;
  class BlendSettings;
  class BlendSettingsMrt;
  class Bone;
  class Camera;
  class ColorTargetMrt;
  class DebugGraphical;
  class DebugGraphicalPrimitive;
  class DebugGraphicalThickLine;
  class DebugGraphicalText;
  class DefinitionSet;
  class DepthSettings;
  class Font;
  class GraphicalEntry;
  class GraphicalRangeInterface;
  class GraphicsDriverSupport;
  class GraphicsEngine;
  class GraphicsRaycastProvider;
  class GraphicsSpace;
  class HeightMapModel;
  class ImageDefinition;
  class IndexBuffer;
  class Material;
  class MaterialBlock;
  class MaterialList;
  class Mesh;
  class Model;
  class MultiRenderTarget;
  class MultiSprite;
  class MultiSpriteEntry;
  class Particle;
  class ParticleAnimator;
  class ParticleCollisionPlane;
  class ParticleCollisionHeightmap;
  class ParticleEmitter;
  class ParticleSystem;
  class MaterialBlockProxy;
  class RenderGroup;
  class RenderGroupList;
  class RenderSettings;
  class RenderTarget;
  class SamplerSettings;
  class SelectionIcon;
  class ShaderInputs;
  class Skeleton;
  class SkinnedModel;
  class Sprite;
  class SpriteParticleSystem;
  class SpriteSource;
  class SpriteText;
  class SubRenderGroupPass;
  class TextDefinition;
  class Texture;
  class TextureData;
  class VertexBuffer;
  class ViewportInterface;
  class ZilchFragment;
  class ChildRenderGroupList;
  class Graphics;
  class LinearParticleAnimator;
  class ParticleAttractor;
  class ParticleColorAnimator;
  class ParticleTwister;
  class ParticleWander;
  class ParticleEmitterShared;
  class BoxParticleEmitter;
  class MeshParticleEmitter;
  class SphericalParticleEmitter;
  class ContactPointRange;
  class ContactRange;
  class JointRange;
  class CastResultsRange;
  class CastResultsArrayRange;
  class SweepResultRange;
  class PhysicsMeshVertexRange;
  class PhysicsMeshIndexRange;
  class RigidBodyDynamicState;
  class CastFilterState;
  class PhysicsEffectType;
  class PhysicsSolverPositionCorrection;
  class ConstraintPositionCorrection;
  class PhysicsSolverType;
  class PhysicsSolverSubType;
  class PhysicsIslandType;
  class PhysicsIslandPreProcessingMode;
  class PhysicsContactTangentTypes;
  class JointFrameOfReference;
  class AxisDirection;
  class PhysicsEffectInterpolationType;
  class PhysicsEffectEndCondition;
  class Mode2DStates;
  class CapsuleScalingMode;
  class CollisionFilterCollisionFlags;
  class CollisionFilterBlockType;
  class SpringDebugDrawMode;
  class SpringDebugDrawType;
  class SpringSortOrder;
  class JointTypes;
  class CollisionFilterMetaComposition;
  class PhysicsSolverConfigMetaComposition;
  class BaseCollisionEvent;
  class CollisionEvent;
  class CollisionGroupEvent;
  class CustomJointEvent;
  class JointEvent;
  class CustomPhysicsEffectEvent;
  class CastFilterEvent;
  class PreSolveEvent;
  class PhysicsEngine;
  class PhysicsSpace;
  class RigidBody;
  class Region;
  class MassOverride;
  class Collider;
  class BoxCollider;
  class CapsuleCollider;
  class ConvexMeshCollider;
  class CylinderCollider;
  class EllipsoidCollider;
  class HeightMapCollider;
  class MeshCollider;
  class MultiConvexMeshCollider;
  class SphereCollider;
  class PhysicsEffect;
  class BasicDirectionEffect;
  class ForceEffect;
  class GravityEffect;
  class BasicPointEffect;
  class PointForceEffect;
  class PointGravityEffect;
  class BuoyancyEffect;
  class DragEffect;
  class FlowEffect;
  class IgnoreSpaceEffects;
  class ThrustEffect;
  class TorqueEffect;
  class VortexEffect;
  class WindEffect;
  class CustomPhysicsEffect;
  class CustomConstraintInfo;
  class JointSpring;
  class JointLimit;
  class JointMotor;
  class JointDebugDrawConfig;
  class JointConfigOverride;
  class Joint;
  class CustomJoint;
  class ConstraintConfigBlock;
  class StickJoint;
  class StickJointBlock;
  class PositionJoint;
  class PositionJointBlock;
  class PrismaticJoint;
  class PrismaticJointBlock;
  class RevoluteJoint;
  class RevoluteJointBlock;
  class UniversalJoint;
  class UniversalJointBlock;
  class WeldJoint;
  class WeldJointBlock;
  class FixedAngleJoint;
  class FixedAngleJointBlock;
  class WheelJoint;
  class WheelJointBlock;
  class GearJoint;
  class GearJointBlock;
  class PulleyJoint;
  class PulleyJointBlock;
  class ManipulatorJoint;
  class ManipulatorJointBlock;
  class PhyGunJoint;
  class PhyGunJointBlock;
  class LinearAxisJoint;
  class LinearAxisJointBlock;
  class PrismaticJoint2d;
  class PrismaticJoint2dBlock;
  class RevoluteJoint2d;
  class RevoluteJoint2dBlock;
  class WheelJoint2d;
  class WheelJoint2dBlock;
  class RelativeVelocityJoint;
  class RelativeVelocityJointBlock;
  class UprightJoint;
  class UprightJointBlock;
  class CustomJointBlock;
  class ContactBlock;
  class CollisionFilterBlock;
  class CollisionStartBlock;
  class CollisionPersistedBlock;
  class CollisionEndBlock;
  class PreSolveBlock;
  class PhysicsMaterial;
  class GenericPhysicsMesh;
  class ConvexMesh;
  class MultiConvexMesh;
  class PhysicsMesh;
  class CollisionFilter;
  class CollisionGroup;
  class CollisionTable;
  class PhysicsSolverConfig;
  class PhysicsMeshVertexData;
  class PhysicsMeshIndexData;
  class MultiConvexMeshVertexData;
  class MultiConvexMeshIndexData;
  class SubConvexMesh;
  class MultiConvexMeshSubMeshData;
  class MultiConvexMeshVertexRange;
  class MultiConvexMeshIndexRange;
  class MultiConvexMeshSubMeshRange;
  class BaseCastFilter;
  class CastFilter;
  class CastResult;
  class CastResults;
  class SweepResult;
  class PhysicsCar;
  class CarWheelRef;
  class CarWheelArray;
  class PhysicsCarWheel;
  class CustomCollisionEventTracker;
  class JointCreator;
  class DynamicMotor;
  class PhysicsRaycastProvider;
  class ContactPoint;
  class ContactGraphEdge;
  class JointGraphEdge;
  class EventRange;
  class NetUserRange;
  class NetHostRange;
  class WebServerHeaderRange;
  class TcpSocketBind;
  class NetUserAddResponse;
  class Network;
  class NetRefreshResult;
  class NetRole;
  class Authority;
  class AuthorityMode;
  class DetectionMode;
  class ReliabilityMode;
  class SerializationMode;
  class RouteMode;
  class ReplicationPhase;
  class ConvergenceState;
  class BasicNetType;
  class TransportProtocol;
  class ConnectResponseMode;
  class TransmissionDirection;
  class LinkStatus;
  class LinkState;
  class ConnectResponse;
  class DisconnectReason;
  class UserConnectResponse;
  class TransferMode;
  class Receipt;
  class WebServerRequestMethod;
  class WebResponseCode;
  class ZeroMetaArrayNetPropertyInfos;
  class NetPropertyInfos;
  class ConnectionEvent;
  class ReceivedDataEvent;
  class SendableEvent;
  class WebResponseEvent;
  class WebServerRequestEvent;
  class AcquireNetHostInfo;
  class NetHostUpdate;
  class NetHostListUpdate;
  class NetPeerOpened;
  class NetPeerClosed;
  class NetGameStarted;
  class NetPeerSentConnectRequest;
  class NetPeerReceivedConnectRequest;
  class NetPeerSentConnectResponse;
  class NetPeerReceivedConnectResponse;
  class NetLinkConnected;
  class NetLinkDisconnected;
  class NetLevelStarted;
  class NetPeerSentUserAddRequest;
  class NetPeerReceivedUserAddRequest;
  class NetPeerSentUserAddResponse;
  class NetPeerReceivedUserAddResponse;
  class NetUserLostObjectOwnership;
  class NetUserAcquiredObjectOwnership;
  class RegisterCppNetProperties;
  class NetObjectOnline;
  class NetObjectOffline;
  class NetUserOwnerChanged;
  class NetChannelPropertyChange;
  class NetEventSent;
  class NetEventReceived;
  class NetHostRecordEvent;
  class EventBundleMetaComposition;
  class PropertyFilterMultiPrimitiveTypes;
  class PropertyFilterFloatingPointTypes;
  class PropertyFilterArithmeticTypes;
  class EditInGameFilter;
  class MetaNetProperty;
  class PropertyFilterOther;
  class PropertyFilterBoolean;
  class PropertyFilterInteger;
  class PropertyFilterDoubleInteger;
  class PropertyFilterInteger2;
  class PropertyFilterInteger3;
  class PropertyFilterInteger4;
  class PropertyFilterReal;
  class PropertyFilterDoubleReal;
  class PropertyFilterReal2;
  class PropertyFilterReal3;
  class PropertyFilterReal4;
  class PropertyFilterQuaternion;
  class PropertyFilterString;
  class TcpSocket;
  class SimpleSocket;
  class ConnectionData;
  class WebServer;
  class AsyncWebRequest;
  class WebRequester;
  class BitStream;
  class EventBundle;
  class NetPropertyInfo;
  class NetPropertyConfig;
  class NetPropertyType;
  class NetProperty;
  class NetChannelConfig;
  class NetChannelType;
  class NetChannel;
  class NetHost;
  class NetHostRecord;
  class NetObject;
  class NetSpace;
  class NetUser;
  class NetPeer;
  class SoundInstanceRange;
  class NodeInfoListRange;
  class FalloffCurveType;
  class SoundPlayMode;
  class SoundSelectMode;
  class SynthWaveType;
  class AudioMixTypes;
  class AudioLatency;
  class GranularSynthWindows;
  class ZeroMetaArraySounds;
  class Sounds;
  class ZeroMetaArraySoundTags;
  class SoundTags;
  class SoundInstanceEvent;
  class SoundEvent;
  class MidiEvent;
  class AudioFloatDataEvent;
  class CustomAudioNodeEvent;
  class AudioByteDataEvent;
  class Audio;
  class SoundNode;
  class SimpleCollapseNode;
  class SoundAsset;
  class SoundListener;
  class ListenerNode;
  class AudioSettings;
  class SoundSpace;
  class SoundAttenuatorDisplay;
  class SoundAttenuator;
  class AttenuatorNode;
  class SoundEmitterDisplay;
  class SoundEmitter;
  class EmitterNode;
  class SoundInstance;
  class SoundEntryDisplay;
  class SoundEntry;
  class SoundTagEntryDisplay;
  class SoundTagEntry;
  class SoundCueDisplay;
  class SoundCue;
  class SoundDisplay;
  class Sound;
  class SimpleSound;
  class SoundBuffer;
  class CustomAudioNode;
  class GeneratedWaveNode;
  class VolumeNode;
  class PitchNode;
  class LowPassNode;
  class HighPassNode;
  class BandPassNode;
  class EqualizerNode;
  class ReverbNode;
  class DelayNode;
  class FlangerNode;
  class ChorusNode;
  class RecordingNode;
  class CompressorNode;
  class ExpanderNode;
  class SoundTag;
  class PanningNode;
  class AddNoiseNode;
  class AdsrEnvelope;
  class AdditiveSynthNode;
  class GranularSynthNode;
  class ModulationNode;
  class MicrophoneInputNode;
  class SaveAudioNode;
  class SoundTagDisplay;
  class TagObject;
  class NodePrintInfo;
  class OutputNode;
  class CombineNode;
  class CombineAndPauseNode;
  class DecompressedSoundAsset;
  class StreamingSoundAsset;
  class ContextMenuEntryChildrenRange;
  class VerticalAlignment;
  class HorizontalAlignment;
  class IndicatorSide;
  class ToolTipColorScheme;
  class FocusEvent;
  class MouseEvent;
  class CommandEvent;
  class CommandUpdateEvent;
  class CommandCaptureContextEvent;
  class HighlightBorderEvent;
  class TabModifiedEvent;
  class TabRenamedEvent;
  class QueryModifiedSaveEvent;
  class HandleableEvent;
  class WindowTabEvent;
  class MainWindowTransformEvent;
  class MouseDragEvent;
  class ModalConfirmEvent;
  class ModalButtonEvent;
  class SearchViewEvent;
  class AlternateSearchCompletedEvent;
  class TagEvent;
  class ContextMenuEvent;
  class LayoutArea;
  class Layout;
  class FillLayout;
  class StackLayout;
  class EdgeDockLayout;
  class DockLayout;
  class RatioLayout;
  class GridLayout;
  class SizePolicies;
  class Widget;
  class Composite;
  class MultiDock;
  class RootWidget;
  class MainWindow;
  class MouseManipulation;
  class BaseScrollArea;
  class ScrollArea;
  class ButtonBase;
  class TextButton;
  class IconButton;
  class ToggleIconButton;
  class ListBox;
  class ComboBox;
  class StringComboBox;
  class ToolTip;
  class TextureView;
  class EditText;
  class TextBox;
  class SearchView;
  class SearchViewElement;
  class Label;
  class ProgressBar;
  class Slider;
  class SelectorButton;
  class ImageWidget;
  class CheckBox;
  class TextCheckBox;
  class WidgetManager;
  class CommandExecuter;
  class CommandManager;
  class MetaScriptTagAttribute;
  class MetaScriptShortcutAttribute;
  class Spacer;
  class Splitter;
  class TabArea;
  class Window;
  class Viewport;
  class ContextMenuEntry;
  class ContextMenuEntryDivider;
  class ContextMenuEntryCommand;
  class ContextMenuEntryMenu;
  class MenuBarItem;
  class MenuBar;
  class MultiManager;
  class Modal;
  class Text;
  class MultiLineText;
  class OrientationBases;
  class SplineAnimatorMode;
  class PathFinderStatus;
  class IndexedHalfEdgeMeshVertexArrayRange;
  class IndexedHalfEdgeMeshEdgeArrayRange;
  class IndexedHalfEdgeFaceEdgeIndexArrayRange;
  class IndexedHalfEdgeMeshFaceArrayRange;
  class MouseFileDropEvent;
  class ViewportMouseEvent;
  class ReactiveViewport;
  class GameWidget;
  class TileMapSource;
  class Reactive;
  class ReactiveSpace;
  class MouseCapture;
  class Orientation;
  class TileMap;
  class RandomContext;
  class CameraViewport;
  class DefaultGameSetup;
  class PathFinderBaseEvent;
  class PathFinderEvent;
  class PathFinderGridEvent;
  class PathFinder;
  class PathFinderRequest;
  class PathFinderGrid;
  class PathFinderMesh;
  class SplineParticleEmitter;
  class SplineParticleAnimator;
  class UnitTestSystem;
  class UnitTestEvent;
  class UnitTestEndFrameEvent;
  class UnitTestBaseMouseEvent;
  class UnitTestMouseEvent;
  class UnitTestMouseDropEvent;
  class UnitTestKeyboardEvent;
  class UnitTestKeyboardTextEvent;
  class UnitTestWindowEvent;
  class IndexedHalfEdgeMeshVertexArray;
  class IndexedHalfEdgeMeshEdgeArray;
  class IndexedHalfEdgeFaceEdgeIndexArray;
  class IndexedHalfEdgeMeshFaceArray;
  class IndexedHalfEdge;
  class IndexedHalfEdgeFace;
  class IndexedHalfEdgeMesh;
  class QuickHull3D;
  class Zero;
  class GizmoGrab;
  class GizmoBasis;
  class GizmoPivot;
  class UpdateMode;
  class IncludeMode;
  class GizmoDragMode;
  class GizmoGrabMode;
  class GizmoSnapMode;
  class DockArea;
  class EditorMode;
  class MultiConvexMeshDrawMode;
  class MultiConvexMeshSnappingMode;
  class MultiConvexMeshAutoComputeMode;
  class MultiConvexMeshAutoComputeMethod;
  class ControlMode;
  class CameraDragMode;
  class Placement;
  class ArrowHeadType;
  class JointToolTypes;
  class TimeDisplay;
  class HeightTool;
  class HeightTextureSelect;
  class CellIndexType;
  class SpriteOrigin;
  class TileEditor2DSubToolType;
  class SpringSubTools;
  class ImportMode;
  class PlayGameOptions;
  class ImportFrames;
  class LauncherCommunicationEvent;
  class BackgroundTaskEvent;
  class EditorEvent;
  class MetaDropEvent;
  class PostAddResourceEvent;
  class TreeEvent;
  class TreeViewHeaderAddedEvent;
  class ValueEvent;
  class TileViewEvent;
  class CurveEvent;
  class TextUpdatedEvent;
  class ConsoleTextEvent;
  class MessageBoxEvent;
  class ColorEvent;
  class TextEditorEvent;
  class ObjectPollEvent;
  class GizmoEvent;
  class GizmoUpdateEvent;
  class GizmoRayTestEvent;
  class RingGizmoEvent;
  class TranslateGizmoUpdateEvent;
  class ScaleGizmoUpdateEvent;
  class RotateGizmoUpdateEvent;
  class ObjectTransformGizmoEvent;
  class RotationBasisGizmoAabbQueryEvent;
  class ToolGizmoEvent;
  class ManipulatorToolEvent;
  class SelectToolFrustumEvent;
  class BugReporter;
  class MetaPropertyEditor;
  class MetaCompositionWrapper;
  class BackgroundTasks;
  class StressTest;
  class GeneralSearchView;
  class CurveDraggable;
  class CurveControlPoint;
  class CurveTangent;
  class Document;
  class DocumentManager;
  class Command;
  class CogCommand;
  class EditorScriptObjectsCogCommand;
  class CogCommandManager;
  class PropertyView;
  class FormattedInPlaceText;
  class InPlaceTextEditor;
  class ValueEditorFactory;
  class PreviewWidget;
  class PreviewWidgetFactory;
  class TileViewWidget;
  class TileView;
  class ItemList;
  class WeightedComposite;
  class ItemGroup;
  class Item;
  class ImportButton;
  class ContentPackage;
  class Editor;
  class EditorMain;
  class LauncherOpenProjectComposite;
  class LauncherSingletonCommunication;
  class LauncherDebuggerCommunication;
  class SimpleDebuggerListener;
  class MainPropertyView;
  class ColorScheme;
  class TextEditor;
  class GridDraw;
  class EditorCameraController;
  class EditorViewport;
  class Gizmo;
  class GizmoSpace;
  class GizmoDrag;
  class SimpleGizmoBase;
  class SquareGizmo;
  class ArrowGizmo;
  class RingGizmo;
  class TranslateGizmo;
  class ScaleGizmo;
  class RotateGizmo;
  class ObjectTransformGizmo;
  class ObjectTranslateGizmo;
  class ObjectScaleGizmo;
  class ObjectRotateGizmo;
  class RotationBasisGizmoMetaTransform;
  class RotationBasisGizmoInitializationEvent;
  class RotationBasisGizmo;
  class OrientationBasisGizmo;
  class PhysicsCarWheelBasisGizmo;
  class RevoluteBasisGizmo;
  class ResourceEditors;
  class SpritePreview;
  class SpriteSourceEditor;
  class MultiConvexMeshPoint;
  class MultiConvexMeshPropertyViewInfo;
  class MultiConvexMeshEditor;
  class HeightMapDebugDrawer;
  class HeightMapAabbChecker;
  class SpriteSheetImporter;
  class HeightMapImporter;
  class Tool;
  class SelectTool;
  class CreationTool;
  class ObjectConnectingTool;
  class ParentingTool;
  class ToolUiEvent;
  class ToolControl;
  class ManipulatorTool;
  class GizmoCreator;
  class ObjectTransformTool;
  class ObjectTranslateTool;
  class ObjectScaleTool;
  class ObjectRotateTool;
  class JointTool;
  class SpringSubTool;
  class DragSelectSubTool;
  class SelectorSpringSubTool;
  class PointMassSelectorSubTool;
  class AnchoringSubTool;
  class PointSelectorSubTool;
  class SpringSelectorSubTool;
  class SpringCreatorSubTool;
  class RopeCreatorSubTool;
  class SpringPointProxy;
  class SpringPointProxyProperty;
  class SpringTools;
  class HeightMapSubTool;
  class HeightManipulationTool;
  class RaiseLowerTool;
  class SmoothSharpenTool;
  class FlattenTool;
  class CreateDestroyTool;
  class WeightPainterTool;
  class HeightMapTool;
  class ViewportTextWidget;
  class SpriteFrame;
  class TileEditor2DSubTool;
  class TileEditor2DDrawTool;
  class TileEditor2DSelectTool;
  class TileEditor2D;
  class TilePaletteSource;
  class TilePaletteView;
  class TilePaletteSprite;
  class ObjectView;
  class HotKeyEditor;
  class LibraryView;
  class FloatingComposite;
  class PopUp;
  class AutoCompletePopUp;
  class CallTipPopUp;
  class RemovedEntry;
  class ConsoleUi;
  class DocumentEditor;
  class AddResourceWindow;
  class ResourceTypeSearch;
  class ResourceTemplateSearch;
  class ResourceTemplateDisplay;
  class TreeView;
  class TreeRow;
  class PropertyWidget;
  class PropertyWidgetObject;
  class AddObjectWidget;
  class UiLegacyToolTip;
  class RenderGroupHierarchies;
  class DirectProperty;
  class AnimationEditorData;
  class AnimationSettings;
  class AnimationTrackView;
  class AnimationEditor;
  class StressTestDialog;
  class UiWidgetRange;
  class UiSizePolicy;
  class UiVerticalAlignment;
  class UiHorizontalAlignment;
  class UiDockMode;
  class UiFocusDirection;
  class UiStackLayoutDirection;
  class UiFocusEvent;
  class UiTransformUpdateEvent;
  class UiWidgetCastResultsRange;
  class UiWidgetComponentHierarchy;
  class UiWidget;
  class UiRootWidget;
  class UiLayout;
  class UiStackLayout;
  class UiFillLayout;
  class UiDockLayout;
  class ZilchComponent;
  class ZilchEvent;
  class ZilchObject;
  class ZilchScript;
  class ZilchPluginSource;
  class ZilchPluginLibrary;
  
  class Ray : public Zilch::ValueType
  {
  public:
    typedef Ray ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Returns the point at the given t-value.
    Zilch::Real3 GetPoint(float tValue);
    
    // Returns the t-value that would result in the given point projected onto the ray.
    float GetTValue(const Zilch::Real3& point);
    
    Zilch::Real3 GetStart();
    
    void SetStart(const Zilch::Real3& value);
    
    Zilch::Real3 GetDirection();
    
    void SetDirection(const Zilch::Real3& value);
    
    unsigned char mValue[24];
    Ray();
    
    Ray(const Ray& __0);
    
    Ray(const Zilch::Real3& start, const Zilch::Real3& direction);
  };
  
  class Segment : public Zilch::ValueType
  {
  public:
    typedef Segment ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Returns the point at the given t-value.
    Zilch::Real3 GetPoint(float tValue);
    
    // Returns the t-value that would result in the given point projected onto the segment.
    float GetTValue(const Zilch::Real3& point);
    
    Zilch::Real3 GetStart();
    
    void SetStart(const Zilch::Real3& value);
    
    Zilch::Real3 GetEnd();
    
    void SetEnd(const Zilch::Real3& value);
    
    unsigned char mValue[24];
    Segment();
    
    Segment(const Segment& __0);
    
    Segment(const Zilch::Real3& start, const Zilch::Real3& end);
  };
  
  class Aabb : public Zilch::ValueType
  {
  public:
    typedef Aabb ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Creates an aabb that contains the given aabb and point.
    static Aabb Expand(const Aabb& p0, const Zilch::Real3& p1);
    
    // Creates an aabb that contains the two given aabbs.
    static Aabb Expand(const Aabb& p0, const Aabb& p1);
    
    // Expand this aabb to contain the given point.
    void Expand(const Zilch::Real3& p0);
    
    // Expand this aabb to contain the given aabb.
    void Expand(const Aabb& p0);
    
    // Does this aabb contain the given point?
    bool ContainsPoint(const Zilch::Real3& p0);
    
    // Does this aabb overlap/intersect the given aabb?
    bool Overlaps(const Aabb& p0);
    
    void Set(const Zilch::Real3& point);
    
    void Set(const Zilch::Real3& center, const Zilch::Real3& halfExtents);
    
    // Sets this aabb to an invalid aabb (Real3.PositiveMax, Real3.NegativeMin)). This also makes expansion easier.
    void SetInvalid();
    
    Zilch::Real3 GetExtents();
    
    void SetExtents(const Zilch::Real3& value);
    
    Zilch::Real3 GetHalfExtents();
    
    void SetHalfExtents(const Zilch::Real3& value);
    
    Zilch::Real3 GetCenter();
    
    void SetCenter(const Zilch::Real3& value);
    
    float GetVolume();
    
    float GetSurfaceArea();
    
    void ZeroOut();
    
    // This function is deprecated. Use Overlaps instead
    bool Overlap(const Aabb& p0);
    
    Zilch::Real3 GetMin();
    
    void SetMin(const Zilch::Real3& value);
    
    Zilch::Real3 GetMax();
    
    void SetMax(const Zilch::Real3& value);
    
    unsigned char mValue[24];
    Aabb();
    
    Aabb(const Aabb& __0);
    
    Aabb(const Zilch::Real3& center, const Zilch::Real3& halfExtents);
  };
  
  class Sphere : public Zilch::ValueType
  {
  public:
    typedef Sphere ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Creates a sphere that contains the given sphere and point.
    static Sphere Expand(const Sphere& p0, const Zilch::Real3& p1);
    
    // Expand this sphere to contain the given point.
    void Expand(const Zilch::Real3& p0);
    
    // Does this sphere overlap/intersect the given sphere?
    bool Overlaps(const Sphere& p0);
    
    float GetVolume();
    
    float GetSurfaceArea();
    
    // This function is deprecated. Use Overlaps instead
    bool Overlap(const Sphere& p0);
    
    Zilch::Real3 GetCenter();
    
    void SetCenter(const Zilch::Real3& value);
    
    float GetRadius();
    
    void SetRadius(float value);
    
    unsigned char mValue[16];
    Sphere();
    
    Sphere(const Sphere& __0);
    
    Sphere(const Zilch::Real3& center, float radius);
  };
  
  class Plane : public Zilch::ValueType
  {
  public:
    typedef Plane ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    void Set(const Zilch::Real4& data);
    
    void Set(const Zilch::Real3& normal, const Zilch::Real3& point);
    
    Zilch::Real3 GetNormal();
    
    float GetDistance();
    
    Zilch::Real4 GetData();
    
    void SetData(const Zilch::Real4& value);
    
    unsigned char mValue[16];
    Plane();
    
    Plane(const Plane& __0);
    
    Plane(const Zilch::Real4& data);
    
    Plane(const Zilch::Real3& normal, const Zilch::Real3& point);
  };
  
  class Frustum : public Zilch::ValueType
  {
  public:
    typedef Frustum ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Plane Get(int p0);
    
    void Set(int p0, const Plane& p1);
    
    Aabb GetAabb();
    
    unsigned char mValue[96];
    Frustum();
    
    Frustum(const Frustum& __0);
  };
  
  class DebugArc : public Zilch::ValueType
  {
  public:
    typedef DebugArc ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    bool GetOnTop();
    
    void SetOnTop(bool value);
    
    bool GetViewAligned();
    
    void SetViewAligned(bool value);
    
    bool GetViewScaled();
    
    void SetViewScaled(bool value);
    
    Zilch::Real3 GetViewScaleOffset();
    
    void SetViewScaleOffset(const Zilch::Real3& value);
    
    Zilch::Real3 GetStart();
    
    void SetStart(const Zilch::Real3& value);
    
    Zilch::Real3 GetMid();
    
    void SetMid(const Zilch::Real3& value);
    
    Zilch::Real3 GetEnd();
    
    void SetEnd(const Zilch::Real3& value);
    
    unsigned char mValue[88];
    DebugArc();
    
    DebugArc(const Zilch::Real3& start, const Zilch::Real3& mid, const Zilch::Real3& end);
  };
  
  class DebugBox : public Zilch::ValueType
  {
  public:
    typedef DebugBox ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    bool GetOnTop();
    
    void SetOnTop(bool value);
    
    bool GetViewAligned();
    
    void SetViewAligned(bool value);
    
    bool GetViewScaled();
    
    void SetViewScaled(bool value);
    
    Zilch::Real3 GetViewScaleOffset();
    
    void SetViewScaleOffset(const Zilch::Real3& value);
    
    Zilch::Real3 GetPosition();
    
    void SetPosition(const Zilch::Real3& value);
    
    Zilch::Real2 GetHalfExtents();
    
    void SetHalfExtents(const Zilch::Real2& value);
    
    Zilch::Quaternion GetRotation();
    
    void SetRotation(const Zilch::Quaternion& value);
    
    bool GetFilled();
    
    void SetFilled(bool value);
    
    unsigned char mValue[88];
    DebugBox();
    
    DebugBox(const Zilch::Real3& position, const Zilch::Real2& halfExtents);
    
    DebugBox(const Zilch::Real3& position, float halfExtents);
    
    DebugBox(const Zilch::Real3& position, const Zilch::Real2& halfExtents, const Zilch::Quaternion& rotation);
    
    DebugBox(const Zilch::Real3& position, float halfExtents, const Zilch::Quaternion& rotation);
    
    DebugBox(const Aabb& aabb);
  };
  
  class DebugCapsule : public Zilch::ValueType
  {
  public:
    typedef DebugCapsule ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    bool GetOnTop();
    
    void SetOnTop(bool value);
    
    bool GetViewAligned();
    
    void SetViewAligned(bool value);
    
    bool GetViewScaled();
    
    void SetViewScaled(bool value);
    
    Zilch::Real3 GetViewScaleOffset();
    
    void SetViewScaleOffset(const Zilch::Real3& value);
    
    Zilch::Real3 GetStart();
    
    void SetStart(const Zilch::Real3& value);
    
    Zilch::Real3 GetEnd();
    
    void SetEnd(const Zilch::Real3& value);
    
    float GetRadius();
    
    void SetRadius(float value);
    
    unsigned char mValue[80];
    DebugCapsule();
    
    DebugCapsule(const Zilch::Real3& start, const Zilch::Real3& end, float radius);
    
    DebugCapsule(const Zilch::Real3& position, const Zilch::Real3& axis, float height, float radius);
  };
  
  class DebugCircle : public Zilch::ValueType
  {
  public:
    typedef DebugCircle ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    bool GetOnTop();
    
    void SetOnTop(bool value);
    
    bool GetViewAligned();
    
    void SetViewAligned(bool value);
    
    bool GetViewScaled();
    
    void SetViewScaled(bool value);
    
    Zilch::Real3 GetViewScaleOffset();
    
    void SetViewScaleOffset(const Zilch::Real3& value);
    
    Zilch::Real3 GetPosition();
    
    void SetPosition(const Zilch::Real3& value);
    
    Zilch::Real3 GetAxis();
    
    void SetAxis(const Zilch::Real3& value);
    
    float GetRadius();
    
    void SetRadius(float value);
    
    unsigned char mValue[80];
    DebugCircle();
    
    DebugCircle(const Zilch::Real3& position, const Zilch::Real3& axis, float radius);
  };
  
  class DebugCone : public Zilch::ValueType
  {
  public:
    typedef DebugCone ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    bool GetOnTop();
    
    void SetOnTop(bool value);
    
    bool GetViewAligned();
    
    void SetViewAligned(bool value);
    
    bool GetViewScaled();
    
    void SetViewScaled(bool value);
    
    Zilch::Real3 GetViewScaleOffset();
    
    void SetViewScaleOffset(const Zilch::Real3& value);
    
    Zilch::Real3 GetPosition();
    
    void SetPosition(const Zilch::Real3& value);
    
    Zilch::Real3 GetDirection();
    
    void SetDirection(const Zilch::Real3& value);
    
    float GetLength();
    
    void SetLength(float value);
    
    float GetRadius();
    
    void SetRadius(float value);
    
    unsigned char mValue[80];
    DebugCone();
    
    DebugCone(const Zilch::Real3& position, const Zilch::Real3& direction, float length, float radius);
  };
  
  class DebugCylinder : public Zilch::ValueType
  {
  public:
    typedef DebugCylinder ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    bool GetOnTop();
    
    void SetOnTop(bool value);
    
    bool GetViewAligned();
    
    void SetViewAligned(bool value);
    
    bool GetViewScaled();
    
    void SetViewScaled(bool value);
    
    Zilch::Real3 GetViewScaleOffset();
    
    void SetViewScaleOffset(const Zilch::Real3& value);
    
    Zilch::Real3 GetStart();
    
    void SetStart(const Zilch::Real3& value);
    
    Zilch::Real3 GetEnd();
    
    void SetEnd(const Zilch::Real3& value);
    
    float GetRadius();
    
    void SetRadius(float value);
    
    unsigned char mValue[80];
    DebugCylinder();
    
    DebugCylinder(const Zilch::Real3& start, const Zilch::Real3& end, float radius);
    
    DebugCylinder(const Zilch::Real3& position, const Zilch::Real3& axis, float height, float radius);
  };
  
  class DebugFrustum : public Zilch::ValueType
  {
  public:
    typedef DebugFrustum ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    bool GetOnTop();
    
    void SetOnTop(bool value);
    
    bool GetViewAligned();
    
    void SetViewAligned(bool value);
    
    bool GetViewScaled();
    
    void SetViewScaled(bool value);
    
    Zilch::Real3 GetViewScaleOffset();
    
    void SetViewScaleOffset(const Zilch::Real3& value);
    
    unsigned char mValue[144];
    DebugFrustum();
    
    DebugFrustum(const Frustum& __0);
  };
  
  class DebugLine : public Zilch::ValueType
  {
  public:
    typedef DebugLine ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    bool GetOnTop();
    
    void SetOnTop(bool value);
    
    bool GetViewAligned();
    
    void SetViewAligned(bool value);
    
    bool GetViewScaled();
    
    void SetViewScaled(bool value);
    
    Zilch::Real3 GetViewScaleOffset();
    
    void SetViewScaleOffset(const Zilch::Real3& value);
    
    Zilch::Real3 GetStart();
    
    void SetStart(const Zilch::Real3& value);
    
    Zilch::Real3 GetEnd();
    
    void SetEnd(const Zilch::Real3& value);
    
    float GetHeadSize();
    
    void SetHeadSize(float value);
    
    bool GetDualHeads();
    
    void SetDualHeads(bool value);
    
    bool GetBoxHeads();
    
    void SetBoxHeads(bool value);
    
    bool GetFilled();
    
    void SetFilled(bool value);
    
    unsigned char mValue[80];
    DebugLine();
    
    DebugLine(const Zilch::Real3& start, const Zilch::Real3& end);
    
    DebugLine(const Zilch::Real3& start, const Zilch::Real3& end, float headSize);
    
    DebugLine(const Ray& ray);
    
    DebugLine(const Ray& ray, float t);
    
    DebugLine(const Segment& segment);
  };
  
  class DebugLineCross : public Zilch::ValueType
  {
  public:
    typedef DebugLineCross ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    bool GetOnTop();
    
    void SetOnTop(bool value);
    
    bool GetViewAligned();
    
    void SetViewAligned(bool value);
    
    bool GetViewScaled();
    
    void SetViewScaled(bool value);
    
    Zilch::Real3 GetViewScaleOffset();
    
    void SetViewScaleOffset(const Zilch::Real3& value);
    
    Zilch::Real3 GetPosition();
    
    void SetPosition(const Zilch::Real3& value);
    
    float GetHalfExtents();
    
    void SetHalfExtents(float value);
    
    unsigned char mValue[64];
    DebugLineCross();
    
    DebugLineCross(const Zilch::Real3& position, float halfExtents);
  };
  
  class DebugObb : public Zilch::ValueType
  {
  public:
    typedef DebugObb ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    bool GetOnTop();
    
    void SetOnTop(bool value);
    
    bool GetViewAligned();
    
    void SetViewAligned(bool value);
    
    bool GetViewScaled();
    
    void SetViewScaled(bool value);
    
    Zilch::Real3 GetViewScaleOffset();
    
    void SetViewScaleOffset(const Zilch::Real3& value);
    
    Zilch::Real3 GetPosition();
    
    void SetPosition(const Zilch::Real3& value);
    
    Zilch::Real3 GetHalfExtents();
    
    void SetHalfExtents(const Zilch::Real3& value);
    
    Zilch::Quaternion GetRotation();
    
    void SetRotation(const Zilch::Quaternion& value);
    
    bool GetCorners();
    
    void SetCorners(bool value);
    
    bool GetFilled();
    
    void SetFilled(bool value);
    
    unsigned char mValue[88];
    DebugObb();
    
    DebugObb(const Zilch::Real3& position, const Zilch::Real3& halfExtents);
    
    DebugObb(const Zilch::Real3& position, float halfExtents);
    
    DebugObb(const Zilch::Real3& position, const Zilch::Real3& halfExtents, const Zilch::Quaternion& rotation);
    
    DebugObb(const Zilch::Real3& position, float halfExtents, const Zilch::Quaternion& rotation);
    
    DebugObb(const Zilch::Real3& position, const Zilch::Real3& halfExtents, const Zilch::Real3x3& rotation);
    
    DebugObb(const Aabb& aabb);
  };
  
  class DebugSphere : public Zilch::ValueType
  {
  public:
    typedef DebugSphere ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    bool GetOnTop();
    
    void SetOnTop(bool value);
    
    bool GetViewAligned();
    
    void SetViewAligned(bool value);
    
    bool GetViewScaled();
    
    void SetViewScaled(bool value);
    
    Zilch::Real3 GetViewScaleOffset();
    
    void SetViewScaleOffset(const Zilch::Real3& value);
    
    Zilch::Real3 GetPosition();
    
    void SetPosition(const Zilch::Real3& value);
    
    float GetRadius();
    
    void SetRadius(float value);
    
    bool GetColored();
    
    void SetColored(bool value);
    
    unsigned char mValue[64];
    DebugSphere();
    
    DebugSphere(const Zilch::Real3& position, float radius);
    
    DebugSphere(const DebugSphere& sphere);
  };
  
  class DebugText : public Zilch::ReferenceType
  {
  public:
    typedef DebugText ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    bool GetOnTop();
    
    void SetOnTop(bool value);
    
    bool GetViewAligned();
    
    void SetViewAligned(bool value);
    
    bool GetViewScaled();
    
    void SetViewScaled(bool value);
    
    Zilch::Real3 GetViewScaleOffset();
    
    void SetViewScaleOffset(const Zilch::Real3& value);
    
    Zilch::Real3 GetPosition();
    
    void SetPosition(const Zilch::Real3& value);
    
    Zilch::Quaternion GetRotation();
    
    void SetRotation(const Zilch::Quaternion& value);
    
    float GetTextHeight();
    
    void SetTextHeight(float value);
    
    Zilch::String GetText();
    
    void SetText(const Zilch::String& value);
    
    bool GetCentered();
    
    void SetCentered(bool value);
    
    unsigned char mValue[88];
    
  protected:
    DebugText(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(DebugText);
  };
  
  class DebugTriangle : public Zilch::ValueType
  {
  public:
    typedef DebugTriangle ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    bool GetOnTop();
    
    void SetOnTop(bool value);
    
    bool GetViewAligned();
    
    void SetViewAligned(bool value);
    
    bool GetViewScaled();
    
    void SetViewScaled(bool value);
    
    Zilch::Real3 GetViewScaleOffset();
    
    void SetViewScaleOffset(const Zilch::Real3& value);
    
    Zilch::Real3 GetPoint0();
    
    void SetPoint0(const Zilch::Real3& value);
    
    Zilch::Real3 GetPoint1();
    
    void SetPoint1(const Zilch::Real3& value);
    
    Zilch::Real3 GetPoint2();
    
    void SetPoint2(const Zilch::Real3& value);
    
    bool GetFilled();
    
    void SetFilled(bool value);
    
    unsigned char mValue[88];
    DebugTriangle();
    
    DebugTriangle(const Zilch::Real3& __0, const Zilch::Real3& __1, const Zilch::Real3& __2);
  };
  
  class MetaSelectionRange : public Zilch::ReferenceType
  {
  public:
    typedef MetaSelectionRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<MetaSelectionRange> GetAll();
    
    Zilch::Handle GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[72];
    
  protected:
    MetaSelectionRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(MetaSelectionRange);
  };
  
  class SendsEvents : public Zilch::Enum
  {
  public:
    typedef SendsEvents ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static SendsEvents GetFalse();
    
    static SendsEvents GetTrue();
    
    SendsEvents();
  };
  
  class InternetProtocol : public Zilch::Enum
  {
  public:
    typedef InternetProtocol ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static InternetProtocol GetUnspecified();
    
    static InternetProtocol GetV4();
    
    static InternetProtocol GetV6();
    
    static InternetProtocol GetBoth();
    
    InternetProtocol();
  };
  
  class Object : public Zilch::ReferenceType
  {
  public:
    typedef Object ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    Object(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Object);
  };
  
  class EventObject : public Object
  {
  public:
    typedef EventObject ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[96];
    
  protected:
    EventObject(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(EventObject);
  };
  
  class ReferenceCountedEmpty : public Zilch::ReferenceType
  {
  public:
    typedef ReferenceCountedEmpty ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    ReferenceCountedEmpty(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ReferenceCountedEmpty);
  };
  
  class SafeId32 : public Zilch::ReferenceType
  {
  public:
    typedef SafeId32 ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    SafeId32(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SafeId32);
  };
  
  class SafeId64 : public Zilch::ReferenceType
  {
  public:
    typedef SafeId64 ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    SafeId64(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SafeId64);
  };
  
  class ThreadSafeId32 : public Zilch::ReferenceType
  {
  public:
    typedef ThreadSafeId32 ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    ThreadSafeId32(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ThreadSafeId32);
  };
  
  class ThreadSafeId64 : public Zilch::ReferenceType
  {
  public:
    typedef ThreadSafeId64 ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    ThreadSafeId64(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ThreadSafeId64);
  };
  
  class ReferenceCountedSafeId32 : public Zilch::ReferenceType
  {
  public:
    typedef ReferenceCountedSafeId32 ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    ReferenceCountedSafeId32(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ReferenceCountedSafeId32);
  };
  
  class ReferenceCountedSafeId64 : public Zilch::ReferenceType
  {
  public:
    typedef ReferenceCountedSafeId64 ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[24];
    
  protected:
    ReferenceCountedSafeId64(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ReferenceCountedSafeId64);
  };
  
  class ReferenceCountedThreadSafeId32 : public Zilch::ReferenceType
  {
  public:
    typedef ReferenceCountedThreadSafeId32 ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    ReferenceCountedThreadSafeId32(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ReferenceCountedThreadSafeId32);
  };
  
  class ReferenceCountedThreadSafeId64 : public Zilch::ReferenceType
  {
  public:
    typedef ReferenceCountedThreadSafeId64 ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[24];
    
  protected:
    ReferenceCountedThreadSafeId64(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ReferenceCountedThreadSafeId64);
  };
  
  class ReferenceCountedObject : public Object
  {
  public:
    typedef ReferenceCountedObject ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    ReferenceCountedObject(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(ReferenceCountedObject);
  };
  
  class SafeId32Object : public Object
  {
  public:
    typedef SafeId32Object ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    SafeId32Object(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(SafeId32Object);
  };
  
  class SafeId64Object : public Object
  {
  public:
    typedef SafeId64Object ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    SafeId64Object(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(SafeId64Object);
  };
  
  class ThreadSafeId32Object : public Object
  {
  public:
    typedef ThreadSafeId32Object ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    ThreadSafeId32Object(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(ThreadSafeId32Object);
  };
  
  class ThreadSafeId64Object : public Object
  {
  public:
    typedef ThreadSafeId64Object ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    ThreadSafeId64Object(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(ThreadSafeId64Object);
  };
  
  class ReferenceCountedSafeId32Object : public Object
  {
  public:
    typedef ReferenceCountedSafeId32Object ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    ReferenceCountedSafeId32Object(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(ReferenceCountedSafeId32Object);
  };
  
  class ReferenceCountedSafeId64Object : public Object
  {
  public:
    typedef ReferenceCountedSafeId64Object ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    ReferenceCountedSafeId64Object(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(ReferenceCountedSafeId64Object);
  };
  
  class ReferenceCountedThreadSafeId32Object : public Object
  {
  public:
    typedef ReferenceCountedThreadSafeId32Object ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    ReferenceCountedThreadSafeId32Object(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(ReferenceCountedThreadSafeId32Object);
  };
  
  class ReferenceCountedThreadSafeId64Object : public Object
  {
  public:
    typedef ReferenceCountedThreadSafeId64Object ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    ReferenceCountedThreadSafeId64Object(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(ReferenceCountedThreadSafeId64Object);
  };
  
  class ReferenceCountedEventObject : public EventObject
  {
  public:
    typedef ReferenceCountedEventObject ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    ReferenceCountedEventObject(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(ReferenceCountedEventObject);
  };
  
  class SafeId32EventObject : public EventObject
  {
  public:
    typedef SafeId32EventObject ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    SafeId32EventObject(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(SafeId32EventObject);
  };
  
  class SafeId64EventObject : public EventObject
  {
  public:
    typedef SafeId64EventObject ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    SafeId64EventObject(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(SafeId64EventObject);
  };
  
  class ThreadSafeId32EventObject : public EventObject
  {
  public:
    typedef ThreadSafeId32EventObject ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    ThreadSafeId32EventObject(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(ThreadSafeId32EventObject);
  };
  
  class ThreadSafeId64EventObject : public EventObject
  {
  public:
    typedef ThreadSafeId64EventObject ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    ThreadSafeId64EventObject(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(ThreadSafeId64EventObject);
  };
  
  class ReferenceCountedSafeId32EventObject : public EventObject
  {
  public:
    typedef ReferenceCountedSafeId32EventObject ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    ReferenceCountedSafeId32EventObject(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(ReferenceCountedSafeId32EventObject);
  };
  
  class ReferenceCountedSafeId64EventObject : public EventObject
  {
  public:
    typedef ReferenceCountedSafeId64EventObject ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    ReferenceCountedSafeId64EventObject(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(ReferenceCountedSafeId64EventObject);
  };
  
  class ReferenceCountedThreadSafeId32EventObject : public EventObject
  {
  public:
    typedef ReferenceCountedThreadSafeId32EventObject ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    ReferenceCountedThreadSafeId32EventObject(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(ReferenceCountedThreadSafeId32EventObject);
  };
  
  class ReferenceCountedThreadSafeId64EventObject : public EventObject
  {
  public:
    typedef ReferenceCountedThreadSafeId64EventObject ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    ReferenceCountedThreadSafeId64EventObject(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(ReferenceCountedThreadSafeId64EventObject);
  };
  
  class ThreadSafeReferenceCounted : public Zilch::ReferenceType
  {
  public:
    typedef ThreadSafeReferenceCounted ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[24];
    
  protected:
    ThreadSafeReferenceCounted(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ThreadSafeReferenceCounted);
  };
  
  class MetaAttribute : public ReferenceCountedEventObject
  {
  public:
    typedef MetaAttribute ZilchSelf;
    typedef ReferenceCountedEventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    MetaAttribute(Zilch::NoType none) : ReferenceCountedEventObject(none) {}
    ZilchNoCopy(MetaAttribute);
  };
  
  class CogComponentMeta : public ReferenceCountedEventObject
  {
  public:
    typedef CogComponentMeta ZilchSelf;
    typedef ReferenceCountedEventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[160];
    
  protected:
    CogComponentMeta(Zilch::NoType none) : ReferenceCountedEventObject(none) {}
    ZilchNoCopy(CogComponentMeta);
  };
  
  class MetaOwner : public ReferenceCountedEventObject
  {
  public:
    typedef MetaOwner ZilchSelf;
    typedef ReferenceCountedEventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    MetaOwner(Zilch::NoType none) : ReferenceCountedEventObject(none) {}
    ZilchNoCopy(MetaOwner);
  };
  
  class MetaGroup : public MetaAttribute
  {
  public:
    typedef MetaGroup ZilchSelf;
    typedef MetaAttribute ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetName();
    
    void SetName(const Zilch::String& value);
    
    unsigned char mValue[8];
    
  protected:
    MetaGroup(Zilch::NoType none) : MetaAttribute(none) {}
    ZilchNoCopy(MetaGroup);
  };
  
  class MetaCustomUi : public MetaAttribute
  {
  public:
    typedef MetaCustomUi ZilchSelf;
    typedef MetaAttribute ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    MetaCustomUi(Zilch::NoType none) : MetaAttribute(none) {}
    ZilchNoCopy(MetaCustomUi);
  };
  
  class MetaOperations : public ReferenceCountedEventObject
  {
  public:
    typedef MetaOperations ZilchSelf;
    typedef ReferenceCountedEventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    MetaOperations(Zilch::NoType none) : ReferenceCountedEventObject(none) {}
    ZilchNoCopy(MetaOperations);
  };
  
  class MetaPropertyFilter : public MetaAttribute
  {
  public:
    typedef MetaPropertyFilter ZilchSelf;
    typedef MetaAttribute ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    MetaPropertyFilter(Zilch::NoType none) : MetaAttribute(none) {}
    ZilchNoCopy(MetaPropertyFilter);
  };
  
  class MetaPropertyBasicFilter : public MetaPropertyFilter
  {
  public:
    typedef MetaPropertyBasicFilter ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    MetaPropertyBasicFilter(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(MetaPropertyBasicFilter);
  };
  
  class MetaEditorGizmo : public MetaAttribute
  {
  public:
    typedef MetaEditorGizmo ZilchSelf;
    typedef MetaAttribute ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetGizmoArchetype();
    
    void SetGizmoArchetype(const Zilch::String& value);
    
    unsigned char mValue[8];
    
  protected:
    MetaEditorGizmo(Zilch::NoType none) : MetaAttribute(none) {}
    ZilchNoCopy(MetaEditorGizmo);
  };
  
  class MetaDisplay : public ReferenceCountedEventObject
  {
  public:
    typedef MetaDisplay ZilchSelf;
    typedef ReferenceCountedEventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    MetaDisplay(Zilch::NoType none) : ReferenceCountedEventObject(none) {}
    ZilchNoCopy(MetaDisplay);
  };
  
  class TypeNameDisplay : public MetaDisplay
  {
  public:
    typedef TypeNameDisplay ZilchSelf;
    typedef MetaDisplay ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    TypeNameDisplay(Zilch::NoType none) : MetaDisplay(none) {}
    ZilchNoCopy(TypeNameDisplay);
  };
  
  class StringNameDisplay : public MetaDisplay
  {
  public:
    typedef StringNameDisplay ZilchSelf;
    typedef MetaDisplay ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    StringNameDisplay(Zilch::NoType none) : MetaDisplay(none) {}
    ZilchNoCopy(StringNameDisplay);
  };
  
  class MetaTransform : public ReferenceCountedEventObject
  {
  public:
    typedef MetaTransform ZilchSelf;
    typedef ReferenceCountedEventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    MetaTransform(Zilch::NoType none) : ReferenceCountedEventObject(none) {}
    ZilchNoCopy(MetaTransform);
  };
  
  class MetaPropertyRename : public MetaAttribute
  {
  public:
    typedef MetaPropertyRename ZilchSelf;
    typedef MetaAttribute ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    MetaPropertyRename(Zilch::NoType none) : MetaAttribute(none) {}
    ZilchNoCopy(MetaPropertyRename);
  };
  
  class MetaShaderInput : public MetaAttribute
  {
  public:
    typedef MetaShaderInput ZilchSelf;
    typedef MetaAttribute ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetFragmentName();
    
    void SetFragmentName(const Zilch::String& value);
    
    Zilch::String GetInputName();
    
    void SetInputName(const Zilch::String& value);
    
    unsigned char mValue[16];
    
  protected:
    MetaShaderInput(Zilch::NoType none) : MetaAttribute(none) {}
    ZilchNoCopy(MetaShaderInput);
  };
  
  class EditorPropertyExtension : public MetaAttribute
  {
  public:
    typedef EditorPropertyExtension ZilchSelf;
    typedef MetaAttribute ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    EditorPropertyExtension(Zilch::NoType none) : MetaAttribute(none) {}
    ZilchNoCopy(EditorPropertyExtension);
  };
  
  class EditorIndexedStringArray : public EditorPropertyExtension
  {
  public:
    typedef EditorIndexedStringArray ZilchSelf;
    typedef EditorPropertyExtension ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    EditorIndexedStringArray(Zilch::NoType none) : EditorPropertyExtension(none) {}
    ZilchNoCopy(EditorIndexedStringArray);
  };
  
  class EditorRange : public EditorPropertyExtension
  {
  public:
    typedef EditorRange ZilchSelf;
    typedef EditorPropertyExtension ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetMin();
    
    void SetMin(float value);
    
    float GetMax();
    
    void SetMax(float value);
    
    float GetIncrement();
    
    void SetIncrement(float value);
    
    unsigned char mValue[16];
    
  protected:
    EditorRange(Zilch::NoType none) : EditorPropertyExtension(none) {}
    ZilchNoCopy(EditorRange);
  };
  
  class EditorSlider : public EditorRange
  {
  public:
    typedef EditorSlider ZilchSelf;
    typedef EditorRange ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    EditorSlider(Zilch::NoType none) : EditorRange(none) {}
    ZilchNoCopy(EditorSlider);
  };
  
  class EditorRotationBasis : public EditorPropertyExtension
  {
  public:
    typedef EditorRotationBasis ZilchSelf;
    typedef EditorPropertyExtension ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[24];
    
  protected:
    EditorRotationBasis(Zilch::NoType none) : EditorPropertyExtension(none) {}
    ZilchNoCopy(EditorRotationBasis);
  };
  
  class MetaEditorResource : public EditorPropertyExtension
  {
  public:
    typedef MetaEditorResource ZilchSelf;
    typedef EditorPropertyExtension ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetFilterTag();
    
    void SetFilterTag(const Zilch::String& value);
    
    bool GetAllowAdd();
    
    void SetAllowAdd(bool value);
    
    bool GetAllowNone();
    
    void SetAllowNone(bool value);
    
    bool GetSearchPreview();
    
    void SetSearchPreview(bool value);
    
    unsigned char mValue[24];
    
  protected:
    MetaEditorResource(Zilch::NoType none) : EditorPropertyExtension(none) {}
    ZilchNoCopy(MetaEditorResource);
  };
  
  class MetaDataInheritance : public ReferenceCountedEventObject
  {
  public:
    typedef MetaDataInheritance ZilchSelf;
    typedef ReferenceCountedEventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    MetaDataInheritance(Zilch::NoType none) : ReferenceCountedEventObject(none) {}
    ZilchNoCopy(MetaDataInheritance);
  };
  
  class MetaDataInheritanceRoot : public MetaDataInheritance
  {
  public:
    typedef MetaDataInheritanceRoot ZilchSelf;
    typedef MetaDataInheritance ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    MetaDataInheritanceRoot(Zilch::NoType none) : MetaDataInheritance(none) {}
    ZilchNoCopy(MetaDataInheritanceRoot);
  };
  
  class MetaSerializedProperty : public ReferenceCountedEventObject
  {
  public:
    typedef MetaSerializedProperty ZilchSelf;
    typedef ReferenceCountedEventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[88];
    
  protected:
    MetaSerializedProperty(Zilch::NoType none) : ReferenceCountedEventObject(none) {}
    ZilchNoCopy(MetaSerializedProperty);
  };
  
  class MetaComposition : public ReferenceCountedEventObject
  {
  public:
    typedef MetaComposition ZilchSelf;
    typedef ReferenceCountedEventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[56];
    
  protected:
    MetaComposition(Zilch::NoType none) : ReferenceCountedEventObject(none) {}
    ZilchNoCopy(MetaComposition);
  };
  
  class MetaArray : public ReferenceCountedEventObject
  {
  public:
    typedef MetaArray ZilchSelf;
    typedef ReferenceCountedEventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    MetaArray(Zilch::NoType none) : ReferenceCountedEventObject(none) {}
    ZilchNoCopy(MetaArray);
  };
  
  class MetaArrayWrapper : public MetaArray
  {
  public:
    typedef MetaArrayWrapper ZilchSelf;
    typedef MetaArray ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    MetaArrayWrapper(Zilch::NoType none) : MetaArray(none) {}
    ZilchNoCopy(MetaArrayWrapper);
  };
  
  // Base event class. All events types inherit from this class.
  class Event : public ThreadSafeId32Object
  {
  public:
    typedef Event ZilchSelf;
    typedef ThreadSafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetEventId();
    
    // Stops the event from being sent to any other connections.
    void Terminate();
    
    unsigned char mValue[16];
    
  protected:
    Event(Zilch::NoType none) : ThreadSafeId32Object(none) {}
    ZilchNoCopy(Event);
  };
  
  class MetaLibraryEvent : public Event
  {
  public:
    typedef MetaLibraryEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[32];
    
  protected:
    MetaLibraryEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(MetaLibraryEvent);
  };
  
  class SelectionChangedEvent : public Event
  {
  public:
    typedef SelectionChangedEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    SelectionChangedEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(SelectionChangedEvent);
  };
  
  class NotifyEvent : public Event
  {
  public:
    typedef NotifyEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[32];
    
  protected:
    NotifyEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NotifyEvent);
  };
  
  class PropertyEvent : public Event
  {
  public:
    typedef PropertyEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[208];
    
  protected:
    PropertyEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(PropertyEvent);
  };
  
  class TypeEvent : public Event
  {
  public:
    typedef TypeEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    TypeEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(TypeEvent);
  };
  
  class MetaSelection : public ReferenceCountedEventObject
  {
  public:
    typedef MetaSelection ZilchSelf;
    typedef ReferenceCountedEventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int Count();
    
    bool Empty();
    
    void Clear();
    
    void SelectOnly(const Zilch::Handle& p0);
    
    void Add(const Zilch::Handle& p0);
    
    void Remove(const Zilch::Handle& p0);
    
    void Replace(const Zilch::Handle& p0, const Zilch::Handle& p1);
    
    bool Contains(const Zilch::Handle& p0);
    
    void FinalSelectionChanged();
    
    Zilch::Handle GetPrimary();
    
    void SetPrimary(const Zilch::Handle& value);
    
    Zilch::HandleOf<MetaSelectionRange> GetAll();
    
    unsigned char mValue[112];
    
  protected:
    MetaSelection(Zilch::NoType none) : ReferenceCountedEventObject(none) {}
    ZilchNoCopy(MetaSelection);
  };
  
  // Simple event for general signals.
  class ObjectEvent : public Event
  {
  public:
    typedef ObjectEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Object> GetSource();
    
    unsigned char mValue[8];
    
  protected:
    ObjectEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ObjectEvent);
  };
  
  class LocalModifications : public Zilch::ReferenceType
  {
  public:
    typedef LocalModifications ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[48];
    
  protected:
    LocalModifications(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(LocalModifications);
  };
  
  class PropertyPath : public Zilch::ReferenceType
  {
  public:
    typedef PropertyPath ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[32];
    
  protected:
    PropertyPath(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PropertyPath);
  };
  
  // IPv4/IPv6 network host identifier Provided for convenience Note: This class is not slice-able, it has extra data.
  class IpAddress : public Zilch::ReferenceType
  {
  public:
    typedef IpAddress ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Clears the IP address.
    void Clear();
    
    bool GetIsValid();
    
    InternetProtocol GetInternetProtocol();
    
    Zilch::String GetString();
    
    long long GetHash();
    
    Zilch::String GetHost();
    
    void SetHost(const Zilch::String& value);
    
    int GetPort();
    
    void SetPort(int value);
    
    Zilch::String GetPortString();
    
    unsigned char mValue[136];
    
  protected:
    IpAddress(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(IpAddress);
  };
  
  class Revision : public Zilch::ReferenceType
  {
  public:
    typedef Revision ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetChangeSet();
    
    void SetChangeSet(const Zilch::String& value);
    
    Zilch::String GetUser();
    
    void SetUser(const Zilch::String& value);
    
    Zilch::String GetDate();
    
    void SetDate(const Zilch::String& value);
    
    Zilch::String GetSummary();
    
    void SetSummary(const Zilch::String& value);
    
    unsigned char mValue[48];
    
  protected:
    Revision(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Revision);
  };
  
  class ZeroMetaArrayRevisions : public MetaArray
  {
  public:
    typedef ZeroMetaArrayRevisions ZilchSelf;
    typedef MetaArray ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ZeroMetaArrayRevisions(Zilch::NoType none) : MetaArray(none) {}
    ZilchNoCopy(ZeroMetaArrayRevisions);
  };
  
  class Revisions : public Zilch::ReferenceType
  {
  public:
    typedef Revisions ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[32];
    
  protected:
    Revisions(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Revisions);
  };
  
  class MetaSerialization : public ReferenceCountedEventObject
  {
  public:
    typedef MetaSerialization ZilchSelf;
    typedef ReferenceCountedEventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    MetaSerialization(Zilch::NoType none) : ReferenceCountedEventObject(none) {}
    ZilchNoCopy(MetaSerialization);
  };
  
  class SerializationFilter : public ReferenceCountedEventObject
  {
  public:
    typedef SerializationFilter ZilchSelf;
    typedef ReferenceCountedEventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    SerializationFilter(Zilch::NoType none) : ReferenceCountedEventObject(none) {}
    ZilchNoCopy(SerializationFilter);
  };
  
  class PrimitiveMetaSerializationInteger : public MetaSerialization
  {
  public:
    typedef PrimitiveMetaSerializationInteger ZilchSelf;
    typedef MetaSerialization ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PrimitiveMetaSerializationInteger(Zilch::NoType none) : MetaSerialization(none) {}
    ZilchNoCopy(PrimitiveMetaSerializationInteger);
  };
  
  class PrimitiveMetaSerializationInteger2 : public MetaSerialization
  {
  public:
    typedef PrimitiveMetaSerializationInteger2 ZilchSelf;
    typedef MetaSerialization ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PrimitiveMetaSerializationInteger2(Zilch::NoType none) : MetaSerialization(none) {}
    ZilchNoCopy(PrimitiveMetaSerializationInteger2);
  };
  
  class PrimitiveMetaSerializationInteger3 : public MetaSerialization
  {
  public:
    typedef PrimitiveMetaSerializationInteger3 ZilchSelf;
    typedef MetaSerialization ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PrimitiveMetaSerializationInteger3(Zilch::NoType none) : MetaSerialization(none) {}
    ZilchNoCopy(PrimitiveMetaSerializationInteger3);
  };
  
  class PrimitiveMetaSerializationInteger4 : public MetaSerialization
  {
  public:
    typedef PrimitiveMetaSerializationInteger4 ZilchSelf;
    typedef MetaSerialization ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PrimitiveMetaSerializationInteger4(Zilch::NoType none) : MetaSerialization(none) {}
    ZilchNoCopy(PrimitiveMetaSerializationInteger4);
  };
  
  class PrimitiveMetaSerializationString : public MetaSerialization
  {
  public:
    typedef PrimitiveMetaSerializationString ZilchSelf;
    typedef MetaSerialization ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PrimitiveMetaSerializationString(Zilch::NoType none) : MetaSerialization(none) {}
    ZilchNoCopy(PrimitiveMetaSerializationString);
  };
  
  class PrimitiveMetaSerializationBoolean : public MetaSerialization
  {
  public:
    typedef PrimitiveMetaSerializationBoolean ZilchSelf;
    typedef MetaSerialization ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PrimitiveMetaSerializationBoolean(Zilch::NoType none) : MetaSerialization(none) {}
    ZilchNoCopy(PrimitiveMetaSerializationBoolean);
  };
  
  class PrimitiveMetaSerializationReal : public MetaSerialization
  {
  public:
    typedef PrimitiveMetaSerializationReal ZilchSelf;
    typedef MetaSerialization ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PrimitiveMetaSerializationReal(Zilch::NoType none) : MetaSerialization(none) {}
    ZilchNoCopy(PrimitiveMetaSerializationReal);
  };
  
  class PrimitiveMetaSerializationReal2 : public MetaSerialization
  {
  public:
    typedef PrimitiveMetaSerializationReal2 ZilchSelf;
    typedef MetaSerialization ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PrimitiveMetaSerializationReal2(Zilch::NoType none) : MetaSerialization(none) {}
    ZilchNoCopy(PrimitiveMetaSerializationReal2);
  };
  
  class PrimitiveMetaSerializationReal3 : public MetaSerialization
  {
  public:
    typedef PrimitiveMetaSerializationReal3 ZilchSelf;
    typedef MetaSerialization ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PrimitiveMetaSerializationReal3(Zilch::NoType none) : MetaSerialization(none) {}
    ZilchNoCopy(PrimitiveMetaSerializationReal3);
  };
  
  class PrimitiveMetaSerializationReal4 : public MetaSerialization
  {
  public:
    typedef PrimitiveMetaSerializationReal4 ZilchSelf;
    typedef MetaSerialization ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PrimitiveMetaSerializationReal4(Zilch::NoType none) : MetaSerialization(none) {}
    ZilchNoCopy(PrimitiveMetaSerializationReal4);
  };
  
  class PrimitiveMetaSerializationMat2 : public MetaSerialization
  {
  public:
    typedef PrimitiveMetaSerializationMat2 ZilchSelf;
    typedef MetaSerialization ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PrimitiveMetaSerializationMat2(Zilch::NoType none) : MetaSerialization(none) {}
    ZilchNoCopy(PrimitiveMetaSerializationMat2);
  };
  
  class PrimitiveMetaSerializationMat3 : public MetaSerialization
  {
  public:
    typedef PrimitiveMetaSerializationMat3 ZilchSelf;
    typedef MetaSerialization ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PrimitiveMetaSerializationMat3(Zilch::NoType none) : MetaSerialization(none) {}
    ZilchNoCopy(PrimitiveMetaSerializationMat3);
  };
  
  class PrimitiveMetaSerializationMat4 : public MetaSerialization
  {
  public:
    typedef PrimitiveMetaSerializationMat4 ZilchSelf;
    typedef MetaSerialization ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PrimitiveMetaSerializationMat4(Zilch::NoType none) : MetaSerialization(none) {}
    ZilchNoCopy(PrimitiveMetaSerializationMat4);
  };
  
  class PrimitiveMetaSerializationQuat : public MetaSerialization
  {
  public:
    typedef PrimitiveMetaSerializationQuat ZilchSelf;
    typedef MetaSerialization ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PrimitiveMetaSerializationQuat(Zilch::NoType none) : MetaSerialization(none) {}
    ZilchNoCopy(PrimitiveMetaSerializationQuat);
  };
  
  class MetaStringSerialization : public MetaSerialization
  {
  public:
    typedef MetaStringSerialization ZilchSelf;
    typedef MetaSerialization ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    MetaStringSerialization(Zilch::NoType none) : MetaSerialization(none) {}
    ZilchNoCopy(MetaStringSerialization);
  };
  
  class EnumMetaSerialization : public MetaSerialization
  {
  public:
    typedef EnumMetaSerialization ZilchSelf;
    typedef MetaSerialization ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    EnumMetaSerialization(Zilch::NoType none) : MetaSerialization(none) {}
    ZilchNoCopy(EnumMetaSerialization);
  };
  
  class AudioCueImport : public Zilch::Enum
  {
  public:
    typedef AudioCueImport ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static AudioCueImport GetNone();
    
    static AudioCueImport GetPerSound();
    
    static AudioCueImport GetGrouped();
    
    AudioCueImport();
  };
  
  class BasisType : public Zilch::Enum
  {
  public:
    typedef BasisType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static BasisType GetPositiveX();
    
    static BasisType GetPositiveY();
    
    static BasisType GetPositiveZ();
    
    static BasisType GetNegativeX();
    
    static BasisType GetNegativeY();
    
    static BasisType GetNegativeZ();
    
    BasisType();
  };
  
  class ConflictAction : public Zilch::Enum
  {
  public:
    typedef ConflictAction ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static ConflictAction GetSkip();
    
    static ConflictAction GetReplace();
    
    ConflictAction();
  };
  
  class ImageImport : public Zilch::Enum
  {
  public:
    typedef ImageImport ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static ImageImport GetTextures();
    
    static ImageImport GetSprites();
    
    ImageImport();
  };
  
  class LoopingMode : public Zilch::Enum
  {
  public:
    typedef LoopingMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static LoopingMode GetDefault();
    
    static LoopingMode GetOnce();
    
    static LoopingMode GetLooping();
    
    LoopingMode();
  };
  
  class MeshImport : public Zilch::Enum
  {
  public:
    typedef MeshImport ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static MeshImport GetNoMesh();
    
    static MeshImport GetSingleMesh();
    
    static MeshImport GetMultiMesh();
    
    MeshImport();
  };
  
  class PhysicsImport : public Zilch::Enum
  {
  public:
    typedef PhysicsImport ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static PhysicsImport GetNoMesh();
    
    static PhysicsImport GetStaticMesh();
    
    static PhysicsImport GetConvexMesh();
    
    PhysicsImport();
  };
  
  class PhysicsMeshType : public Zilch::Enum
  {
  public:
    typedef PhysicsMeshType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static PhysicsMeshType GetPhysicsMesh();
    
    static PhysicsMeshType GetConvexMesh();
    
    PhysicsMeshType();
  };
  
  class ScaleConversion : public Zilch::Enum
  {
  public:
    typedef ScaleConversion ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static ScaleConversion GetCustom();
    
    static ScaleConversion GetCentimeterToInches();
    
    static ScaleConversion GetCentimeterToMeter();
    
    static ScaleConversion GetInchesToCentimenters();
    
    static ScaleConversion GetInchesToMeters();
    
    static ScaleConversion GetMetersToCentimeters();
    
    static ScaleConversion GetMetersToInches();
    
    ScaleConversion();
  };
  
  class SpriteFill : public Zilch::Enum
  {
  public:
    typedef SpriteFill ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static SpriteFill GetStretch();
    
    static SpriteFill GetNineSlice();
    
    static SpriteFill GetTiled();
    
    SpriteFill();
  };
  
  class SpriteSampling : public Zilch::Enum
  {
  public:
    typedef SpriteSampling ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static SpriteSampling GetNearest();
    
    static SpriteSampling GetLinear();
    
    SpriteSampling();
  };
  
  class TrackType : public Zilch::Enum
  {
  public:
    typedef TrackType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static TrackType GetObject();
    
    static TrackType GetComponent();
    
    static TrackType GetProperty();
    
    static TrackType GetSubProperty();
    
    static TrackType GetInvalid();
    
    TrackType();
  };
  
  // How to address the texture with uv's outside of the range [0, 1] Clamp - Uses the last pixel at the border of the image Repeat - Wraps to the opposite side and continues to sample the image Mirror - Similar to Repeat but reverses image direction.
  class TextureAddressing : public Zilch::Enum
  {
  public:
    typedef TextureAddressing ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static TextureAddressing GetClamp();
    
    static TextureAddressing GetRepeat();
    
    static TextureAddressing GetMirror();
    
    TextureAddressing();
  };
  
  // How pixels are sampled when the ratio of pixels viewed along its u/v directions is not 1:1 (Typically when viewing a texture at an angle) The options represent how large of a ratio will be accounted for when sampling x1 = 1:1 (no anisotropy), x16 = 16:1 (high anisotropy), x16 being the best quality.
  class TextureAnisotropy : public Zilch::Enum
  {
  public:
    typedef TextureAnisotropy ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static TextureAnisotropy GetX1();
    
    static TextureAnisotropy GetX2();
    
    static TextureAnisotropy GetX4();
    
    static TextureAnisotropy GetX8();
    
    static TextureAnisotropy GetX16();
    
    TextureAnisotropy();
  };
  
  // Block compression, lossy hardware supported formats with very high memory savings None - No compression will be used BC1 - RGB stored at 1/2 byte per pixel Used for color maps that don't need alpha, normal maps BC2 - RGB w/ low precision alpha stored at 1 byte per pixel No common usages BC3 - RGB w/ alpha stored at 1 byte per pixel Used for color maps that need alpha BC4 - R stored at 1/2 byte per pixel Used for single channel maps like height, specular, roughness BC5 - RG stored at 1 byte per pixel Used for two channel maps like normals with reconstructed Z BC6 - RGB floats stored at 1 byte per pixel Used for high dynamic range images.
  class TextureCompression : public Zilch::Enum
  {
  public:
    typedef TextureCompression ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static TextureCompression GetNone();
    
    static TextureCompression GetBC1();
    
    static TextureCompression GetBC2();
    
    static TextureCompression GetBC3();
    
    static TextureCompression GetBC4();
    
    static TextureCompression GetBC5();
    
    static TextureCompression GetBC6();
    
    TextureCompression();
  };
  
  class TextureFace : public Zilch::Enum
  {
  public:
    typedef TextureFace ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static TextureFace GetNone();
    
    static TextureFace GetPositiveX();
    
    static TextureFace GetPositiveY();
    
    static TextureFace GetPositiveZ();
    
    static TextureFace GetNegativeX();
    
    static TextureFace GetNegativeY();
    
    static TextureFace GetNegativeZ();
    
    TextureFace();
  };
  
  // How pixels are sampled when viewing image at a different size Nearest - Gets the closest pixel unaltered Bilinear - Gets the 4 closest pixels and linearly blends between them Trilinear - Same as bilinear with an additional linear blend between mip levels.
  class TextureFiltering : public Zilch::Enum
  {
  public:
    typedef TextureFiltering ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static TextureFiltering GetNearest();
    
    static TextureFiltering GetBilinear();
    
    static TextureFiltering GetTrilinear();
    
    TextureFiltering();
  };
  
  class TextureFormat : public Zilch::Enum
  {
  public:
    typedef TextureFormat ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static TextureFormat GetNone();
    
    static TextureFormat GetR8();
    
    static TextureFormat GetRG8();
    
    static TextureFormat GetRGB8();
    
    static TextureFormat GetRGBA8();
    
    static TextureFormat GetR16();
    
    static TextureFormat GetRG16();
    
    static TextureFormat GetRGB16();
    
    static TextureFormat GetRGBA16();
    
    static TextureFormat GetR16f();
    
    static TextureFormat GetRG16f();
    
    static TextureFormat GetRGB16f();
    
    static TextureFormat GetRGBA16f();
    
    static TextureFormat GetR32f();
    
    static TextureFormat GetRG32f();
    
    static TextureFormat GetRGB32f();
    
    static TextureFormat GetRGBA32f();
    
    static TextureFormat GetSRGB8();
    
    static TextureFormat GetSRGB8A8();
    
    static TextureFormat GetDepth16();
    
    static TextureFormat GetDepth24();
    
    static TextureFormat GetDepth32();
    
    static TextureFormat GetDepth32f();
    
    static TextureFormat GetDepth24Stencil8();
    
    static TextureFormat GetDepth32fStencil8Pad24();
    
    TextureFormat();
  };
  
  // Progressively scaled down versions of the image are produced to preserve image integrity when viewed at smaller scales None - No mipmaps are generated PreGenerated - Mipmaps are generated by the engine Uses higher quality filtering than the gpu Required for cubemaps in order to get perspective correct filtering over face edges GpuGenerated - Mipmaps are generated by the gpu at load time.
  class TextureMipMapping : public Zilch::Enum
  {
  public:
    typedef TextureMipMapping ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static TextureMipMapping GetNone();
    
    static TextureMipMapping GetPreGenerated();
    
    static TextureMipMapping GetGpuGenerated();
    
    TextureMipMapping();
  };
  
  // Type of the texture, must match sampler type in shaders Texture2D - Standard 2 dimensional texture TextureCube - Uses texture as a cubemap Faces are extracted from the image using aspect ratio to determine layout.
  class TextureType : public Zilch::Enum
  {
  public:
    typedef TextureType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static TextureType GetTexture2D();
    
    static TextureType GetTextureCube();
    
    TextureType();
  };
  
  // The choices for how to load and play an audio file.
  class AudioFileLoadType : public Zilch::Enum
  {
  public:
    typedef AudioFileLoadType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static AudioFileLoadType GetStreamFromFile();
    
    static AudioFileLoadType GetStreamFromMemory();
    
    static AudioFileLoadType GetUncompressed();
    
    static AudioFileLoadType GetAuto();
    
    AudioFileLoadType();
  };
  
  class ZeroMetaArrayAnimationClips : public MetaArray
  {
  public:
    typedef ZeroMetaArrayAnimationClips ZilchSelf;
    typedef MetaArray ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ZeroMetaArrayAnimationClips(Zilch::NoType none) : MetaArray(none) {}
    ZilchNoCopy(ZeroMetaArrayAnimationClips);
  };
  
  class AnimationClips : public Zilch::ReferenceType
  {
  public:
    typedef AnimationClips ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[32];
    
  protected:
    AnimationClips(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(AnimationClips);
  };
  
  class ContentMetaComposition : public MetaComposition
  {
  public:
    typedef ContentMetaComposition ZilchSelf;
    typedef MetaComposition ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ContentMetaComposition(Zilch::NoType none) : MetaComposition(none) {}
    ZilchNoCopy(ContentMetaComposition);
  };
  
  class ContentItemMetaOperations : public MetaOperations
  {
  public:
    typedef ContentItemMetaOperations ZilchSelf;
    typedef MetaOperations ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ContentItemMetaOperations(Zilch::NoType none) : MetaOperations(none) {}
    ZilchNoCopy(ContentItemMetaOperations);
  };
  
  class ContentSystemEvent : public Event
  {
  public:
    typedef ContentSystemEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[64];
    
  protected:
    ContentSystemEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ContentSystemEvent);
  };
  
  class KeyFrameEvent : public Event
  {
  public:
    typedef KeyFrameEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    KeyFrameEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(KeyFrameEvent);
  };
  
  class TrackEvent : public Event
  {
  public:
    typedef TrackEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    TrackEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(TrackEvent);
  };
  
  class ContentItem : public EventObject
  {
  public:
    typedef ContentItem ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetName();
    
    unsigned char mValue[56];
    
  protected:
    ContentItem(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(ContentItem);
  };
  
  class ContentLibrary : public Object
  {
  public:
    typedef ContentLibrary ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[88];
    
  protected:
    ContentLibrary(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(ContentLibrary);
  };
  
  class ContentSystem : public EventObject
  {
  public:
    typedef ContentSystem ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[440];
    
  protected:
    ContentSystem(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(ContentSystem);
  };
  
  class ContentComposition : public ContentItem
  {
  public:
    typedef ContentComposition ZilchSelf;
    typedef ContentItem ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[104];
    
  protected:
    ContentComposition(Zilch::NoType none) : ContentItem(none) {}
    ZilchNoCopy(ContentComposition);
  };
  
  class ContentComponent : public EventObject
  {
  public:
    typedef ContentComponent ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    ContentComponent(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(ContentComponent);
  };
  
  class BuilderComponent : public ContentComponent
  {
  public:
    typedef BuilderComponent ZilchSelf;
    typedef ContentComponent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    BuilderComponent(Zilch::NoType none) : ContentComponent(none) {}
    ZilchNoCopy(BuilderComponent);
  };
  
  class DataContent : public ContentComposition
  {
  public:
    typedef DataContent ZilchSelf;
    typedef ContentComposition ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    DataContent(Zilch::NoType none) : ContentComposition(none) {}
    ZilchNoCopy(DataContent);
  };
  
  class DataBuilder : public BuilderComponent
  {
  public:
    typedef DataBuilder ZilchSelf;
    typedef BuilderComponent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[32];
    
  protected:
    DataBuilder(Zilch::NoType none) : BuilderComponent(none) {}
    ZilchNoCopy(DataBuilder);
  };
  
  class ContentTags : public ContentComponent
  {
  public:
    typedef ContentTags ZilchSelf;
    typedef ContentComponent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    ContentTags(Zilch::NoType none) : ContentComponent(none) {}
    ZilchNoCopy(ContentTags);
  };
  
  class ZilchPluginBuilder : public DataBuilder
  {
  public:
    typedef ZilchPluginBuilder ZilchSelf;
    typedef DataBuilder ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    ZilchPluginBuilder(Zilch::NoType none) : DataBuilder(none) {}
    ZilchNoCopy(ZilchPluginBuilder);
  };
  
  class FontContent : public ContentComposition
  {
  public:
    typedef FontContent ZilchSelf;
    typedef ContentComposition ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    FontContent(Zilch::NoType none) : ContentComposition(none) {}
    ZilchNoCopy(FontContent);
  };
  
  class FontBuilder : public BuilderComponent
  {
  public:
    typedef FontBuilder ZilchSelf;
    typedef BuilderComponent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[48];
    
  protected:
    FontBuilder(Zilch::NoType none) : BuilderComponent(none) {}
    ZilchNoCopy(FontBuilder);
  };
  
  class ImageContent : public ContentComposition
  {
  public:
    typedef ImageContent ZilchSelf;
    typedef ContentComposition ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    ImageContent(Zilch::NoType none) : ContentComposition(none) {}
    ZilchNoCopy(ImageContent);
  };
  
  class ImageOptions : public Object
  {
  public:
    typedef ImageOptions ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    ImageImport GetImportImages();
    
    void SetImportImages(const ImageImport& value);
    
    unsigned char mValue[16];
    
  protected:
    ImageOptions(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(ImageOptions);
  };
  
  class ShowNormalGenerationOptionsFilter : public MetaPropertyFilter
  {
  public:
    typedef ShowNormalGenerationOptionsFilter ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ShowNormalGenerationOptionsFilter(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(ShowNormalGenerationOptionsFilter);
  };
  
  class GeometryOptions : public Object
  {
  public:
    typedef GeometryOptions ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetImportMeshes();
    
    void SetImportMeshes(bool value);
    
    bool GetGenerateSmoothNormals();
    
    void SetGenerateSmoothNormals(bool value);
    
    float GetSmoothingAngleDegreesThreshold();
    
    void SetSmoothingAngleDegreesThreshold(float value);
    
    bool GetGenerateTangentSpace();
    
    void SetGenerateTangentSpace(bool value);
    
    bool GetInvertUvYAxis();
    
    void SetInvertUvYAxis(bool value);
    
    bool GetFlipWindingOrder();
    
    void SetFlipWindingOrder(bool value);
    
    PhysicsImport GetPhysicsImport();
    
    void SetPhysicsImport(const PhysicsImport& value);
    
    bool GetCollapsePivots();
    
    void SetCollapsePivots(bool value);
    
    bool GetImportAnimations();
    
    void SetImportAnimations(bool value);
    
    bool GetCreateArchetype();
    
    void SetCreateArchetype(bool value);
    
    bool GetImportTextures();
    
    void SetImportTextures(bool value);
    
    Zilch::Real3 GetOriginOffset();
    
    void SetOriginOffset(const Zilch::Real3& value);
    
    ScaleConversion GetScaleConversion();
    
    void SetScaleConversion(const ScaleConversion& value);
    
    float GetScaleFactor();
    
    void SetScaleFactor(float value);
    
    bool GetChangeBasis();
    
    void SetChangeBasis(bool value);
    
    BasisType GetXBasisTo();
    
    void SetXBasisTo(const BasisType& value);
    
    BasisType GetYBasisTo();
    
    void SetYBasisTo(const BasisType& value);
    
    BasisType GetZBasisTo();
    
    void SetZBasisTo(const BasisType& value);
    
    unsigned char mValue[64];
    
  protected:
    GeometryOptions(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(GeometryOptions);
  };
  
  class AudioOptions : public Object
  {
  public:
    typedef AudioOptions ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    AudioCueImport GetGenerateCue();
    
    void SetGenerateCue(const AudioCueImport& value);
    
    Zilch::String GetGroupCueName();
    
    void SetGroupCueName(const Zilch::String& value);
    
    AudioFileLoadType GetStreamingMode();
    
    void SetStreamingMode(const AudioFileLoadType& value);
    
    unsigned char mValue[32];
    
  protected:
    AudioOptions(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(AudioOptions);
  };
  
  class ConflictOptions : public Object
  {
  public:
    typedef ConflictOptions ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    ConflictAction GetAction();
    
    void SetAction(const ConflictAction& value);
    
    unsigned char mValue[16];
    
  protected:
    ConflictOptions(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(ConflictOptions);
  };
  
  class ImportOptions : public EventObject
  {
  public:
    typedef ImportOptions ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<ImageOptions> GetImageOptions();
    
    void SetImageOptions(ImageOptions* value);
    
    Zilch::HandleOf<GeometryOptions> GetGeometryOptions();
    
    void SetGeometryOptions(GeometryOptions* value);
    
    Zilch::HandleOf<AudioOptions> GetAudioOptions();
    
    void SetAudioOptions(AudioOptions* value);
    
    Zilch::HandleOf<ConflictOptions> GetConflictOptions();
    
    void SetConflictOptions(ConflictOptions* value);
    
    unsigned char mValue[104];
    
  protected:
    ImportOptions(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(ImportOptions);
  };
  
  class ShowPremultipliedAlphaFilter : public MetaPropertyFilter
  {
  public:
    typedef ShowPremultipliedAlphaFilter ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ShowPremultipliedAlphaFilter(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(ShowPremultipliedAlphaFilter);
  };
  
  class ShowGammaCorrectionFilter : public MetaPropertyFilter
  {
  public:
    typedef ShowGammaCorrectionFilter ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ShowGammaCorrectionFilter(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(ShowGammaCorrectionFilter);
  };
  
  class TextureBuilder : public BuilderComponent
  {
  public:
    typedef TextureBuilder ZilchSelf;
    typedef BuilderComponent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetName();
    
    void SetName(const Zilch::String& value);
    
    TextureType GetType();
    
    void SetType(const TextureType& value);
    
    TextureCompression GetCompression();
    
    void SetCompression(const TextureCompression& value);
    
    TextureAddressing GetAddressingX();
    
    void SetAddressingX(const TextureAddressing& value);
    
    TextureAddressing GetAddressingY();
    
    void SetAddressingY(const TextureAddressing& value);
    
    TextureFiltering GetFiltering();
    
    void SetFiltering(const TextureFiltering& value);
    
    TextureAnisotropy GetAnisotropy();
    
    void SetAnisotropy(const TextureAnisotropy& value);
    
    TextureMipMapping GetMipMapping();
    
    void SetMipMapping(const TextureMipMapping& value);
    
    int GetHalfScaleCount();
    
    void SetHalfScaleCount(int value);
    
    bool GetPremultipliedAlpha();
    
    void SetPremultipliedAlpha(bool value);
    
    bool GetGammaCorrection();
    
    void SetGammaCorrection(bool value);
    
    unsigned char mValue[56];
    
  protected:
    TextureBuilder(Zilch::NoType none) : BuilderComponent(none) {}
    ZilchNoCopy(TextureBuilder);
  };
  
  class SpriteData : public Zilch::ReferenceType
  {
  public:
    typedef SpriteData ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[56];
    
  protected:
    SpriteData(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SpriteData);
  };
  
  class SpriteSourceBuilder : public BuilderComponent
  {
  public:
    typedef SpriteSourceBuilder ZilchSelf;
    typedef BuilderComponent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetOriginX();
    
    void SetOriginX(float value);
    
    float GetOriginY();
    
    void SetOriginY(float value);
    
    bool GetLooping();
    
    void SetLooping(bool value);
    
    SpriteSampling GetSampling();
    
    void SetSampling(const SpriteSampling& value);
    
    float GetPixelsPerUnit();
    
    void SetPixelsPerUnit(float value);
    
    SpriteFill GetFill();
    
    void SetFill(const SpriteFill& value);
    
    int GetLeft();
    
    void SetLeft(int value);
    
    int GetRight();
    
    void SetRight(int value);
    
    int GetTop();
    
    void SetTop(int value);
    
    int GetBottom();
    
    void SetBottom(int value);
    
    unsigned char mValue[104];
    
  protected:
    SpriteSourceBuilder(Zilch::NoType none) : BuilderComponent(none) {}
    ZilchNoCopy(SpriteSourceBuilder);
  };
  
  class TextContent : public ContentComposition
  {
  public:
    typedef TextContent ZilchSelf;
    typedef ContentComposition ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    TextContent(Zilch::NoType none) : ContentComposition(none) {}
    ZilchNoCopy(TextContent);
  };
  
  class BaseTextBuilder : public BuilderComponent
  {
  public:
    typedef BaseTextBuilder ZilchSelf;
    typedef BuilderComponent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[48];
    
  protected:
    BaseTextBuilder(Zilch::NoType none) : BuilderComponent(none) {}
    ZilchNoCopy(BaseTextBuilder);
  };
  
  class TextBuilder : public BaseTextBuilder
  {
  public:
    typedef TextBuilder ZilchSelf;
    typedef BaseTextBuilder ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    TextBuilder(Zilch::NoType none) : BaseTextBuilder(none) {}
    ZilchNoCopy(TextBuilder);
  };
  
  class ZilchScriptBuilder : public BaseTextBuilder
  {
  public:
    typedef ZilchScriptBuilder ZilchSelf;
    typedef BaseTextBuilder ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ZilchScriptBuilder(Zilch::NoType none) : BaseTextBuilder(none) {}
    ZilchNoCopy(ZilchScriptBuilder);
  };
  
  class ZilchFragmentBuilder : public BaseTextBuilder
  {
  public:
    typedef ZilchFragmentBuilder ZilchSelf;
    typedef BaseTextBuilder ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ZilchFragmentBuilder(Zilch::NoType none) : BaseTextBuilder(none) {}
    ZilchNoCopy(ZilchFragmentBuilder);
  };
  
  class ContentCopyright : public ContentComponent
  {
  public:
    typedef ContentCopyright ZilchSelf;
    typedef ContentComponent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetOwner();
    
    void SetOwner(const Zilch::String& value);
    
    Zilch::String GetDate();
    
    void SetDate(const Zilch::String& value);
    
    unsigned char mValue[16];
    
  protected:
    ContentCopyright(Zilch::NoType none) : ContentComponent(none) {}
    ZilchNoCopy(ContentCopyright);
  };
  
  class ContentHistory : public ContentComponent
  {
  public:
    typedef ContentHistory ZilchSelf;
    typedef ContentComponent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Revisions> GetRevisions();
    
    void SetRevisions(Revisions* value);
    
    unsigned char mValue[32];
    
  protected:
    ContentHistory(Zilch::NoType none) : ContentComponent(none) {}
    ZilchNoCopy(ContentHistory);
  };
  
  class ContentNotes : public ContentComponent
  {
  public:
    typedef ContentNotes ZilchSelf;
    typedef ContentComponent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetNotes();
    
    void SetNotes(const Zilch::String& value);
    
    unsigned char mValue[8];
    
  protected:
    ContentNotes(Zilch::NoType none) : ContentComponent(none) {}
    ZilchNoCopy(ContentNotes);
  };
  
  class ContentEditorOptions : public ContentComponent
  {
  public:
    typedef ContentEditorOptions ZilchSelf;
    typedef ContentComponent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetShowInEditor();
    
    void SetShowInEditor(bool value);
    
    unsigned char mValue[8];
    
  protected:
    ContentEditorOptions(Zilch::NoType none) : ContentComponent(none) {}
    ZilchNoCopy(ContentEditorOptions);
  };
  
  class ResourceTemplate : public ContentComponent
  {
  public:
    typedef ResourceTemplate ZilchSelf;
    typedef ContentComponent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetDisplayName();
    
    void SetDisplayName(const Zilch::String& value);
    
    Zilch::String GetDescription();
    
    void SetDescription(const Zilch::String& value);
    
    int GetSortWeight();
    
    void SetSortWeight(int value);
    
    Zilch::String GetCategory();
    
    void SetCategory(const Zilch::String& value);
    
    int GetCategorySortWeight();
    
    void SetCategorySortWeight(int value);
    
    unsigned char mValue[40];
    
  protected:
    ResourceTemplate(Zilch::NoType none) : ContentComponent(none) {}
    ZilchNoCopy(ResourceTemplate);
  };
  
  class RichAnimation : public EventObject
  {
  public:
    typedef RichAnimation ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetSampleTolerance();
    
    void SetSampleTolerance(float value);
    
    unsigned char mValue[112];
    
  protected:
    RichAnimation(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(RichAnimation);
  };
  
  class RichAnimationBuilder : public BuilderComponent
  {
  public:
    typedef RichAnimationBuilder ZilchSelf;
    typedef BuilderComponent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Archetype> GetPreviewArchetype();
    
    void SetPreviewArchetype(Archetype* value);
    
    unsigned char mValue[56];
    
  protected:
    RichAnimationBuilder(Zilch::NoType none) : BuilderComponent(none) {}
    ZilchNoCopy(RichAnimationBuilder);
  };
  
  class TrackNode : public EventObject
  {
  public:
    typedef TrackNode ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[224];
    
  protected:
    TrackNode(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(TrackNode);
  };
  
  class GeometryImport : public ContentComponent
  {
  public:
    typedef GeometryImport ZilchSelf;
    typedef ContentComponent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetCollapsePivots();
    
    void SetCollapsePivots(bool value);
    
    Zilch::Real3 GetOriginOffset();
    
    void SetOriginOffset(const Zilch::Real3& value);
    
    float GetScaleFactor();
    
    void SetScaleFactor(float value);
    
    bool GetChangeBasis();
    
    void SetChangeBasis(bool value);
    
    BasisType GetXBasisTo();
    
    void SetXBasisTo(const BasisType& value);
    
    BasisType GetYBasisTo();
    
    void SetYBasisTo(const BasisType& value);
    
    BasisType GetZBasisTo();
    
    void SetZBasisTo(const BasisType& value);
    
    unsigned char mValue[176];
    
  protected:
    GeometryImport(Zilch::NoType none) : ContentComponent(none) {}
    ZilchNoCopy(GeometryImport);
  };
  
  class GeometryResourceEntry : public Object
  {
  public:
    typedef GeometryResourceEntry ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    GeometryResourceEntry(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(GeometryResourceEntry);
  };
  
  class MeshBuilder : public BuilderComponent
  {
  public:
    typedef MeshBuilder ZilchSelf;
    typedef BuilderComponent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetGenerateSmoothNormals();
    
    void SetGenerateSmoothNormals(bool value);
    
    float GetSmoothingAngleDegreesThreshold();
    
    void SetSmoothingAngleDegreesThreshold(float value);
    
    bool GetGenerateTangentSpace();
    
    void SetGenerateTangentSpace(bool value);
    
    bool GetInvertUvYAxis();
    
    void SetInvertUvYAxis(bool value);
    
    bool GetFlipWindingOrder();
    
    void SetFlipWindingOrder(bool value);
    
    bool GetFlipNormals();
    
    void SetFlipNormals(bool value);
    
    unsigned char mValue[48];
    
  protected:
    MeshBuilder(Zilch::NoType none) : BuilderComponent(none) {}
    ZilchNoCopy(MeshBuilder);
  };
  
  class PhysicsMeshBuilder : public BuilderComponent
  {
  public:
    typedef PhysicsMeshBuilder ZilchSelf;
    typedef BuilderComponent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    PhysicsMeshType GetMeshBuilt();
    
    void SetMeshBuilt(const PhysicsMeshType& value);
    
    unsigned char mValue[40];
    
  protected:
    PhysicsMeshBuilder(Zilch::NoType none) : BuilderComponent(none) {}
    ZilchNoCopy(PhysicsMeshBuilder);
  };
  
  class AnimationClip : public Object
  {
  public:
    typedef AnimationClip ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetName();
    
    void SetName(const Zilch::String& value);
    
    int GetStartFrame();
    
    void SetStartFrame(int value);
    
    int GetEndFrame();
    
    void SetEndFrame(int value);
    
    int GetAnimationIndex();
    
    void SetAnimationIndex(int value);
    
    unsigned char mValue[24];
    
  protected:
    AnimationClip(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(AnimationClip);
  };
  
  class AnimationBuilder : public BuilderComponent
  {
  public:
    typedef AnimationBuilder ZilchSelf;
    typedef BuilderComponent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<AnimationClips> GetClips();
    
    void SetClips(AnimationClips* value);
    
    unsigned char mValue[112];
    
  protected:
    AnimationBuilder(Zilch::NoType none) : BuilderComponent(none) {}
    ZilchNoCopy(AnimationBuilder);
  };
  
  class TextureContent : public ContentComponent
  {
  public:
    typedef TextureContent ZilchSelf;
    typedef ContentComponent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[32];
    
  protected:
    TextureContent(Zilch::NoType none) : ContentComponent(none) {}
    ZilchNoCopy(TextureContent);
  };
  
  class GeometryContent : public ContentComposition
  {
  public:
    typedef GeometryContent ZilchSelf;
    typedef ContentComposition ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    GeometryContent(Zilch::NoType none) : ContentComposition(none) {}
    ZilchNoCopy(GeometryContent);
  };
  
  class AudioContent : public ContentComposition
  {
  public:
    typedef AudioContent ZilchSelf;
    typedef ContentComposition ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    AudioContent(Zilch::NoType none) : ContentComposition(none) {}
    ZilchNoCopy(AudioContent);
  };
  
  class TextureInfo : public ContentComponent
  {
  public:
    typedef TextureInfo ZilchSelf;
    typedef ContentComponent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetFileType();
    
    Zilch::String GetLoadFormat();
    
    Zilch::String GetDimensions();
    
    Zilch::String GetSize();
    
    unsigned char mValue[32];
    
  protected:
    TextureInfo(Zilch::NoType none) : ContentComponent(none) {}
    ZilchNoCopy(TextureInfo);
  };
  
  class SoundBuilder : public BuilderComponent
  {
  public:
    typedef SoundBuilder ZilchSelf;
    typedef BuilderComponent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetName();
    
    void SetName(const Zilch::String& value);
    
    AudioFileLoadType GetFileLoadType();
    
    void SetFileLoadType(const AudioFileLoadType& value);
    
    bool GetNormalize();
    
    void SetNormalize(bool value);
    
    float GetMaxVolume();
    
    void SetMaxVolume(float value);
    
    unsigned char mValue[64];
    
  protected:
    SoundBuilder(Zilch::NoType none) : BuilderComponent(none) {}
    ZilchNoCopy(SoundBuilder);
  };
  
  class BinaryContent : public ContentComposition
  {
  public:
    typedef BinaryContent ZilchSelf;
    typedef ContentComposition ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    BinaryContent(Zilch::NoType none) : ContentComposition(none) {}
    ZilchNoCopy(BinaryContent);
  };
  
  class BinaryBuilder : public BuilderComponent
  {
  public:
    typedef BinaryBuilder ZilchSelf;
    typedef BuilderComponent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[64];
    
  protected:
    BinaryBuilder(Zilch::NoType none) : BuilderComponent(none) {}
    ZilchNoCopy(BinaryBuilder);
  };
  
  class GeneratedArchetype : public ContentComponent
  {
  public:
    typedef GeneratedArchetype ZilchSelf;
    typedef ContentComponent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    GeneratedArchetype(Zilch::NoType none) : ContentComponent(none) {}
    ZilchNoCopy(GeneratedArchetype);
  };
  
  class IBroadPhase : public Zilch::ReferenceType
  {
  public:
    typedef IBroadPhase ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[48];
    
  protected:
    IBroadPhase(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(IBroadPhase);
  };
  
  class NSquaredBroadPhase : public IBroadPhase
  {
  public:
    typedef NSquaredBroadPhase ZilchSelf;
    typedef IBroadPhase ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[96];
    
  protected:
    NSquaredBroadPhase(Zilch::NoType none) : IBroadPhase(none) {}
    ZilchNoCopy(NSquaredBroadPhase);
  };
  
  class BoundingBoxBroadPhase : public IBroadPhase
  {
  public:
    typedef BoundingBoxBroadPhase ZilchSelf;
    typedef IBroadPhase ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[96];
    
  protected:
    BoundingBoxBroadPhase(Zilch::NoType none) : IBroadPhase(none) {}
    ZilchNoCopy(BoundingBoxBroadPhase);
  };
  
  class BoundingSphereBroadPhase : public IBroadPhase
  {
  public:
    typedef BoundingSphereBroadPhase ZilchSelf;
    typedef IBroadPhase ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[96];
    
  protected:
    BoundingSphereBroadPhase(Zilch::NoType none) : IBroadPhase(none) {}
    ZilchNoCopy(BoundingSphereBroadPhase);
  };
  
  class StaticAabbTreeBroadPhase : public IBroadPhase
  {
  public:
    typedef StaticAabbTreeBroadPhase ZilchSelf;
    typedef IBroadPhase ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[144];
    
  protected:
    StaticAabbTreeBroadPhase(Zilch::NoType none) : IBroadPhase(none) {}
    ZilchNoCopy(StaticAabbTreeBroadPhase);
  };
  
  class SapBroadPhase : public IBroadPhase
  {
  public:
    typedef SapBroadPhase ZilchSelf;
    typedef IBroadPhase ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[448];
    
  protected:
    SapBroadPhase(Zilch::NoType none) : IBroadPhase(none) {}
    ZilchNoCopy(SapBroadPhase);
  };
  
  class DynamicAabbTreeBroadPhase : public IBroadPhase
  {
  public:
    typedef DynamicAabbTreeBroadPhase ZilchSelf;
    typedef IBroadPhase ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[88];
    
  protected:
    DynamicAabbTreeBroadPhase(Zilch::NoType none) : IBroadPhase(none) {}
    ZilchNoCopy(DynamicAabbTreeBroadPhase);
  };
  
  class AvlDynamicAabbTreeBroadPhase : public IBroadPhase
  {
  public:
    typedef AvlDynamicAabbTreeBroadPhase ZilchSelf;
    typedef IBroadPhase ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[80];
    
  protected:
    AvlDynamicAabbTreeBroadPhase(Zilch::NoType none) : IBroadPhase(none) {}
    ZilchNoCopy(AvlDynamicAabbTreeBroadPhase);
  };
  
  class DynamicBroadphasePropertyExtension : public EditorIndexedStringArray
  {
  public:
    typedef DynamicBroadphasePropertyExtension ZilchSelf;
    typedef EditorIndexedStringArray ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    DynamicBroadphasePropertyExtension(Zilch::NoType none) : EditorIndexedStringArray(none) {}
    ZilchNoCopy(DynamicBroadphasePropertyExtension);
  };
  
  class StaticBroadphasePropertyExtension : public EditorIndexedStringArray
  {
  public:
    typedef StaticBroadphasePropertyExtension ZilchSelf;
    typedef EditorIndexedStringArray ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    StaticBroadphasePropertyExtension(Zilch::NoType none) : EditorIndexedStringArray(none) {}
    ZilchNoCopy(StaticBroadphasePropertyExtension);
  };
  
  class HierarchyNameRange : public Zilch::ReferenceType
  {
  public:
    typedef HierarchyNameRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<HierarchyNameRange> GetAll();
    
    Zilch::HandleOf<Cog> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[24];
    
  protected:
    HierarchyNameRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(HierarchyNameRange);
  };
  
  class HierarchyListNameRange : public Zilch::ReferenceType
  {
  public:
    typedef HierarchyListNameRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<HierarchyListNameRange> GetAll();
    
    Zilch::HandleOf<Cog> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[24];
    
  protected:
    HierarchyListNameRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(HierarchyListNameRange);
  };
  
  class HierarchyRange : public Zilch::ReferenceType
  {
  public:
    typedef HierarchyRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<HierarchyRange> GetAll();
    
    Zilch::HandleOf<Cog> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[16];
    
  protected:
    HierarchyRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(HierarchyRange);
  };
  
  class CogNameRange : public Zilch::ReferenceType
  {
  public:
    typedef CogNameRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<CogNameRange> GetAll();
    
    Zilch::HandleOf<Cog> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[16];
    
  protected:
    CogNameRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CogNameRange);
  };
  
  class CogRootNameRange : public Zilch::ReferenceType
  {
  public:
    typedef CogRootNameRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<CogRootNameRange> GetAll();
    
    Zilch::HandleOf<Cog> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[24];
    
  protected:
    CogRootNameRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CogRootNameRange);
  };
  
  class HierarchyListRange : public Zilch::ReferenceType
  {
  public:
    typedef HierarchyListRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<HierarchyListRange> GetAll();
    
    Zilch::HandleOf<Cog> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[16];
    
  protected:
    HierarchyListRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(HierarchyListRange);
  };
  
  class HierarchyListReverseRange : public Zilch::ReferenceType
  {
  public:
    typedef HierarchyListReverseRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<HierarchyListReverseRange> GetAll();
    
    Zilch::HandleOf<Cog> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[16];
    
  protected:
    HierarchyListReverseRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(HierarchyListReverseRange);
  };
  
  class SpaceRange : public Zilch::ReferenceType
  {
  public:
    typedef SpaceRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<SpaceRange> GetAll();
    
    Zilch::HandleOf<Cog> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[16];
    
  protected:
    SpaceRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SpaceRange);
  };
  
  class SpaceMapValueRange : public Zilch::ReferenceType
  {
  public:
    typedef SpaceMapValueRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<SpaceMapValueRange> GetAll();
    
    Zilch::HandleOf<Space> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[16];
    
  protected:
    SpaceMapValueRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SpaceMapValueRange);
  };
  
  class ObjectLinkRange : public Zilch::ReferenceType
  {
  public:
    typedef ObjectLinkRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<ObjectLinkRange> GetAll();
    
    Zilch::HandleOf<ObjectLinkEdge> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[16];
    
  protected:
    ObjectLinkRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ObjectLinkRange);
  };
  
  class JoystickRange : public Zilch::ReferenceType
  {
  public:
    typedef JoystickRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<JoystickRange> GetAll();
    
    Zilch::HandleOf<Joystick> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[24];
    
  protected:
    JoystickRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(JoystickRange);
  };
  
  class CogHashSetRange : public Zilch::ReferenceType
  {
  public:
    typedef CogHashSetRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<CogHashSetRange> GetAll();
    
    Zilch::HandleOf<Cog> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[24];
    
  protected:
    CogHashSetRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CogHashSetRange);
  };
  
  class ResourceTableEntryRange : public Zilch::ReferenceType
  {
  public:
    typedef ResourceTableEntryRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<ResourceTableEntryRange> GetAll();
    
    Zilch::HandleOf<ResourceTableEntry> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[16];
    
  protected:
    ResourceTableEntryRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ResourceTableEntryRange);
  };
  
  class OperationListRange : public Zilch::ReferenceType
  {
  public:
    typedef OperationListRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<OperationListRange> GetAll();
    
    Zilch::HandleOf<Operation> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[16];
    
  protected:
    OperationListRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(OperationListRange);
  };
  
  class GameSessionRange : public Zilch::ReferenceType
  {
  public:
    typedef GameSessionRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<GameSessionRange> GetAll();
    
    Zilch::HandleOf<GameSession> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[16];
    
  protected:
    GameSessionRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(GameSessionRange);
  };
  
  class ActionExecuteMode : public Zilch::Enum
  {
  public:
    typedef ActionExecuteMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static ActionExecuteMode GetLogicUpdate();
    
    static ActionExecuteMode GetFrameUpdate();
    
    ActionExecuteMode();
  };
  
  class ActionState : public Zilch::Enum
  {
  public:
    typedef ActionState ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static ActionState GetRunning();
    
    static ActionState GetCompleted();
    
    ActionState();
  };
  
  class AnimationBlendMode : public Zilch::Enum
  {
  public:
    typedef AnimationBlendMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static AnimationBlendMode GetAuto();
    
    static AnimationBlendMode GetManual();
    
    AnimationBlendMode();
  };
  
  class AnimationBlendType : public Zilch::Enum
  {
  public:
    typedef AnimationBlendType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static AnimationBlendType GetStandard();
    
    static AnimationBlendType GetNormalized();
    
    AnimationBlendType();
  };
  
  class AnimationPlayMode : public Zilch::Enum
  {
  public:
    typedef AnimationPlayMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static AnimationPlayMode GetPlayOnce();
    
    static AnimationPlayMode GetLoop();
    
    static AnimationPlayMode GetPingpong();
    
    AnimationPlayMode();
  };
  
  class Buttons : public Zilch::Enum
  {
  public:
    typedef Buttons ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static Buttons GetA();
    
    static Buttons GetB();
    
    static Buttons GetX();
    
    static Buttons GetY();
    
    static Buttons GetStart();
    
    static Buttons GetBack();
    
    static Buttons GetLeftThumb();
    
    static Buttons GetRightThumb();
    
    static Buttons GetLeftShoulder();
    
    static Buttons GetRightShoulder();
    
    static Buttons GetDpadUp();
    
    static Buttons GetDpadDown();
    
    static Buttons GetDpadLeft();
    
    static Buttons GetDpadRight();
    
    static Buttons GetDpadUpFiltered();
    
    static Buttons GetDpadDownFiltered();
    
    static Buttons GetDpadLeftFiltered();
    
    static Buttons GetDpadRightFiltered();
    
    static Buttons GetStickUp();
    
    static Buttons GetStickDown();
    
    static Buttons GetStickLeft();
    
    static Buttons GetStickRight();
    
    static Buttons GetAnyButton();
    
    Buttons();
  };
  
  class CogPathPreference : public Zilch::Enum
  {
  public:
    typedef CogPathPreference ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static CogPathPreference GetCogRelative();
    
    static CogPathPreference GetSpaceRelative();
    
    static CogPathPreference GetAbsolute();
    
    CogPathPreference();
  };
  
  // Standard Mouse Cursors.
  class Cursor : public Zilch::Enum
  {
  public:
    typedef Cursor ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static Cursor GetArrow();
    
    static Cursor GetWait();
    
    static Cursor GetCross();
    
    static Cursor GetSizeNWSE();
    
    static Cursor GetSizeNESW();
    
    static Cursor GetSizeWE();
    
    static Cursor GetSizeNS();
    
    static Cursor GetSizeAll();
    
    static Cursor GetTextBeam();
    
    static Cursor GetHand();
    
    static Cursor GetInvisible();
    
    Cursor();
  };
  
  class Ease : public Zilch::Enum
  {
  public:
    typedef Ease ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static Ease GetLinear();
    
    static Ease GetQuadIn();
    
    static Ease GetQuadOut();
    
    static Ease GetQuadInOut();
    
    static Ease GetSinIn();
    
    static Ease GetSinOut();
    
    static Ease GetSinInOut();
    
    static Ease GetElasticIn();
    
    static Ease GetElasticOut();
    
    static Ease GetElasticInOut();
    
    static Ease GetBounceIn();
    
    static Ease GetBounceOut();
    
    static Ease GetBounceInOut();
    
    static Ease GetBackIn();
    
    static Ease GetBackOut();
    
    static Ease GetBackInOut();
    
    static Ease GetWarpIn();
    
    static Ease GetWarpOut();
    
    static Ease GetWarpInOut();
    
    Ease();
  };
  
  class FlickedStick : public Zilch::Enum
  {
  public:
    typedef FlickedStick ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static FlickedStick GetNone();
    
    static FlickedStick GetLeft();
    
    static FlickedStick GetRight();
    
    FlickedStick();
  };
  
  class InputDevice : public Zilch::Enum
  {
  public:
    typedef InputDevice ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static InputDevice GetKeyboard();
    
    static InputDevice GetMouse();
    
    static InputDevice GetGamepad();
    
    static InputDevice GetJoystick();
    
    InputDevice();
  };
  
  class Keys : public Zilch::Enum
  {
  public:
    typedef Keys ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static Keys GetUnknown();
    
    static Keys GetSpace();
    
    static Keys GetApostrophe();
    
    static Keys GetComma();
    
    static Keys GetMinus();
    
    static Keys GetPeriod();
    
    static Keys GetSlash();
    
    static Keys GetZero();
    
    static Keys GetOne();
    
    static Keys GetTwo();
    
    static Keys GetThree();
    
    static Keys GetFour();
    
    static Keys GetFive();
    
    static Keys GetSix();
    
    static Keys GetSeven();
    
    static Keys GetEight();
    
    static Keys GetNine();
    
    static Keys GetSemicolon();
    
    static Keys GetA();
    
    static Keys GetB();
    
    static Keys GetC();
    
    static Keys GetD();
    
    static Keys GetE();
    
    static Keys GetF();
    
    static Keys GetG();
    
    static Keys GetH();
    
    static Keys GetI();
    
    static Keys GetJ();
    
    static Keys GetK();
    
    static Keys GetL();
    
    static Keys GetM();
    
    static Keys GetN();
    
    static Keys GetO();
    
    static Keys GetP();
    
    static Keys GetQ();
    
    static Keys GetR();
    
    static Keys GetS();
    
    static Keys GetT();
    
    static Keys GetU();
    
    static Keys GetV();
    
    static Keys GetW();
    
    static Keys GetX();
    
    static Keys GetY();
    
    static Keys GetZ();
    
    static Keys GetLeftBracket();
    
    static Keys GetBackslash();
    
    static Keys GetRightBracket();
    
    static Keys GetUp();
    
    static Keys GetDown();
    
    static Keys GetLeft();
    
    static Keys GetRight();
    
    static Keys GetF1();
    
    static Keys GetF2();
    
    static Keys GetF3();
    
    static Keys GetF4();
    
    static Keys GetF5();
    
    static Keys GetF6();
    
    static Keys GetF7();
    
    static Keys GetF8();
    
    static Keys GetF9();
    
    static Keys GetF10();
    
    static Keys GetF11();
    
    static Keys GetF12();
    
    static Keys GetInsert();
    
    static Keys GetDelete();
    
    static Keys GetBack();
    
    static Keys GetHome();
    
    static Keys GetEnd();
    
    static Keys GetTilde();
    
    static Keys GetTab();
    
    static Keys GetShift();
    
    static Keys GetAlt();
    
    static Keys GetControl();
    
    static Keys GetCapital();
    
    static Keys GetEnter();
    
    static Keys GetEscape();
    
    static Keys GetPageUp();
    
    static Keys GetPageDown();
    
    static Keys GetEqual();
    
    static Keys GetNumPad0();
    
    static Keys GetNumPad1();
    
    static Keys GetNumPad2();
    
    static Keys GetNumPad3();
    
    static Keys GetNumPad4();
    
    static Keys GetNumPad5();
    
    static Keys GetNumPad6();
    
    static Keys GetNumPad7();
    
    static Keys GetNumPad8();
    
    static Keys GetNumPad9();
    
    static Keys GetAdd();
    
    static Keys GetMultiply();
    
    static Keys GetSubtract();
    
    static Keys GetDivide();
    
    static Keys GetDecimal();
    
    static Keys GetNone();
    
    Keys();
  };
  
  class KeyState : public Zilch::Enum
  {
  public:
    typedef KeyState ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static KeyState GetUp();
    
    static KeyState GetDown();
    
    static KeyState GetRepeated();
    
    KeyState();
  };
  
  class LauncherAutoRunMode : public Zilch::Enum
  {
  public:
    typedef LauncherAutoRunMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static LauncherAutoRunMode GetNone();
    
    static LauncherAutoRunMode GetIfInstalled();
    
    static LauncherAutoRunMode GetInstallAndRun();
    
    LauncherAutoRunMode();
  };
  
  class Location : public Zilch::Enum
  {
  public:
    typedef Location ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static Location GetTopLeft();
    
    static Location GetTopCenter();
    
    static Location GetTopRight();
    
    static Location GetCenterLeft();
    
    static Location GetCenter();
    
    static Location GetCenterRight();
    
    static Location GetBottomLeft();
    
    static Location GetBottomCenter();
    
    static Location GetBottomRight();
    
    static bool IsCardinal(const Location& __0);
    
    static int GetCardinalAxis(const Location& __0);
    
    static Zilch::Real2 GetDirection(const Location& __0);
    
    static Zilch::Real2 GetDirection(const Location& __0, const Location& __1);
    
    static Location GetOpposite(const Location& __0);
    
    Location();
  };
  
  class CurveType : public Zilch::Enum
  {
  public:
    typedef CurveType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static CurveType GetLinear();
    
    static CurveType GetBSpline();
    
    static CurveType GetCatmullRom();
    
    CurveType();
  };
  
  // As the extra mouse buttons are typically Back and Forward they have been named accordingly.
  class MouseButtons : public Zilch::Enum
  {
  public:
    typedef MouseButtons ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static MouseButtons GetLeft();
    
    static MouseButtons GetRight();
    
    static MouseButtons GetMiddle();
    
    static MouseButtons GetXOneBack();
    
    static MouseButtons GetXTwoForward();
    
    static MouseButtons GetNone();
    
    MouseButtons();
  };
  
  class ProgressType : public Zilch::Enum
  {
  public:
    typedef ProgressType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static ProgressType GetNormal();
    
    static ProgressType GetIndeterminate();
    
    static ProgressType GetNone();
    
    ProgressType();
  };
  
  class SplineType : public Zilch::Enum
  {
  public:
    typedef SplineType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static SplineType GetLinear();
    
    static SplineType GetBSpline();
    
    static SplineType GetCatmullRom();
    
    SplineType();
  };
  
  class StoreResult : public Zilch::Enum
  {
  public:
    typedef StoreResult ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static StoreResult GetAdded();
    
    static StoreResult GetReplaced();
    
    static StoreResult GetFailed();
    
    StoreResult();
  };
  
  class StreamType : public Zilch::Enum
  {
  public:
    typedef StreamType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static StreamType GetStandardOutput();
    
    static StreamType GetStandardError();
    
    static StreamType GetStandardInput();
    
    StreamType();
  };
  
  class TabWidth : public Zilch::Enum
  {
  public:
    typedef TabWidth ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static TabWidth GetTwoSpaces();
    
    static TabWidth GetFourSpaces();
    
    TabWidth();
  };
  
  class TimeMode : public Zilch::Enum
  {
  public:
    typedef TimeMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static TimeMode GetFixedFrametime();
    
    static TimeMode GetActualFrametime();
    
    TimeMode();
  };
  
  // The state of the window for minimizing / maximizing.
  class WindowState : public Zilch::Enum
  {
  public:
    typedef WindowState ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static WindowState GetMinimized();
    
    static WindowState GetMaximized();
    
    static WindowState GetWindowed();
    
    static WindowState GetFullscreen();
    
    static WindowState GetRestore();
    
    WindowState();
  };
  
  class WindowStyleFlags : public Zilch::Enum
  {
  public:
    typedef WindowStyleFlags ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static WindowStyleFlags GetNotVisible();
    
    static WindowStyleFlags GetMainWindow();
    
    static WindowStyleFlags GetOnTaskBar();
    
    static WindowStyleFlags GetTitleBar();
    
    static WindowStyleFlags GetResizable();
    
    static WindowStyleFlags GetClose();
    
    static WindowStyleFlags GetClientOnly();
    
    WindowStyleFlags();
  };
  
  class ZeroMetaArrayContentLibraryReferenceArray : public MetaArray
  {
  public:
    typedef ZeroMetaArrayContentLibraryReferenceArray ZilchSelf;
    typedef MetaArray ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ZeroMetaArrayContentLibraryReferenceArray(Zilch::NoType none) : MetaArray(none) {}
    ZilchNoCopy(ZeroMetaArrayContentLibraryReferenceArray);
  };
  
  class ContentLibraryReferenceArray : public Zilch::ReferenceType
  {
  public:
    typedef ContentLibraryReferenceArray ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[32];
    
  protected:
    ContentLibraryReferenceArray(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ContentLibraryReferenceArray);
  };
  
  class DataSource : public EventObject
  {
  public:
    typedef DataSource ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    DataSource(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(DataSource);
  };
  
  class System : public EventObject
  {
  public:
    typedef System ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    System(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(System);
  };
  
  class TransformMetaTransform : public MetaTransform
  {
  public:
    typedef TransformMetaTransform ZilchSelf;
    typedef MetaTransform ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    TransformMetaTransform(Zilch::NoType none) : MetaTransform(none) {}
    ZilchNoCopy(TransformMetaTransform);
  };
  
  class CogMetaComposition : public MetaComposition
  {
  public:
    typedef CogMetaComposition ZilchSelf;
    typedef MetaComposition ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    CogMetaComposition(Zilch::NoType none) : MetaComposition(none) {}
    ZilchNoCopy(CogMetaComposition);
  };
  
  class CogMetaDataInheritance : public MetaDataInheritanceRoot
  {
  public:
    typedef CogMetaDataInheritance ZilchSelf;
    typedef MetaDataInheritanceRoot ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    CogMetaDataInheritance(Zilch::NoType none) : MetaDataInheritanceRoot(none) {}
    ZilchNoCopy(CogMetaDataInheritance);
  };
  
  class CogMetaDisplay : public MetaDisplay
  {
  public:
    typedef CogMetaDisplay ZilchSelf;
    typedef MetaDisplay ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    CogMetaDisplay(Zilch::NoType none) : MetaDisplay(none) {}
    ZilchNoCopy(CogMetaDisplay);
  };
  
  class CogMetaSerialization : public MetaSerialization
  {
  public:
    typedef CogMetaSerialization ZilchSelf;
    typedef MetaSerialization ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    CogMetaSerialization(Zilch::NoType none) : MetaSerialization(none) {}
    ZilchNoCopy(CogMetaSerialization);
  };
  
  class CogMetaOperations : public MetaOperations
  {
  public:
    typedef CogMetaOperations ZilchSelf;
    typedef MetaOperations ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    CogMetaOperations(Zilch::NoType none) : MetaOperations(none) {}
    ZilchNoCopy(CogMetaOperations);
  };
  
  class CogMetaTransform : public MetaTransform
  {
  public:
    typedef CogMetaTransform ZilchSelf;
    typedef MetaTransform ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    CogMetaTransform(Zilch::NoType none) : MetaTransform(none) {}
    ZilchNoCopy(CogMetaTransform);
  };
  
  class CogArchetypeExtension : public EditorPropertyExtension
  {
  public:
    typedef CogArchetypeExtension ZilchSelf;
    typedef EditorPropertyExtension ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    CogArchetypeExtension(Zilch::NoType none) : EditorPropertyExtension(none) {}
    ZilchNoCopy(CogArchetypeExtension);
  };
  
  class CogSerializationFilter : public SerializationFilter
  {
  public:
    typedef CogSerializationFilter ZilchSelf;
    typedef SerializationFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    CogSerializationFilter(Zilch::NoType none) : SerializationFilter(none) {}
    ZilchNoCopy(CogSerializationFilter);
  };
  
  class CogPathMetaSerialization : public MetaSerialization
  {
  public:
    typedef CogPathMetaSerialization ZilchSelf;
    typedef MetaSerialization ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    CogPathMetaSerialization(Zilch::NoType none) : MetaSerialization(none) {}
    ZilchNoCopy(CogPathMetaSerialization);
  };
  
  class ComponentMetaDataInheritance : public MetaDataInheritance
  {
  public:
    typedef ComponentMetaDataInheritance ZilchSelf;
    typedef MetaDataInheritance ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ComponentMetaDataInheritance(Zilch::NoType none) : MetaDataInheritance(none) {}
    ZilchNoCopy(ComponentMetaDataInheritance);
  };
  
  class DataResourceInheritance : public MetaDataInheritanceRoot
  {
  public:
    typedef DataResourceInheritance ZilchSelf;
    typedef MetaDataInheritanceRoot ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    DataResourceInheritance(Zilch::NoType none) : MetaDataInheritanceRoot(none) {}
    ZilchNoCopy(DataResourceInheritance);
  };
  
  class ResourceMetaSerialization : public MetaSerialization
  {
  public:
    typedef ResourceMetaSerialization ZilchSelf;
    typedef MetaSerialization ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ResourceMetaSerialization(Zilch::NoType none) : MetaSerialization(none) {}
    ZilchNoCopy(ResourceMetaSerialization);
  };
  
  class EngineMetaComposition : public MetaComposition
  {
  public:
    typedef EngineMetaComposition ZilchSelf;
    typedef MetaComposition ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    EngineMetaComposition(Zilch::NoType none) : MetaComposition(none) {}
    ZilchNoCopy(EngineMetaComposition);
  };
  
  class HierarchyComposition : public MetaComposition
  {
  public:
    typedef HierarchyComposition ZilchSelf;
    typedef MetaComposition ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    HierarchyComposition(Zilch::NoType none) : MetaComposition(none) {}
    ZilchNoCopy(HierarchyComposition);
  };
  
  class MetaResource : public ReferenceCountedEventObject
  {
  public:
    typedef MetaResource ZilchSelf;
    typedef ReferenceCountedEventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[144];
    
  protected:
    MetaResource(Zilch::NoType none) : ReferenceCountedEventObject(none) {}
    ZilchNoCopy(MetaResource);
  };
  
  class ComponentMetaOperations : public MetaOperations
  {
  public:
    typedef ComponentMetaOperations ZilchSelf;
    typedef MetaOperations ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ComponentMetaOperations(Zilch::NoType none) : MetaOperations(none) {}
    ZilchNoCopy(ComponentMetaOperations);
  };
  
  class ResourceMetaOperations : public MetaOperations
  {
  public:
    typedef ResourceMetaOperations ZilchSelf;
    typedef MetaOperations ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ResourceMetaOperations(Zilch::NoType none) : MetaOperations(none) {}
    ZilchNoCopy(ResourceMetaOperations);
  };
  
  class CogArchetypePropertyFilter : public MetaPropertyFilter
  {
  public:
    typedef CogArchetypePropertyFilter ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    CogArchetypePropertyFilter(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(CogArchetypePropertyFilter);
  };
  
  class CogPathMetaComposition : public MetaComposition
  {
  public:
    typedef CogPathMetaComposition ZilchSelf;
    typedef MetaComposition ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    CogPathMetaComposition(Zilch::NoType none) : MetaComposition(none) {}
    ZilchNoCopy(CogPathMetaComposition);
  };
  
  class MetaEditorScriptObject : public MetaAttribute
  {
  public:
    typedef MetaEditorScriptObject ZilchSelf;
    typedef MetaAttribute ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetAutoRegister();
    
    void SetAutoRegister(bool value);
    
    unsigned char mValue[8];
    
  protected:
    MetaEditorScriptObject(Zilch::NoType none) : MetaAttribute(none) {}
    ZilchNoCopy(MetaEditorScriptObject);
  };
  
  class MetaDependency : public MetaAttribute
  {
  public:
    typedef MetaDependency ZilchSelf;
    typedef MetaAttribute ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    MetaDependency(Zilch::NoType none) : MetaAttribute(none) {}
    ZilchNoCopy(MetaDependency);
  };
  
  class MetaInterface : public MetaAttribute
  {
  public:
    typedef MetaInterface ZilchSelf;
    typedef MetaAttribute ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    MetaInterface(Zilch::NoType none) : MetaAttribute(none) {}
    ZilchNoCopy(MetaInterface);
  };
  
  class RaycasterMetaComposition : public MetaComposition
  {
  public:
    typedef RaycasterMetaComposition ZilchSelf;
    typedef MetaComposition ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    RaycasterMetaComposition(Zilch::NoType none) : MetaComposition(none) {}
    ZilchNoCopy(RaycasterMetaComposition);
  };
  
  class CogPathEvent : public Event
  {
  public:
    typedef CogPathEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<CogPath> GetCogPath();
    
    void SetCogPath(CogPath* value);
    
    unsigned char mValue[64];
    
  protected:
    CogPathEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(CogPathEvent);
  };
  
  // Update event Contains current time and delta time.
  class UpdateEvent : public Event
  {
  public:
    typedef UpdateEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetDt();
    
    void SetDt(float value);
    
    float GetTimePassed();
    
    void SetTimePassed(float value);
    
    float GetRealTimePassed();
    
    void SetRealTimePassed(float value);
    
    unsigned char mValue[16];
    
  protected:
    UpdateEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(UpdateEvent);
  };
  
  class ResourceEvent : public Event
  {
  public:
    typedef ResourceEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[56];
    
  protected:
    ResourceEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ResourceEvent);
  };
  
  // An event to inform which input device is being used by the user.
  class InputDeviceEvent : public Event
  {
  public:
    typedef InputDeviceEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    InputDevice GetDevice();
    
    void SetDevice(const InputDevice& value);
    
    InputDevice GetLastDevice();
    
    void SetLastDevice(const InputDevice& value);
    
    unsigned char mValue[8];
    
  protected:
    InputDeviceEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(InputDeviceEvent);
  };
  
  // Event type used by the GameSession.
  class GameEvent : public Event
  {
  public:
    typedef GameEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetLevelName();
    
    void SetLevelName(const Zilch::String& value);
    
    Zilch::HandleOf<GameSession> GetGame();
    
    void SetGame(GameSession* value);
    
    Zilch::HandleOf<Space> GetSpace();
    
    void SetSpace(Space* value);
    
    bool GetHandled();
    
    void SetHandled(bool value);
    
    unsigned char mValue[32];
    
  protected:
    GameEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(GameEvent);
  };
  
  class AnimationGraphEvent : public Event
  {
  public:
    typedef AnimationGraphEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Animation> GetAnimation();
    
    Zilch::HandleOf<AnimationNode> GetNode();
    
    AnimationPlayMode GetPlayMode();
    
    unsigned char mValue[120];
    
  protected:
    AnimationGraphEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(AnimationGraphEvent);
  };
  
  // Represents information about key state changes.
  class KeyboardEvent : public Event
  {
  public:
    typedef KeyboardEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Keys GetKey();
    
    void SetKey(const Keys& value);
    
    KeyState GetState();
    
    void SetState(const KeyState& value);
    
    bool GetShiftPressed();
    
    void SetShiftPressed(bool value);
    
    bool GetAltPressed();
    
    void SetAltPressed(bool value);
    
    bool GetCtrlPressed();
    
    void SetCtrlPressed(bool value);
    
    bool GetSpacePressed();
    
    void SetSpacePressed(bool value);
    
    bool GetHandledEvent();
    
    void SetHandledEvent(bool value);
    
    Zilch::HandleOf<Keyboard> GetKeyboard();
    
    int GetOsKey();
    
    void SetOsKey(int value);
    
    bool GetModifierPressed();
    
    unsigned char mValue[32];
    
  protected:
    KeyboardEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(KeyboardEvent);
  };
  
  class FileEditEvent : public Event
  {
  public:
    typedef FileEditEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[24];
    
  protected:
    FileEditEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(FileEditEvent);
  };
  
  // Gives the actual key value being typed. For example, holding Shift + 'a' will give 'A'.
  class KeyboardTextEvent : public Event
  {
  public:
    typedef KeyboardTextEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Rune GetRune();
    
    void SetRune(const Zilch::Rune& value);
    
    unsigned char mValue[8];
    
  protected:
    KeyboardTextEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(KeyboardTextEvent);
  };
  
  class OsMouseEvent : public Event
  {
  public:
    typedef OsMouseEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[48];
    
  protected:
    OsMouseEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(OsMouseEvent);
  };
  
  class HierarchyEvent : public Event
  {
  public:
    typedef HierarchyEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Cog> GetParent();
    
    void SetParent(Cog* value);
    
    Zilch::HandleOf<Cog> GetChild();
    
    void SetChild(Cog* value);
    
    unsigned char mValue[16];
    
  protected:
    HierarchyEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(HierarchyEvent);
  };
  
  // Joystick events are sent when a game pad button state is changed.
  class JoystickEvent : public Event
  {
  public:
    typedef JoystickEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetButton();
    
    void SetButton(int value);
    
    Zilch::HandleOf<Joystick> GetJoystick();
    
    void SetJoystick(Joystick* value);
    
    unsigned char mValue[16];
    
  protected:
    JoystickEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(JoystickEvent);
  };
  
  class CogInitializerEvent : public Event
  {
  public:
    typedef CogInitializerEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<CogInitializer> GetCogInitializer();
    
    void SetCogInitializer(CogInitializer* value);
    
    unsigned char mValue[8];
    
  protected:
    CogInitializerEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(CogInitializerEvent);
  };
  
  // An event sent when an object link changes one of its link edges.
  class ObjectLinkEvent : public Event
  {
  public:
    typedef ObjectLinkEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Cog> GetNewCog();
    
    void SetNewCog(Cog* value);
    
    Zilch::HandleOf<Cog> GetOldCog();
    
    void SetOldCog(Cog* value);
    
    int GetEdgeId();
    
    void SetEdgeId(int value);
    
    unsigned char mValue[24];
    
  protected:
    ObjectLinkEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ObjectLinkEvent);
  };
  
  class ObjectLinkPointChangedEvent : public Event
  {
  public:
    typedef ObjectLinkPointChangedEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetOldLocalPoint();
    
    void SetOldLocalPoint(const Zilch::Real3& value);
    
    Zilch::Real3 GetNewLocalPoint();
    
    void SetNewLocalPoint(const Zilch::Real3& value);
    
    int GetEdgeId();
    
    void SetEdgeId(int value);
    
    unsigned char mValue[32];
    
  protected:
    ObjectLinkPointChangedEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ObjectLinkPointChangedEvent);
  };
  
  // Used by any height map event.
  class HeightMapEvent : public Event
  {
  public:
    typedef HeightMapEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[24];
    
  protected:
    HeightMapEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(HeightMapEvent);
  };
  
  // Sent when an area component's size or origin changes.
  class AreaEvent : public Event
  {
  public:
    typedef AreaEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Area> GetArea();
    
    void SetArea(Area* value);
    
    unsigned char mValue[8];
    
  protected:
    AreaEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(AreaEvent);
  };
  
  // Gamepad events are send when a game pad button state is changed.
  class GamepadEvent : public Event
  {
  public:
    typedef GamepadEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Gamepad> GetGamepad();
    
    void SetGamepad(Gamepad* value);
    
    int GetButton();
    
    void SetButton(int value);
    
    Zilch::Real2 GetFlickDirection();
    
    void SetFlickDirection(const Zilch::Real2& value);
    
    FlickedStick GetFlickedStick();
    
    void SetFlickedStick(const FlickedStick& value);
    
    unsigned char mValue[32];
    
  protected:
    GamepadEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(GamepadEvent);
  };
  
  // Notification about most recent Operation/OperationBatch added to the OperationQueue.
  class OperationQueueEvent : public Event
  {
  public:
    typedef OperationQueueEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Operation> GetOperation();
    
    void SetOperation(Operation* value);
    
    unsigned char mValue[8];
    
  protected:
    OperationQueueEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(OperationQueueEvent);
  };
  
  class OsWindowEvent : public Event
  {
  public:
    typedef OsWindowEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    OsWindowEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(OsWindowEvent);
  };
  
  class OsWindowBorderHitTest : public Event
  {
  public:
    typedef OsWindowBorderHitTest ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[24];
    
  protected:
    OsWindowBorderHitTest(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(OsWindowBorderHitTest);
  };
  
  class OsMouseDropEvent : public OsMouseEvent
  {
  public:
    typedef OsMouseDropEvent ZilchSelf;
    typedef OsMouseEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[32];
    
  protected:
    OsMouseDropEvent(Zilch::NoType none) : OsMouseEvent(none) {}
    ZilchNoCopy(OsMouseDropEvent);
  };
  
  class SavingEvent : public Event
  {
  public:
    typedef SavingEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[48];
    
  protected:
    SavingEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(SavingEvent);
  };
  
  class ScriptEvent : public Event
  {
  public:
    typedef ScriptEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[152];
    
  protected:
    ScriptEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ScriptEvent);
  };
  
  class DataEvent : public Event
  {
  public:
    typedef DataEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    DataEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(DataEvent);
  };
  
  class DataReplaceEvent : public Event
  {
  public:
    typedef DataReplaceEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    DataReplaceEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(DataReplaceEvent);
  };
  
  class CogReplaceEvent : public DataReplaceEvent
  {
  public:
    typedef CogReplaceEvent ZilchSelf;
    typedef DataReplaceEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    CogReplaceEvent(Zilch::NoType none) : DataReplaceEvent(none) {}
    ZilchNoCopy(CogReplaceEvent);
  };
  
  class TextEvent : public Event
  {
  public:
    typedef TextEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetText();
    
    void SetText(const Zilch::String& value);
    
    unsigned char mValue[8];
    
  protected:
    TextEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(TextEvent);
  };
  
  class TextErrorEvent : public TextEvent
  {
  public:
    typedef TextErrorEvent ZilchSelf;
    typedef TextEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    TextErrorEvent(Zilch::NoType none) : TextEvent(none) {}
    ZilchNoCopy(TextErrorEvent);
  };
  
  class ProgressEvent : public Event
  {
  public:
    typedef ProgressEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    ProgressEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ProgressEvent);
  };
  
  class OsFileSelection : public Event
  {
  public:
    typedef OsFileSelection ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    OsFileSelection(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(OsFileSelection);
  };
  
  class ClipboardEvent : public Event
  {
  public:
    typedef ClipboardEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    void Clear();
    
    Zilch::String GetText();
    
    void SetText(const Zilch::String& value);
    
    bool GetHandled();
    
    void SetHandled(bool value);
    
    unsigned char mValue[56];
    
  protected:
    ClipboardEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ClipboardEvent);
  };
  
  class ZilchCompiledEvent : public Event
  {
  public:
    typedef ZilchCompiledEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[32];
    
  protected:
    ZilchCompiledEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ZilchCompiledEvent);
  };
  
  class ZilchCompileFragmentEvent : public Event
  {
  public:
    typedef ZilchCompileFragmentEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[56];
    
  protected:
    ZilchCompileFragmentEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ZilchCompileFragmentEvent);
  };
  
  class ZilchCompileEvent : public Event
  {
  public:
    typedef ZilchCompileEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    ZilchCompileEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ZilchCompileEvent);
  };
  
  // Event sent out for notifications about a spline.
  class SplineEvent : public Event
  {
  public:
    typedef SplineEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Spline> GetSpline();
    
    void SetSpline(Spline* value);
    
    unsigned char mValue[56];
    
  protected:
    SplineEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(SplineEvent);
  };
  
  class BlockingTaskEvent : public Event
  {
  public:
    typedef BlockingTaskEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    BlockingTaskEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(BlockingTaskEvent);
  };
  
  // Sent out when AsyncProcess completes a partial read for a stream or the stream has finished reading all data.
  class AsyncProcessEvent : public Event
  {
  public:
    typedef AsyncProcessEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetBytes();
    
    void SetBytes(const Zilch::String& value);
    
    StreamType GetStreamType();
    
    void SetStreamType(const StreamType& value);
    
    unsigned char mValue[16];
    
  protected:
    AsyncProcessEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(AsyncProcessEvent);
  };
  
  // A component is an atomic piece of functionality that is composed into a Cog to form game objects.
  class Component : public Object
  {
  public:
    typedef Component ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Cog> GetOwner();
    
    Zilch::HandleOf<Space> GetSpace();
    
    Zilch::HandleOf<Cog> GetLevelSettings();
    
    Zilch::HandleOf<GameSession> GetGameSession();
    
    // Base debug draw for a component. Special for the each type of component.
    void DebugDraw();
    
    unsigned char mValue[8];
    
  protected:
    Component(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(Component);
  };
  
  // Transform component class. The transform component provides the position, rotation and scale of an object.
  class Transform : public Component
  {
  public:
    typedef Transform ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetTranslation();
    
    void SetTranslation(const Zilch::Real3& value);
    
    Zilch::Quaternion GetRotation();
    
    void SetRotation(const Zilch::Quaternion& value);
    
    Zilch::Real3 GetScale();
    
    void SetScale(const Zilch::Real3& value);
    
    // Generates a rotation matrix from the given bases.
    void SetRotationBases(const Zilch::Real3& facing, const Zilch::Real3& up, const Zilch::Real3& right);
    
    // Transforms a local normal (direction) into world space.
    Zilch::Real3 TransformNormal(const Zilch::Real3& normal);
    
    // Transforms a local point into world space.
    Zilch::Real3 TransformPoint(const Zilch::Real3& point);
    
    // Transforms a normal by the local matrix (ignores parent's transform) Needed now because there is no quaternion times vector in script.
    Zilch::Real3 TransformNormalLocal(const Zilch::Real3& normal);
    
    // Transforms a point by the local matrix (ignores parent's transform)
    Zilch::Real3 TransformPointLocal(const Zilch::Real3& point);
    
    // Transforms a world normal (direction) into local space.
    Zilch::Real3 TransformNormalInverse(const Zilch::Real3& normal);
    
    // Transforms a world point into local space.
    Zilch::Real3 TransformPointInverse(const Zilch::Real3& point);
    
    // Rotate object in local space.
    void RotateLocal(const Zilch::Quaternion& rotation);
    
    // Rotate object in world space.
    void RotateWorld(const Zilch::Quaternion& rotation);
    
    // Rotate around a given point with the given rotation.
    void RotateAround(const Zilch::Real3& point, const Zilch::Quaternion& rotation);
    
    // Rotate object in local space by the given Euler angle vector (in radians).
    void RotateAnglesLocal(const Zilch::Real3& angles);
    
    // Rotate object in world space by the given Euler angle vector (in radians).
    void RotateAnglesWorld(const Zilch::Real3& angles);
    
    // Sets the rotation of the transform by the given Euler angles in radians.
    void SetEulerAnglesXYZ(float xRadians, float yRadians, float zRadians);
    
    Zilch::Real3 GetEulerAngles();
    
    void SetEulerAngles(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalScale();
    
    void SetLocalScale(const Zilch::Real3& value);
    
    Zilch::Quaternion GetLocalRotation();
    
    void SetLocalRotation(const Zilch::Quaternion& value);
    
    Zilch::Real3 GetLocalTranslation();
    
    void SetLocalTranslation(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldScale();
    
    void SetWorldScale(const Zilch::Real3& value);
    
    Zilch::Quaternion GetWorldRotation();
    
    void SetWorldRotation(const Zilch::Quaternion& value);
    
    Zilch::Real3 GetWorldTranslation();
    
    void SetWorldTranslation(const Zilch::Real3& value);
    
    Zilch::Real4x4 GetWorldMatrix();
    
    Zilch::HandleOf<Transform> GetParent();
    
    unsigned char mValue[64];
    
  protected:
    Transform(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Transform);
  };
  
  // Component that gives an game object the ability to have child objects and Contains a list of children.
  class Hierarchy : public Component
  {
  public:
    typedef Hierarchy ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<HierarchyListRange> GetChildren();
    
    unsigned char mValue[16];
    
  protected:
    Hierarchy(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Hierarchy);
  };
  
  // Time space component controls time for a Space.
  class TimeSpace : public Component
  {
  public:
    typedef TimeSpace ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Toggles the state of paused.
    void TogglePause();
    
    // Allows the engine to be advance one frame forward. Useful for debugging one frame at a time.
    void Step();
    
    bool GetGloballyPaused();
    
    float GetDtOrZero();
    
    TimeMode GetTimeMode();
    
    void SetTimeMode(const TimeMode& value);
    
    float GetMinDt();
    
    void SetMinDt(float value);
    
    float GetMaxDt();
    
    void SetMaxDt(float value);
    
    float GetTimeScale();
    
    void SetTimeScale(float value);
    
    bool GetPaused();
    
    void SetPaused(bool value);
    
    float GetDt();
    
    float GetRealDt();
    
    float GetTimePassed();
    
    void SetTimePassed(float value);
    
    float GetRealTimePassed();
    
    void SetRealTimePassed(float value);
    
    int GetFrame();
    
    void SetFrame(int value);
    
    int GetStepCount();
    
    void SetStepCount(int value);
    
    unsigned char mValue[72];
    
  protected:
    TimeSpace(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(TimeSpace);
  };
  
  // Forms a link between two positions on two objects. ObjectLinks are used primarily by physics to represent joints, but can also be used by graphics, gameplay, etc... to represent some connection between two objects.
  class ObjectLink : public Component
  {
  public:
    typedef ObjectLink ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<CogPath> GetObjectAPath();
    
    void SetObjectAPath(CogPath* value);
    
    Zilch::HandleOf<CogPath> GetObjectBPath();
    
    void SetObjectBPath(CogPath* value);
    
    Zilch::HandleOf<Cog> GetObjectA();
    
    void SetObjectA(Cog* value);
    
    Zilch::HandleOf<Cog> GetObjectB();
    
    void SetObjectB(Cog* value);
    
    Zilch::Real3 GetWorldPointA();
    
    void SetWorldPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointB();
    
    void SetWorldPointB(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointA();
    
    void SetLocalPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointB();
    
    void SetLocalPointB(const Zilch::Real3& value);
    
    unsigned char mValue[416];
    
  protected:
    ObjectLink(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ObjectLink);
  };
  
  // Component used to keep track of what ObjectLinks a cog has. This component is added dynamically whenever a ObjectLink is added to a cog that did not contain an ObjectLink before. This can be used to traverse across linked objects and find the entire "island" of ObjectLinks.
  class ObjectLinkAnchor : public Component
  {
  public:
    typedef ObjectLinkAnchor ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<ObjectLinkRange> GetObjectLinks();
    
    unsigned char mValue[16];
    
  protected:
    ObjectLinkAnchor(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ObjectLinkAnchor);
  };
  
  // The AnimationGraph component controls animation for an individual game object. It stores all needed per instance (vs what is shared in the animation resource) manages the current time and enumerates the animation sets. The AnimationGraph can animate multiple child objects and properties enabling bone animation, and other hierarchical animations.
  class AnimationGraph : public Component
  {
  public:
    typedef AnimationGraph ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<AnimationNode> GetActiveNode();
    
    void SetActiveNode(AnimationNode* value);
    
    bool IsPlayingInGraph(Animation* animation);
    
    void PrintGraph();
    
    // Updates the root node on each from and applies it to the object tree.
    void Update(float dt);
    
    bool GetActive();
    
    void SetActive(bool value);
    
    float GetTimeScale();
    
    void SetTimeScale(float value);
    
    // Node creation functions.
    Zilch::HandleOf<BasicAnimation> CreateBasicNode(Animation* animation, const AnimationPlayMode& mode);
    
    Zilch::HandleOf<DirectBlend> CreateDirectBlendNode();
    
    Zilch::HandleOf<CrossBlend> CreateCrossBlendNode();
    
    Zilch::HandleOf<SelectiveNode> CreateSelectiveNode();
    
    Zilch::HandleOf<ChainNode> CreateChainNode();
    
    unsigned char mValue[184];
    
  protected:
    AnimationGraph(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(AnimationGraph);
  };
  
  // Plays a single animation on Initialize.
  class SimpleAnimation : public Component
  {
  public:
    typedef SimpleAnimation ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    AnimationPlayMode GetPlayMode();
    
    void SetPlayMode(const AnimationPlayMode& value);
    
    Zilch::HandleOf<Animation> GetAnimation();
    
    void SetAnimation(Animation* value);
    
    // Play animations directly.
    Zilch::HandleOf<AnimationNode> PlaySingle(Animation* animation, const AnimationPlayMode& playMode);
    
    Zilch::HandleOf<AnimationNode> DirectBlend(Animation* animation, float transitionTime, const AnimationPlayMode& playMode);
    
    Zilch::HandleOf<AnimationNode> CrossBlend(Animation* animation, float transitionTime, const AnimationPlayMode& playMode);
    
    Zilch::HandleOf<AnimationNode> PlayIsolatedAnimation(Animation* animation, Cog* rootBone, const AnimationPlayMode& playMode);
    
    Zilch::HandleOf<AnimationNode> ChainAnimation(Animation* animation, const AnimationPlayMode& playMode);
    
    unsigned char mValue[72];
    
  protected:
    SimpleAnimation(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SimpleAnimation);
  };
  
  // A common class that represents height map data.
  class HeightMap : public Component
  {
  public:
    typedef HeightMap ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<HeightMapSource> GetSource();
    
    float GetUnitsPerPatch();
    
    void SetUnitsPerPatch(float value);
    
    unsigned char mValue[160];
    
  protected:
    HeightMap(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(HeightMap);
  };
  
  class Area : public Component
  {
  public:
    typedef Area ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Location GetOrigin();
    
    void SetOrigin(const Location& value);
    
    Zilch::Real2 GetSize();
    
    void SetSize(const Zilch::Real2& value);
    
    Rectangle GetLocalRectangle();
    
    void SetLocalRectangle(const Rectangle& value);
    
    Rectangle GetWorldRectangle();
    
    void SetWorldRectangle(const Rectangle& value);
    
    Zilch::Real2 GetLocalLocation(const Location& location);
    
    void SetLocalLocation(const Location& location, const Zilch::Real2& localTranslation);
    
    Zilch::Real2 GetWorldLocation(const Location& location);
    
    void SetWorldLocation(const Location& location, const Zilch::Real2& worldTranslation);
    
    Zilch::Real2 GetTopLeft();
    
    Zilch::Real2 GetTopCenter();
    
    Zilch::Real2 GetTopRight();
    
    Zilch::Real2 GetCenterLeft();
    
    Zilch::Real2 GetCenter();
    
    Zilch::Real2 GetCenterRight();
    
    Zilch::Real2 GetBottomLeft();
    
    Zilch::Real2 GetBottomCenter();
    
    Zilch::Real2 GetBottomRight();
    
    Zilch::Real2 GetLocalTopLeft();
    
    Zilch::Real2 GetLocalTopCenter();
    
    Zilch::Real2 GetLocalTopRight();
    
    Zilch::Real2 GetLocalCenterLeft();
    
    Zilch::Real2 GetLocalCenter();
    
    Zilch::Real2 GetLocalCenterRight();
    
    Zilch::Real2 GetLocalBottomLeft();
    
    Zilch::Real2 GetLocalBottomCenter();
    
    Zilch::Real2 GetLocalBottomRight();
    
    Zilch::Real2 GetWorldTopLeft();
    
    Zilch::Real2 GetWorldTopCenter();
    
    Zilch::Real2 GetWorldTopRight();
    
    Zilch::Real2 GetWorldCenterLeft();
    
    Zilch::Real2 GetWorldCenter();
    
    Zilch::Real2 GetWorldCenterRight();
    
    Zilch::Real2 GetWorldBottomLeft();
    
    Zilch::Real2 GetWorldBottomCenter();
    
    Zilch::Real2 GetWorldBottomRight();
    
    float GetLocalTop();
    
    void SetLocalTop(float value);
    
    float GetWorldTop();
    
    void SetWorldTop(float value);
    
    float GetLocalRight();
    
    void SetLocalRight(float value);
    
    float GetWorldRight();
    
    void SetWorldRight(float value);
    
    float GetLocalBottom();
    
    void SetLocalBottom(float value);
    
    float GetWorldBottom();
    
    void SetWorldBottom(float value);
    
    float GetLocalLeft();
    
    void SetLocalLeft(float value);
    
    float GetWorldLeft();
    
    void SetWorldLeft(float value);
    
    // Offset of the given location in local space.
    Zilch::Real2 LocalOffsetOf(const Location& location);
    
    unsigned char mValue[24];
    
  protected:
    Area(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Area);
  };
  
  // Project component store primary data for a project. Projects are separate games with their own content and settings.
  class ProjectSettings : public Component
  {
  public:
    typedef ProjectSettings ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetProjectName();
    
    void SetProjectName(const Zilch::String& value);
    
    Zilch::String GetProjectFolder();
    
    Zilch::String GetContentFolder();
    
    Zilch::String GetEditorContentFolder();
    
    Zilch::String GetProjectOwner();
    
    void SetProjectOwner(const Zilch::String& value);
    
    bool GetAutoTakeProjectScreenshot();
    
    void SetAutoTakeProjectScreenshot(bool value);
    
    unsigned char mValue[160];
    
  protected:
    ProjectSettings(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ProjectSettings);
  };
  
  class ProjectDescription : public Component
  {
  public:
    typedef ProjectDescription ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetShortDescription();
    
    void SetShortDescription(const Zilch::String& value);
    
    Zilch::String GetLongDescription();
    
    void SetLongDescription(const Zilch::String& value);
    
    Zilch::String GetTags();
    
    void SetTags(const Zilch::String& value);
    
    unsigned char mValue[64];
    
  protected:
    ProjectDescription(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ProjectDescription);
  };
  
  // Game Object Composition class. This class is the foundational object for all dynamic objects in the game world. The Cog is a piece of logical interactive content and the primary mechanism game systems (Graphics, Physics, Etc.) provide functionality and communicate. A Cog can be anything from physical objects like trees, tanks, players to logical objects like teams, triggers, or AI objects.
  class Cog : public Object
  {
  public:
    typedef Cog ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    ZeroCogGetComponentTemplate;
    Zilch::String GetName();
    
    void SetName(const Zilch::String& value);
    
    Zilch::HandleOf<Archetype> GetArchetype();
    
    void SetArchetype(Archetype* value);
    
    Zilch::HandleOf<Archetype> GetBaseArchetype();
    
    Zilch::HandleOf<Space> GetSpace();
    
    Zilch::HandleOf<Cog> GetLevelSettings();
    
    Zilch::HandleOf<GameSession> GetGameSession();
    
    Zilch::HandleOf<Actions> GetActions();
    
    int GetRuntimeId();
    
    bool GetTransient();
    
    void SetTransient(bool value);
    
    bool GetPersistent();
    
    void SetPersistent(bool value);
    
    bool GetEditorViewportHidden();
    
    void SetEditorViewportHidden(bool value);
    
    bool GetObjectViewHidden();
    
    void SetObjectViewHidden(bool value);
    
    bool GetLocked();
    
    void SetLocked(bool value);
    
    int GetChildCount();
    
    // Queues the cog up for delayed destruction (at the end of the frame). If the object is marked as Protected, this will do nothing.
    void Destroy();
    
    // Clones this cog. The cloned object will be parented to this objects parent (if it exists).
    Zilch::HandleOf<Cog> Clone();
    
    // Add a component of the given type.
    bool AddComponentByType(Zilch::BoundType* componentType);
    
    // Add a component by name.
    bool AddComponentByName(const Zilch::String& name);
    
    // Finds the Components with the given type name.
    Zilch::HandleOf<Component> GetComponentByName(const Zilch::String& componentTypeName);
    
    Zilch::HandleOf<Component> GetComponentByIndex(long long __0);
    
    long long GetComponentCount();
    
    // Finds the index of the given Component type. Returns uint max if the Component didn't exist.
    int GetComponentIndex(Zilch::BoundType* componentType);
    
    // Remove a component by type. Returns true if the component existed.
    bool RemoveComponentByType(Zilch::BoundType* componentType);
    
    // Remove a component by name. Returns true if the component existed.
    bool RemoveComponentByName(const Zilch::String& typeName);
    
    Zilch::HandleOf<Cog> GetParent();
    
    // Searches up the hierarchy for the root Cog.
    Zilch::HandleOf<Cog> FindRoot();
    
    Zilch::HandleOf<HierarchyListRange> GetChildren();
    
    // Attach to a parent object.
    bool AttachToPreserveLocal(Cog* parent);
    
    // Attach to a parent object and compute the new transform so that the objects are relative.
    bool AttachTo(Cog* parent);
    
    // Detach from a parent object.
    void DetachPreserveLocal();
    
    // Detach from a parent object and compute the new transform so that the objects are relative.
    void Detach();
    
    // Depth first search of all children.
    Zilch::HandleOf<Cog> FindChildByName(const Zilch::String& name);
    
    // Checks only direct children.
    Zilch::HandleOf<Cog> FindDirectChildByName(const Zilch::String& name);
    
    // Returns a range of all children with the given name.
    Zilch::HandleOf<HierarchyNameRange> FindAllChildrenByName(const Zilch::String& name);
    
    Zilch::HandleOf<HierarchyListNameRange> FindAllDirectChildrenByName(const Zilch::String& __0);
    
    // Returns whether or not the given cog is a descendant of us.
    bool IsDescendant(Cog* cog);
    
    // Returns whether or not we are a descendant of the given Cog.
    bool IsDescendantOf(Cog* ancestor);
    
    // Returns whether or not we are an ancestor of the given Cog.
    bool IsAncestorOf(Cog* descendant);
    
    // Returns the sibling Cog after this in the parents child list. Returns null if it's the last child. If the Cog doesn't have a parent, it will return the Cog after it in the Space.
    Zilch::HandleOf<Cog> FindNextSibling();
    
    // Returns the sibling Cog before this in the parents child list. Returns null if it's the first child. If the Cog doesn't have a parent, it will return the Cog before it in the Space.
    Zilch::HandleOf<Cog> FindPreviousSibling();
    
    // Finds the next Cog in depth first post-order.
    Zilch::HandleOf<Cog> FindNextInOrder();
    
    // Finds the previous Cog in reverse depth first post-order (the opposite of FindNextInOrder).
    Zilch::HandleOf<Cog> FindPreviousInOrder();
    
    // Moves this Cog before the given sibling. Assumes they have the same parent.
    void PlaceBeforeSibling(Cog* sibling);
    
    // Moves this Cog after the given sibling. Assumes they have the same parent.
    void PlaceAfterSibling(Cog* sibling);
    
    // Places the new child at the same place as the old child in the Hierarchy. This detaches but does not destroy the old child.
    void ReplaceChild(Cog* oldChild, Cog* newChild);
    
    // Returns whether or not we have any local modifications from our Archetype. This does not account for properties with LocalModificationOverride (such as Transform modifications).
    bool IsModifiedFromArchetype();
    
    // Removes our association with the current Archetype.
    void ClearArchetype();
    
    // Upload this objects data to the archetype and marks this object as not modified. This function does not rebuild all other Cogs with the same Archetype. See ArchetypeRebuilder for more information about how to rebuild Archetypes.
    void UploadToArchetype();
    
    // Same as FindNearestParentArchetype except that it includes this Cog.
    Zilch::HandleOf<Cog> FindNearestArchetype();
    
    // Finds the top most Archetype in the Hierarchy.
    Zilch::HandleOf<Cog> FindRootArchetype();
    
    // Dispatches an event on this object.
    void DispatchEvent(const Zilch::String& eventId, Event* event);
    
    // Dispatches an event up the tree on each parent recursively (pre-order traversal)
    void DispatchUp(const Zilch::String& eventId, Event* event);
    
    // Dispatches an event down the tree on all children recursively (pre-order traversal)
    void DispatchDown(const Zilch::String& eventId, Event* event);
    
    bool GetMarkedForDestruction();
    
    // Calls DebugDraw on all components in this cog.
    void DebugDraw();
    
    // Cleans an object name of invalid runes.
    static Zilch::String SanitizeName(const Zilch::String& newName);
    
    unsigned char mValue[320];
    
  protected:
    Cog(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(Cog);
  };
  
  // A space is a near boundless, three-dimensional extent in which objects and events occur and have relative position, direction, and time. Essentially a world of objects that exist together. Used to divide objects between UI, World, Editor, and others. The two most Common spaces are the 'World' for the game world and the 'Ui' for the HUD and menus.
  class Space : public Cog
  {
  public:
    typedef Space ZilchSelf;
    typedef Cog ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetObjectCount();
    
    // Create an object in the space.
    Zilch::HandleOf<Cog> Create(Archetype* archetype);
    
    // Create a object at a position in the space.
    Zilch::HandleOf<Cog> CreateAtPosition(Archetype* archetype, const Zilch::Real3& position);
    
    Zilch::HandleOf<Cog> CreateLink(Archetype* archetype, Cog* objectA, Cog* objectB);
    
    // Load new level replace the current level.
    void LoadLevel(Level* level);
    
    // Reload the current level.
    void ReloadLevel();
    
    Zilch::HandleOf<Level> GetCurrentLevel();
    
    // Add all objects from a level.
    Zilch::HandleOf<Level> AddObjectsFromLevel(Level* levelName);
    
    // Find an object in the space with a given name.
    Zilch::HandleOf<Cog> FindObjectByName(const Zilch::String& name);
    
    Zilch::HandleOf<Cog> FindFirstObjectByName(const Zilch::String& name);
    
    Zilch::HandleOf<Cog> FindLastObjectByName(const Zilch::String& name);
    
    Zilch::HandleOf<Cog> FindFirstRootObjectByName(const Zilch::String& name);
    
    Zilch::HandleOf<Cog> FindLastRootObjectByName(const Zilch::String& name);
    
    // Find an object in the space with a given name.
    Zilch::HandleOf<CogNameRange> FindAllObjectsByName(const Zilch::String& name);
    
    Zilch::HandleOf<CogRootNameRange> FindAllRootObjectsByName(const Zilch::String& __0);
    
    // Destroy all objects in space.
    void DestroyAll();
    
    // Destroy all objects created from level.
    void DestroyAllFromLevel();
    
    bool GetIsEditorMode();
    
    void MarkModified();
    
    bool GetModified();
    
    // Clears all modifications on this Cog. Does not clear LocalModificationOverride properties.
    void MarkNotModified();
    
    Zilch::HandleOf<SpaceRange> GetAllObjects();
    
    Zilch::HandleOf<HierarchyListRange> GetAllRootObjects();
    
    unsigned char mValue[304];
    
  protected:
    Space(Zilch::NoType none) : Cog(none) {}
    ZilchNoCopy(Space);
  };
  
  class ResourceDisplayFunctions : public MetaDisplay
  {
  public:
    typedef ResourceDisplayFunctions ZilchSelf;
    typedef MetaDisplay ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ResourceDisplayFunctions(Zilch::NoType none) : MetaDisplay(none) {}
    ZilchNoCopy(ResourceDisplayFunctions);
  };
  
  class Resource : public EventObject
  {
  public:
    typedef Resource ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetName();
    
    unsigned char mValue[80];
    
  protected:
    Resource(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(Resource);
  };
  
  // A resource that is stored in our serialization data format and is directly edited by the editor.
  class DataResource : public Resource
  {
  public:
    typedef DataResource ZilchSelf;
    typedef Resource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    DataResource(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(DataResource);
  };
  
  class ResourceSystem : public EventObject
  {
  public:
    typedef ResourceSystem ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Resource> GetResourceByName(const Zilch::String& p0);
    
    Zilch::HandleOf<Resource> GetResourceByTypeAndName(const Zilch::String& p0, const Zilch::String& p1);
    
    unsigned char mValue[296];
    
  protected:
    ResourceSystem(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(ResourceSystem);
  };
  
  class ResourcePackageDisplay : public MetaDisplay
  {
  public:
    typedef ResourcePackageDisplay ZilchSelf;
    typedef MetaDisplay ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ResourcePackageDisplay(Zilch::NoType none) : MetaDisplay(none) {}
    ZilchNoCopy(ResourcePackageDisplay);
  };
  
  class ResourcePackage : public ReferenceCountedThreadSafeId32EventObject
  {
  public:
    typedef ResourcePackage ZilchSelf;
    typedef ReferenceCountedThreadSafeId32EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[80];
    
  protected:
    ResourcePackage(Zilch::NoType none) : ReferenceCountedThreadSafeId32EventObject(none) {}
    ZilchNoCopy(ResourcePackage);
  };
  
  class ResourceLibrary : public SafeId32EventObject
  {
  public:
    typedef ResourceLibrary ZilchSelf;
    typedef SafeId32EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[768];
    
  protected:
    ResourceLibrary(Zilch::NoType none) : SafeId32EventObject(none) {}
    ZilchNoCopy(ResourceLibrary);
  };
  
  class CogPath : public Object
  {
  public:
    typedef CogPath ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetPath();
    
    void SetPath(const Zilch::String& value);
    
    Zilch::HandleOf<Cog> GetCog();
    
    void SetCog(Cog* value);
    
    Zilch::HandleOf<Cog> GetDirectCog();
    
    void SetDirectCog(Cog* value);
    
    Zilch::HandleOf<Cog> GetRelativeTo();
    
    void SetRelativeTo(Cog* value);
    
    bool GetErrorOnResolveToNull();
    
    void SetErrorOnResolveToNull(bool value);
    
    bool GetErrorOnPathCantCompute();
    
    void SetErrorOnPathCantCompute(bool value);
    
    bool GetErrorOnDirectLinkFail();
    
    void SetErrorOnDirectLinkFail(bool value);
    
    bool GetUpdateCogOnPathChange();
    
    void SetUpdateCogOnPathChange(bool value);
    
    bool GetUpdateCogOnInitialize();
    
    void SetUpdateCogOnInitialize(bool value);
    
    bool GetUpdatePathOnCogChange();
    
    void SetUpdatePathOnCogChange(bool value);
    
    // Returns true if the object changes, false otherwise.
    bool Refresh();
    
    // Returns true if the object changes, false otherwise.
    bool RefreshIfNull();
    
    // Creates a new copy of a cog path (since cog paths are reference counted and shared)
    Zilch::HandleOf<CogPath> Clone();
    
    // Resolves a cog from a path and a a relative object (or null for absolute paths) Returns null if it fails to find the cog, and will not throw an exception or assert.
    static Zilch::HandleOf<Cog> Resolve(Cog* startFrom, const Zilch::String& path);
    
    // Computes a path from one object to another (or an absolute path if specified - 'from' can be null) If computing the path fails, this will return an empty string.
    static Zilch::String ComputePath(Cog* from, Cog* to, const CogPathPreference& pref);
    
    CogPathPreference GetPathPreference0();
    
    void SetPathPreference0(const CogPathPreference& value);
    
    CogPathPreference GetPathPreference1();
    
    void SetPathPreference1(const CogPathPreference& value);
    
    CogPathPreference GetPathPreference2();
    
    void SetPathPreference2(const CogPathPreference& value);
    
    unsigned char mValue[56];
    
  protected:
    CogPath(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(CogPath);
  };
  
  class Engine : public EventObject
  {
  public:
    typedef Engine ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    void Terminate();
    
    Zilch::HandleOf<GameSession> CreateGameSession();
    
    Zilch::HandleOf<GameSession> CreateGameSessionFromArchetype(Archetype* p0);
    
    InputDevice GetCurrentInputDevice();
    
    void RebuildArchetypes(Archetype* p0);
    
    Zilch::HandleOf<GameSessionRange> GetGameSessions();
    
    void DebugBreak();
    
    void CrashEngine();
    
    unsigned char mValue[184];
    
  protected:
    Engine(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(Engine);
  };
  
  // The GameSession manages all spaces and data for a a game.
  class GameSession : public Cog
  {
  public:
    typedef GameSession ZilchSelf;
    typedef Cog ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Start the game.
    void Start();
    
    // Quit the game and exit the engine if not in editor.
    void Quit();
    
    // Request to quit sending out the GameRequestQuit event.
    void RequestQuit();
    
    // Create a space in the game. Use the archetype's name.
    Zilch::HandleOf<Space> CreateSpace(Archetype* archetype);
    
    // Create a space from an archetype with the given name.
    Zilch::HandleOf<Space> CreateNamedSpace(const Zilch::String& name, Archetype* archetype);
    
    // Pauses the game session which prevents updates to all spaces owned by this game.
    void Pause();
    
    // Find a named space.
    Zilch::HandleOf<Space> FindSpaceByName(const Zilch::String& name);
    
    Zilch::HandleOf<SpaceMapValueRange> FindAllSpacesByName(const Zilch::String& name);
    
    bool IsEditorMode();
    
    Zilch::HandleOf<SpaceMapValueRange> GetAllSpaces();
    
    bool GetFocused();
    
    Zilch::Real2 GetResolution();
    
    bool GetFullScreen();
    
    bool GetPaused();
    
    void SetPaused(bool value);
    
    unsigned char mValue[112];
    
  protected:
    GameSession(Zilch::NoType none) : Cog(none) {}
    ZilchNoCopy(GameSession);
  };
  
  class AnimationNode : public ReferenceCountedEventObject
  {
  public:
    typedef AnimationNode ZilchSelf;
    typedef ReferenceCountedEventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<AnimationNode> Clone();
    
    bool IsActive();
    
    void PrintNode(int tabs);
    
    // Collapses all children to a pose node on the next Update.
    void CollapseToPose();
    
    // A value between [0-1].
    void SetNormalizedTime(float normalizedTime);
    
    float GetNormalizedTime();
    
    bool GetCollapseToPoseOnFinish();
    
    void SetCollapseToPoseOnFinish(bool value);
    
    bool GetPaused();
    
    void SetPaused(bool value);
    
    float GetTime();
    
    void SetTime(float value);
    
    float GetDuration();
    
    void SetDuration(float value);
    
    float GetTimeScale();
    
    void SetTimeScale(float value);
    
    unsigned char mValue[72];
    
  protected:
    AnimationNode(Zilch::NoType none) : ReferenceCountedEventObject(none) {}
    ZilchNoCopy(AnimationNode);
  };
  
  class PoseNode : public AnimationNode
  {
  public:
    typedef PoseNode ZilchSelf;
    typedef AnimationNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PoseNode(Zilch::NoType none) : AnimationNode(none) {}
    ZilchNoCopy(PoseNode);
  };
  
  class BasicAnimation : public AnimationNode
  {
  public:
    typedef BasicAnimation ZilchSelf;
    typedef AnimationNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Animation> GetAnimation();
    
    void SetAnimation(Animation* value);
    
    AnimationPlayMode GetPlayMode();
    
    void SetPlayMode(const AnimationPlayMode& value);
    
    unsigned char mValue[160];
    
  protected:
    BasicAnimation(Zilch::NoType none) : AnimationNode(none) {}
    ZilchNoCopy(BasicAnimation);
  };
  
  class DualBlendDirectBlend : public AnimationNode
  {
  public:
    typedef DualBlendDirectBlend ZilchSelf;
    typedef AnimationNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<AnimationNode> GetFrom();
    
    void SetFrom(AnimationNode* value);
    
    Zilch::HandleOf<AnimationNode> GetTo();
    
    void SetTo(AnimationNode* value);
    
    unsigned char mValue[168];
    
  protected:
    DualBlendDirectBlend(Zilch::NoType none) : AnimationNode(none) {}
    ZilchNoCopy(DualBlendDirectBlend);
  };
  
  class DirectBlend : public DualBlendDirectBlend
  {
  public:
    typedef DirectBlend ZilchSelf;
    typedef DualBlendDirectBlend ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    DirectBlend(Zilch::NoType none) : DualBlendDirectBlend(none) {}
    ZilchNoCopy(DirectBlend);
  };
  
  class DualBlendCrossBlend : public AnimationNode
  {
  public:
    typedef DualBlendCrossBlend ZilchSelf;
    typedef AnimationNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<AnimationNode> GetFrom();
    
    void SetFrom(AnimationNode* value);
    
    Zilch::HandleOf<AnimationNode> GetTo();
    
    void SetTo(AnimationNode* value);
    
    unsigned char mValue[168];
    
  protected:
    DualBlendCrossBlend(Zilch::NoType none) : AnimationNode(none) {}
    ZilchNoCopy(DualBlendCrossBlend);
  };
  
  class CrossBlend : public DualBlendCrossBlend
  {
  public:
    typedef CrossBlend ZilchSelf;
    typedef DualBlendCrossBlend ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetTimeScaleFrom();
    
    void SetTimeScaleFrom(float value);
    
    float GetTimeScaleTo();
    
    void SetTimeScaleTo(float value);
    
    AnimationBlendType GetType();
    
    void SetType(const AnimationBlendType& value);
    
    AnimationBlendMode GetMode();
    
    void SetMode(const AnimationBlendMode& value);
    
    void SyncCadence();
    
    void SetNormalizedTimeScale(float p0, float p1, float p2);
    
    unsigned char mValue[16];
    
  protected:
    CrossBlend(Zilch::NoType none) : DualBlendCrossBlend(none) {}
    ZilchNoCopy(CrossBlend);
  };
  
  class DualBlendSelectiveNode : public AnimationNode
  {
  public:
    typedef DualBlendSelectiveNode ZilchSelf;
    typedef AnimationNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<AnimationNode> GetFrom();
    
    void SetFrom(AnimationNode* value);
    
    Zilch::HandleOf<AnimationNode> GetTo();
    
    void SetTo(AnimationNode* value);
    
    unsigned char mValue[168];
    
  protected:
    DualBlendSelectiveNode(Zilch::NoType none) : AnimationNode(none) {}
    ZilchNoCopy(DualBlendSelectiveNode);
  };
  
  class SelectiveNode : public DualBlendSelectiveNode
  {
  public:
    typedef SelectiveNode ZilchSelf;
    typedef DualBlendSelectiveNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Cog> GetRoot();
    
    void SetRoot(Cog* value);
    
    unsigned char mValue[48];
    
  protected:
    SelectiveNode(Zilch::NoType none) : DualBlendSelectiveNode(none) {}
    ZilchNoCopy(SelectiveNode);
  };
  
  class DualBlendChainNode : public AnimationNode
  {
  public:
    typedef DualBlendChainNode ZilchSelf;
    typedef AnimationNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<AnimationNode> GetFrom();
    
    void SetFrom(AnimationNode* value);
    
    Zilch::HandleOf<AnimationNode> GetTo();
    
    void SetTo(AnimationNode* value);
    
    unsigned char mValue[168];
    
  protected:
    DualBlendChainNode(Zilch::NoType none) : AnimationNode(none) {}
    ZilchNoCopy(DualBlendChainNode);
  };
  
  class ChainNode : public DualBlendChainNode
  {
  public:
    typedef ChainNode ZilchSelf;
    typedef DualBlendChainNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ChainNode(Zilch::NoType none) : DualBlendChainNode(none) {}
    ZilchNoCopy(ChainNode);
  };
  
  class ObjectTrack : public Zilch::ReferenceType
  {
  public:
    typedef ObjectTrack ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[88];
    
  protected:
    ObjectTrack(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ObjectTrack);
  };
  
  // The Animation resource class is used to store animations of game objects and their properties.
  class Animation : public Resource
  {
  public:
    typedef Animation ZilchSelf;
    typedef Resource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetDuration();
    
    unsigned char mValue[24];
    
  protected:
    Animation(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(Animation);
  };
  
  class Environment : public Object
  {
  public:
    typedef Environment ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetCommandLine();
    
    void SetCommandLine(const Zilch::String& value);
    
    Zilch::String GetParsedArgument(const Zilch::String& p0);
    
    Zilch::String GetEnvironmentalVariable(const Zilch::String& p0);
    
    unsigned char mValue[104];
    
  protected:
    Environment(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(Environment);
  };
  
  // Keyboard representing the physical keyboard.
  class Keyboard : public EventObject
  {
  public:
    typedef Keyboard ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Is any key in the 'Keys' enum down (not including 'Keys::Unknown', e.g. PrintScreen).
    bool IsAnyKeyDown();
    
    // Excluding Ctrl, Shift, and Alt - is any key in the 'Keys' enum down (not including 'Keys::Unknown', e.g. PrintScreen).
    bool IsAnyNonModifierDown();
    
    // Is the particular currently down.
    bool KeyIsDown(const Keys& key);
    
    // Is the particular currently up.
    bool KeyIsUp(const Keys& key);
    
    // Was the key pressed this frame.
    bool KeyIsPressed(const Keys& key);
    
    // Was the key released this frame.
    bool KeyIsReleased(const Keys& key);
    
    // Gets a string name of a particular key.
    Zilch::String GetKeyName(const Keys& key);
    
    // Validate that the key is a Keys::Enum that is not 'Unknown', or 'None', or an integer value that doesn't map to a known Keys::Enum value.
    bool Valid(const Keys& key);
    
    // Validate that the input string can be mapped back to an enum.
    bool Valid(const Zilch::String& key);
    
    // Counterpart to 'ToSymbol'. Converts a key's name or symbol to the key value. Returns Keys::Unknown if key is not found.
    Keys ToKey(const Zilch::String& key);
    
    // Convert key value to it's actual name or keyboard symbol, if it has one. Returns "Unknown" String if key is not found.
    Zilch::String ToSymbol(const Keys& key);
    
    // Convert a key name to it's keyboard symbol, if it has one. Returns input String if key is not found.
    Zilch::String ToSymbol(const Zilch::String& keyName);
    
    unsigned char mValue[184];
    
  protected:
    Keyboard(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(Keyboard);
  };
  
  class TimeSystem : public System
  {
  public:
    typedef TimeSystem ZilchSelf;
    typedef System ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[160];
    
  protected:
    TimeSystem(Zilch::NoType none) : System(none) {}
    ZilchNoCopy(TimeSystem);
  };
  
  class OsShell : public System
  {
  public:
    typedef OsShell ZilchSelf;
    typedef System ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    long long GetWindowCount();
    
    Zilch::HandleOf<OsWindow> GetWindow(long long __0);
    
    void SetMouseCursor(const Cursor& value);
    
    void DumpMemoryDebuggerStats();
    
    unsigned char mValue[240];
    
  protected:
    OsShell(Zilch::NoType none) : System(none) {}
    ZilchNoCopy(OsShell);
  };
  
  class OsWindow : public ThreadSafeId32EventObject
  {
  public:
    typedef OsWindow ZilchSelf;
    typedef ThreadSafeId32EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Integer2 GetMonitorClientPosition();
    
    void SetMonitorClientPosition(const Zilch::Integer2& value);
    
    void SetMinClientSize(const Zilch::Integer2& value);
    
    Zilch::Integer2 GetClientSize();
    
    void SetClientSize(const Zilch::Integer2& value);
    
    Zilch::HandleOf<OsWindow> GetParent();
    
    bool GetVisible();
    
    void SetVisible(bool value);
    
    void SetTitle(const Zilch::String& value);
    
    WindowState GetState();
    
    void SetState(const WindowState& value);
    
    bool HasFocus();
    
    void SetMouseCapture(bool value);
    
    bool GetMouseTrap();
    
    void SetMouseTrap(bool value);
    
    Zilch::Integer2 MonitorToClient(const Zilch::Integer2& __0);
    
    Zilch::Integer2 ClientToMonitor(const Zilch::Integer2& __0);
    
    unsigned char mValue[312];
    
  protected:
    OsWindow(Zilch::NoType none) : ThreadSafeId32EventObject(none) {}
    ZilchNoCopy(OsWindow);
  };
  
  // Mouse object for Display System.
  class Mouse : public EventObject
  {
  public:
    typedef Mouse ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Cursor GetCursor();
    
    void SetCursor(const Cursor& value);
    
    // Is a mouse button currently down?
    bool IsButtonDown(const MouseButtons& button);
    
    Zilch::Real2 GetClientPosition();
    
    Zilch::Real2 GetCursorMovement();
    
    bool GetTrapped();
    
    void SetTrapped(bool value);
    
    // Toggles if the mouse is currently trapped.
    void ToggleTrapped();
    
    Zilch::Real2 GetRawMovement();
    
    void SetRawMovement(const Zilch::Real2& value);
    
    unsigned char mValue[56];
    
  protected:
    Mouse(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(Mouse);
  };
  
  class Factory : public System
  {
  public:
    typedef Factory ZilchSelf;
    typedef System ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    Factory(Zilch::NoType none) : System(none) {}
    ZilchNoCopy(Factory);
  };
  
  class Operation : public SafeId32EventObject
  {
  public:
    typedef Operation ZilchSelf;
    typedef SafeId32EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Operation> GetParent();
    
    Zilch::String GetName();
    
    void SetName(const Zilch::String& value);
    
    Zilch::String GetInvalidReason();
    
    void SetInvalidReason(const Zilch::String& value);
    
    Zilch::HandleOf<OperationListRange> GetChildren();
    
    Zilch::HandleOf<Operation> FindRoot();
    
    unsigned char mValue[48];
    
  protected:
    Operation(Zilch::NoType none) : SafeId32EventObject(none) {}
    ZilchNoCopy(Operation);
  };
  
  class OperationQueue : public ReferenceCountedEventObject
  {
  public:
    typedef OperationQueue ZilchSelf;
    typedef ReferenceCountedEventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    void Undo();
    
    bool Undo(Operation* p0);
    
    void Redo();
    
    bool Redo(Operation* p0);
    
    void ClearUndo();
    
    void ClearRedo();
    
    void ClearAll();
    
    Zilch::String GetActiveBatchName();
    
    void SetActiveBatchName(const Zilch::String& value);
    
    Zilch::HandleOf<OperationListRange> GetCommands();
    
    Zilch::HandleOf<OperationListRange> GetRedoCommands();
    
    void BeginBatch(const Zilch::String& p0);
    
    void BeginBatch();
    
    void EndBatch();
    
    void SaveObjectState(Cog* p0);
    
    void ObjectCreated(Cog* p0);
    
    void DestroyObject(Cog* p0);
    
    static void StartListeningForSideEffects();
    
    static bool IsListeningForSideEffects();
    
    static void RegisterSideEffect(const Zilch::Handle& p0, const Zilch::String& p1, const Zilch::Any& p2);
    
    void QueueRegisteredSideEffects();
    
    static void PopSubPropertyContext();
    
    void MarkPropertyAsModified(Component* p0, const Zilch::String& p1);
    
    unsigned char mValue[136];
    
  protected:
    OperationQueue(Zilch::NoType none) : ReferenceCountedEventObject(none) {}
    ZilchNoCopy(OperationQueue);
  };
  
  class OperationBatch : public Operation
  {
  public:
    typedef OperationBatch ZilchSelf;
    typedef Operation ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[48];
    
  protected:
    OperationBatch(Zilch::NoType none) : Operation(none) {}
    ZilchNoCopy(OperationBatch);
  };
  
  class PropertyOperation : public Operation
  {
  public:
    typedef PropertyOperation ZilchSelf;
    typedef Operation ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Any GetValueBefore();
    
    Zilch::Any GetValueAfter();
    
    unsigned char mValue[320];
    
  protected:
    PropertyOperation(Zilch::NoType none) : Operation(none) {}
    ZilchNoCopy(PropertyOperation);
  };
  
  class Tracker : public System
  {
  public:
    typedef Tracker ZilchSelf;
    typedef System ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[104];
    
  protected:
    Tracker(Zilch::NoType none) : System(none) {}
    ZilchNoCopy(Tracker);
  };
  
  // A spline built from control points. Bakes out the curve using an error term (distance from actual spline). Provides an interface to sample the curve at a given arc-length distance in order to provide constant speed interpolation.
  class Spline : public ReferenceCountedEventObject
  {
  public:
    typedef Spline ZilchSelf;
    typedef ReferenceCountedEventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Create a new instance of a spline.
    static Zilch::HandleOf<Spline> Create();
    
    // Create a new copy of this spline.
    Zilch::HandleOf<Spline> Clone();
    
    SplineType GetSplineType();
    
    void SetSplineType(const SplineType& value);
    
    bool GetClosed();
    
    void SetClosed(bool value);
    
    float GetError();
    
    void SetError(float value);
    
    float GetTotalDistance();
    
    // Samples the curve at a given arc-length distance.
    SplineSampleData SampleDistance(float distance);
    
    // Samples the curve with a time in the range of [0, 1].
    SplineSampleData SampleNormalized(float time);
    
    // Rebuild the baked points from the control points if they have changed. Should not need to be manually called unless the user wants to control the timing when the points are baked.
    void RebuildIfModified();
    
    // Forcibly rebuild the baked points from the control points.
    void ForceRebuild();
    
    // Draw the baked points of the curve with the provided color.
    void DebugDraw(const Zilch::Real4& color);
    
    Zilch::HandleOf<SplineControlPoints> GetControlPoints();
    
    Zilch::HandleOf<SplineBakedPoints> GetBakedPoints();
    
    unsigned char mValue[160];
    
  protected:
    Spline(Zilch::NoType none) : ReferenceCountedEventObject(none) {}
    ZilchNoCopy(Spline);
  };
  
  // Returned data from sampling a spline at a given arc-length distance.
  class SplineSampleData : public Zilch::ValueType
  {
  public:
    typedef SplineSampleData ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetPoint();
    
    void SetPoint(const Zilch::Real3& value);
    
    Zilch::Real3 GetTangent();
    
    void SetTangent(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPoint();
    
    void SetWorldPoint(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldTangent();
    
    void SetWorldTangent(const Zilch::Real3& value);
    
    unsigned char mValue[24];
    SplineSampleData();
  };
  
  // Read-only baked points for the Spline class. Will auto-recompute if the control points have changed.
  class SplineBakedPoints : public SafeId32Object
  {
  public:
    typedef SplineBakedPoints ZilchSelf;
    typedef SafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    SplineBakedPoint Get(int index);
    
    int GetCount();
    
    unsigned char mValue[8];
    
  protected:
    SplineBakedPoints(Zilch::NoType none) : SafeId32Object(none) {}
    ZilchNoCopy(SplineBakedPoints);
  };
  
  // Data for a spline's baked point.
  class SplineBakedPoint : public Zilch::ValueType
  {
  public:
    typedef SplineBakedPoint ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetPosition();
    
    void SetPosition(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPosition();
    
    void SetWorldPosition(const Zilch::Real3& value);
    
    unsigned char mValue[12];
    SplineBakedPoint();
    
    SplineBakedPoint(const Zilch::Real3& __0);
  };
  
  // Control points for the Spline class. Modifying this will cause the spline to be marked as modified to rebuild the baked curve when needed.
  class SplineControlPoints : public SafeId32Object
  {
  public:
    typedef SplineControlPoints ZilchSelf;
    typedef SafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Get the control point at the given index.
    SplineControlPoint Get(int index);
    
    // Sets the control point at the given index.
    void Set(int index, const SplineControlPoint& value);
    
    // Add a new point to the end of the array.
    void Add(const SplineControlPoint& controlPoint);
    
    // Clear all control points.
    void Clear();
    
    int GetCount();
    
    unsigned char mValue[40];
    
  protected:
    SplineControlPoints(Zilch::NoType none) : SafeId32Object(none) {}
    ZilchNoCopy(SplineControlPoints);
  };
  
  // Data for a spline's control point.
  class SplineControlPoint : public Zilch::ValueType
  {
  public:
    typedef SplineControlPoint ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetPosition();
    
    void SetPosition(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPosition();
    
    void SetWorldPosition(const Zilch::Real3& value);
    
    unsigned char mValue[12];
    SplineControlPoint();
    
    SplineControlPoint(const Zilch::Real3& __0);
  };
  
  // A process class that asynchronously reads from standard output and standard error and sends out partial read events. Additionally, the full buffer can be stored for each stream. This makes it possible to read the output of a process in a single-threaded context without having to block on output.
  class AsyncProcess : public ReferenceCountedEventObject
  {
  public:
    typedef AsyncProcess ZilchSelf;
    typedef ReferenceCountedEventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Construct a new process. This does not start the process.
    static Zilch::HandleOf<AsyncProcess> Create();
    
    // Begins the execution of another process using the given parameters. Throws an exception if the process cannot be started.
    bool Start(const Zilch::ProcessStartInfo& startInfo);
    
    // Returns true if the process is still running, false otherwise.
    bool IsRunning();
    
    // Waits for a process to close, this will block until the process closes.
    int WaitForClose();
    
    // Waits for a process to close up to a given number of milliseconds. This can take up to 3 * milliseconds due to waiting for the output streams to close.
    int WaitForClose(int milliseconds);
    
    // Closes the wrapper around the process, does not close the process launched.
    void Close();
    
    // Attempts to manually shut down the process. This is not safe for the other process or what it's handling.
    void Terminate();
    
    bool GetStoreStandardOutputData();
    
    void SetStoreStandardOutputData(bool value);
    
    bool GetStoreStandardErrorData();
    
    void SetStoreStandardErrorData(bool value);
    
    Zilch::FileStreamClass GetStandardInput();
    
    void SetStandardInput(const Zilch::FileStreamClass& value);
    
    Zilch::String GetStandardOutput();
    
    Zilch::String GetStandardError();
    
    unsigned char mValue[528];
    
  protected:
    AsyncProcess(Zilch::NoType none) : ReferenceCountedEventObject(none) {}
    ZilchNoCopy(AsyncProcess);
  };
  
  // Base action class.
  class Action : public ReferenceCountedEventObject
  {
  public:
    typedef Action ZilchSelf;
    typedef ReferenceCountedEventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Cancel the action and all child actions.
    void Cancel();
    
    bool GetCompleted();
    
    bool GetActive();
    
    bool GetStarted();
    
    unsigned char mValue[24];
    
  protected:
    Action(Zilch::NoType none) : ReferenceCountedEventObject(none) {}
    ZilchNoCopy(Action);
  };
  
  // Base class for ActionGroup and ActionSequence. Stores a set of sub-actions.
  class ActionSet : public Action
  {
  public:
    typedef ActionSet ZilchSelf;
    typedef Action ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ActionSet(Zilch::NoType none) : Action(none) {}
    ZilchNoCopy(ActionSet);
  };
  
  // The collection of actions queued up on an object.
  class Actions : public ActionSet
  {
  public:
    typedef Actions ZilchSelf;
    typedef ActionSet ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[64];
    
  protected:
    Actions(Zilch::NoType none) : ActionSet(none) {}
    ZilchNoCopy(Actions);
  };
  
  // A group of actions that run in parallel with each other.
  class ActionGroup : public ActionSet
  {
  public:
    typedef ActionGroup ZilchSelf;
    typedef ActionSet ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    ActionGroup(Zilch::NoType none) : ActionSet(none) {}
    ZilchNoCopy(ActionGroup);
  };
  
  // A group of actions that run in serial. The first child action will block the second from running and so on.
  class ActionSequence : public ActionSet
  {
  public:
    typedef ActionSequence ZilchSelf;
    typedef ActionSet ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    ActionSequence(Zilch::NoType none) : ActionSet(none) {}
    ZilchNoCopy(ActionSequence);
  };
  
  class ActionSpace : public Component
  {
  public:
    typedef ActionSpace ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[32];
    
  protected:
    ActionSpace(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ActionSpace);
  };
  
  // Delay action. Delays by time in seconds.
  class ActionDelay : public Action
  {
  public:
    typedef ActionDelay ZilchSelf;
    typedef Action ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetTimeLeft();
    
    void SetTimeLeft(float value);
    
    unsigned char mValue[8];
    
  protected:
    ActionDelay(Zilch::NoType none) : Action(none) {}
    ZilchNoCopy(ActionDelay);
  };
  
  class CogInitializer : public SafeId32EventObject
  {
  public:
    typedef CogInitializer ZilchSelf;
    typedef SafeId32EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Space> GetSpace();
    
    Zilch::HandleOf<Cog> GetParent();
    
    Zilch::HandleOf<GameSession> GetGameSession();
    
    void DispatchEvent(const Zilch::String& p0, Event* p1);
    
    unsigned char mValue[72];
    
  protected:
    CogInitializer(Zilch::NoType none) : SafeId32EventObject(none) {}
    ZilchNoCopy(CogInitializer);
  };
  
  class Thickness : public Zilch::ValueType
  {
  public:
    typedef Thickness ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static Thickness All(float p0);
    
    float GetLeft();
    
    void SetLeft(float value);
    
    float GetTop();
    
    void SetTop(float value);
    
    float GetRight();
    
    void SetRight(float value);
    
    float GetBottom();
    
    void SetBottom(float value);
    
    static Thickness GetZero();
    
    Zilch::Real2 Size();
    
    Zilch::Real2 TopLeft();
    
    unsigned char mValue[16];
    Thickness();
    
    Thickness(float __0, float __1, float __2, float __3);
    
    Thickness(const Zilch::Real4& __0);
    
    Thickness(float __0, float __1);
    
    Thickness(const Zilch::Real2& __0);
  };
  
  class Rectangle : public Zilch::ValueType
  {
  public:
    typedef Rectangle ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real2 GetMin();
    
    void SetMin(const Zilch::Real2& value);
    
    Zilch::Real2 GetMax();
    
    void SetMax(const Zilch::Real2& value);
    
    Zilch::Real2 GetSize();
    
    void SetSize(const Location& __0, const Zilch::Real2& __1);
    
    void ResizeToPoint(const Location& p0, float p1);
    
    void ResizeToPoint(const Location& p0, const Zilch::Real2& p1);
    
    void ResizeToPoint(const Location& p0, const Zilch::Real2& p1, const Zilch::Real2& p2);
    
    void Expand(const Zilch::Real2& p0);
    
    void Transform(const Zilch::Real2x2& p0);
    
    void Transform(const Zilch::Real3x3& p0);
    
    void Transform(const Zilch::Real4x4& p0);
    
    Rectangle Transformed(const Zilch::Real2x2& p0);
    
    Rectangle Transformed(const Zilch::Real3x3& p0);
    
    Rectangle Transformed(const Zilch::Real4x4& p0);
    
    Zilch::Real2 GetTopLeft();
    
    void SetTopLeft(const Zilch::Real2& value);
    
    Zilch::Real2 GetTopRight();
    
    void SetTopRight(const Zilch::Real2& value);
    
    Zilch::Real2 GetBottomLeft();
    
    void SetBottomLeft(const Zilch::Real2& value);
    
    Zilch::Real2 GetBottomRight();
    
    void SetBottomRight(const Zilch::Real2& value);
    
    Zilch::Real2 GetCenter();
    
    void SetCenter(const Zilch::Real2& value);
    
    float GetLeft();
    
    void SetLeft(float value);
    
    float GetRight();
    
    void SetRight(float value);
    
    float GetTop();
    
    void SetTop(float value);
    
    float GetBottom();
    
    void SetBottom(float value);
    
    bool Contains(const Zilch::Real2& p0);
    
    bool Contains(const Rectangle& p0);
    
    bool Overlaps(const Rectangle& p0);
    
    bool Overlap(const Rectangle& p0);
    
    void RemoveThickness(const Thickness& p0);
    
    float GetCardinalLocation(const Location& p0);
    
    void SetLocation(const Location& p0, float p1);
    
    Zilch::Real2 GetLocation(const Location& p0);
    
    void SetLocation(const Location& p0, const Zilch::Real2& p1);
    
    unsigned char mValue[16];
    Rectangle();
  };
  
  class LinkId : public Component
  {
  public:
    typedef LinkId ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    LinkId(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(LinkId);
  };
  
  class Named : public Component
  {
  public:
    typedef Named ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    Named(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Named);
  };
  
  class EditorFlags : public Component
  {
  public:
    typedef EditorFlags ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    EditorFlags(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(EditorFlags);
  };
  
  class SpaceObjects : public Component
  {
  public:
    typedef SpaceObjects ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    SpaceObjects(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SpaceObjects);
  };
  
  // An archetype is a resource containing the serialized data definition of an object. The archetype stores a binary cache of the serialization data and the source file for debugging and for archetype updating.
  class Archetype : public Resource
  {
  public:
    typedef Archetype ZilchSelf;
    typedef Resource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Zilch::BoundType> GetStoredType();
    
    void SetStoredType(Zilch::BoundType* value);
    
    unsigned char mValue[64];
    
  protected:
    Archetype(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(Archetype);
  };
  
  class Archetyped : public Component
  {
  public:
    typedef Archetyped ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    Archetyped(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Archetyped);
  };
  
  class ArchetypeInstance : public Zilch::ReferenceType
  {
  public:
    typedef ArchetypeInstance ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    ArchetypeInstance(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ArchetypeInstance);
  };
  
  // A directed edge between a cog and an object link.
  class ObjectLinkEdge : public Zilch::ReferenceType
  {
  public:
    typedef ObjectLinkEdge ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Cog> GetSelfCog();
    
    Zilch::HandleOf<Cog> GetOtherCog();
    
    Zilch::HandleOf<ObjectLink> GetObjectLink();
    
    unsigned char mValue[128];
    
  protected:
    ObjectLinkEdge(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ObjectLinkEdge);
  };
  
  // A level is resource that stores a set of objects that can be loaded into a space. Level is different from most resource types in that it does not really store the level data on the object but always loads the data from the file system.
  class Level : public Resource
  {
  public:
    typedef Level ZilchSelf;
    typedef Resource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    Level(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(Level);
  };
  
  class DebugDraw : public Zilch::ReferenceType
  {
  public:
    typedef DebugDraw ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static void Add(const DebugArc& __0);
    
    static void Add(Space* __0, const DebugArc& __1);
    
    static void Add(const DebugBox& __0);
    
    static void Add(Space* __0, const DebugBox& __1);
    
    static void Add(const DebugCapsule& __0);
    
    static void Add(Space* __0, const DebugCapsule& __1);
    
    static void Add(const DebugCircle& __0);
    
    static void Add(Space* __0, const DebugCircle& __1);
    
    static void Add(const DebugCone& __0);
    
    static void Add(Space* __0, const DebugCone& __1);
    
    static void Add(const DebugCylinder& __0);
    
    static void Add(Space* __0, const DebugCylinder& __1);
    
    static void Add(const DebugFrustum& __0);
    
    static void Add(Space* __0, const DebugFrustum& __1);
    
    static void Add(const DebugLine& __0);
    
    static void Add(Space* __0, const DebugLine& __1);
    
    static void Add(const DebugLineCross& __0);
    
    static void Add(Space* __0, const DebugLineCross& __1);
    
    static void Add(const DebugObb& __0);
    
    static void Add(Space* __0, const DebugObb& __1);
    
    static void Add(const DebugSphere& __0);
    
    static void Add(Space* __0, const DebugSphere& __1);
    
    static void Add(DebugText* __0);
    
    static void Add(Space* __0, DebugText* __1);
    
    static void Add(const DebugTriangle& __0);
    
    static void Add(Space* __0, const DebugTriangle& __1);
    
    unsigned char mValue[1];
    
  protected:
    DebugDraw(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(DebugDraw);
  };
  
  // Resource that can be edited as text and is searchable.
  class DocumentResource : public Resource
  {
  public:
    typedef DocumentResource ZilchSelf;
    typedef Resource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    DocumentResource(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(DocumentResource);
  };
  
  // A Text resource is a generic resource for simple text data for game logic.
  class TextBlock : public DocumentResource
  {
  public:
    typedef TextBlock ZilchSelf;
    typedef DocumentResource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetText();
    
    unsigned char mValue[8];
    
  protected:
    TextBlock(Zilch::NoType none) : DocumentResource(none) {}
    ZilchNoCopy(TextBlock);
  };
  
  // Main configuration component.
  class MainConfig : public Component
  {
  public:
    typedef MainConfig ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetBuildDate();
    
    Zilch::String GetBuildVersion();
    
    unsigned char mValue[24];
    
  protected:
    MainConfig(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(MainConfig);
  };
  
  // Configuration for the editor.
  class EditorConfig : public Component
  {
  public:
    typedef EditorConfig ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetBugReportUsername();
    
    void SetBugReportUsername(const Zilch::String& value);
    
    unsigned char mValue[24];
    
  protected:
    EditorConfig(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(EditorConfig);
  };
  
  // Settings for how the application window should be sized when launched.
  class WindowLaunchSettings : public Component
  {
  public:
    typedef WindowLaunchSettings ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetLaunchFullscreen();
    
    void SetLaunchFullscreen(bool value);
    
    Zilch::Integer2 GetWindowedResolution();
    
    void SetWindowedResolution(const Zilch::Integer2& value);
    
    unsigned char mValue[16];
    
  protected:
    WindowLaunchSettings(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(WindowLaunchSettings);
  };
  
  // Settings for how the frame rate of the engine should be controlled.
  class FrameRateSettings : public Component
  {
  public:
    typedef FrameRateSettings ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetVerticalSync();
    
    void SetVerticalSync(bool value);
    
    bool GetLimitFrameRate();
    
    void SetLimitFrameRate(bool value);
    
    int GetFrameRate();
    
    void SetFrameRate(int value);
    
    unsigned char mValue[8];
    
  protected:
    FrameRateSettings(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(FrameRateSettings);
  };
  
  class DebugSettings : public Component
  {
  public:
    typedef DebugSettings ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetMaxDebugObjects();
    
    void SetMaxDebugObjects(int value);
    
    unsigned char mValue[8];
    
  protected:
    DebugSettings(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(DebugSettings);
  };
  
  class ExportSettings : public Component
  {
  public:
    typedef ExportSettings ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    ExportSettings(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ExportSettings);
  };
  
  // Configuration component for content system. Used to find content paths and what default libraries to load.
  class ContentConfig : public Component
  {
  public:
    typedef ContentConfig ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[56];
    
  protected:
    ContentConfig(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ContentConfig);
  };
  
  // Configuration component that Contains user info.
  class UserConfig : public Component
  {
  public:
    typedef UserConfig ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetUserName();
    
    void SetUserName(const Zilch::String& value);
    
    Zilch::String GetUserEmail();
    
    void SetUserEmail(const Zilch::String& value);
    
    unsigned char mValue[40];
    
  protected:
    UserConfig(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(UserConfig);
  };
  
  // Configuration component that Contains developer settings. Used to indicate a user is a developer.
  class DeveloperConfig : public Component
  {
  public:
    typedef DeveloperConfig ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetDoubleEscapeQuit();
    
    void SetDoubleEscapeQuit(bool value);
    
    bool GetProxyObjectsInPreviews();
    
    void SetProxyObjectsInPreviews(bool value);
    
    bool GetCanModifyReadOnlyResources();
    
    void SetCanModifyReadOnlyResources(bool value);
    
    unsigned char mValue[48];
    
  protected:
    DeveloperConfig(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(DeveloperConfig);
  };
  
  class ZilchPluginConfig : public Component
  {
  public:
    typedef ZilchPluginConfig ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetAttemptedIdeToolsInstall();
    
    void SetAttemptedIdeToolsInstall(bool value);
    
    unsigned char mValue[8];
    
  protected:
    ZilchPluginConfig(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ZilchPluginConfig);
  };
  
  class TextEditorConfig : public Component
  {
  public:
    typedef TextEditorConfig ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    TabWidth GetTabWidth();
    
    void SetTabWidth(const TabWidth& value);
    
    bool GetShowWhiteSpace();
    
    void SetShowWhiteSpace(bool value);
    
    bool GetLineNumbers();
    
    void SetLineNumbers(bool value);
    
    bool GetCodeFolding();
    
    void SetCodeFolding(bool value);
    
    bool GetTextMatchHighlighting();
    
    void SetTextMatchHighlighting(bool value);
    
    bool GetHighlightPartialTextMatch();
    
    void SetHighlightPartialTextMatch(bool value);
    
    bool GetConfidentAutoCompleteOnSymbols();
    
    void SetConfidentAutoCompleteOnSymbols(bool value);
    
    bool GetLocalWordCompletion();
    
    void SetLocalWordCompletion(bool value);
    
    bool GetKeywordAndTypeCompletion();
    
    void SetKeywordAndTypeCompletion(bool value);
    
    bool GetAutoCompleteOnEnter();
    
    void SetAutoCompleteOnEnter(bool value);
    
    Zilch::String GetColorScheme();
    
    void SetColorScheme(const Zilch::String& value);
    
    int GetFontSize();
    
    void SetFontSize(int value);
    
    unsigned char mValue[32];
    
  protected:
    TextEditorConfig(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(TextEditorConfig);
  };
  
  class RecentProjects : public Component
  {
  public:
    typedef RecentProjects ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[48];
    
  protected:
    RecentProjects(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(RecentProjects);
  };
  
  class EditorSettings : public Component
  {
  public:
    typedef EditorSettings ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetViewCube();
    
    void SetViewCube(bool value);
    
    float GetViewCubeSize();
    
    void SetViewCubeSize(float value);
    
    bool GetAutoUpdateContentChanges();
    
    void SetAutoUpdateContentChanges(bool value);
    
    unsigned char mValue[16];
    
  protected:
    EditorSettings(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(EditorSettings);
  };
  
  class LauncherConfig : public Component
  {
  public:
    typedef LauncherConfig ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetAutoRunMode();
    
    void SetAutoRunMode(int value);
    
    unsigned char mValue[56];
    
  protected:
    LauncherConfig(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(LauncherConfig);
  };
  
  class LauncherLegacySettings : public Component
  {
  public:
    typedef LauncherLegacySettings ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetDisplayLegacyBuilds();
    
    void SetDisplayLegacyBuilds(bool value);
    
    unsigned char mValue[8];
    
  protected:
    LauncherLegacySettings(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(LauncherLegacySettings);
  };
  
  // A spline that builds its control points from all child cogs that have Transforms.
  class HierarchySpline : public Component
  {
  public:
    typedef HierarchySpline ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Spline> GetSpline();
    
    bool GetClosed();
    
    void SetClosed(bool value);
    
    SplineType GetSplineType();
    
    void SetSplineType(const SplineType& value);
    
    float GetError();
    
    void SetError(float value);
    
    bool GetDebugDrawSpline();
    
    void SetDebugDrawSpline(bool value);
    
    Zilch::Real4 GetSplineColor();
    
    void SetSplineColor(const Zilch::Real4& value);
    
    // Rebuild the baked points if there are any changes to the spline's control points. This should never need to be manually called.
    void RebuildIfModified();
    
    // Forcibly rebuilds the baked points for the spline.
    void ForceRebuild();
    
    unsigned char mValue[80];
    
  protected:
    HierarchySpline(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(HierarchySpline);
  };
  
  // Object cache is use to store objects at runtime.
  class ObjectStore : public Zilch::ReferenceType
  {
  public:
    typedef ObjectStore ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetEntryCount();
    
    bool IsStored(const Zilch::String& __0);
    
    // Is there an entry record for the object in the store?
    bool IsEntryStored(const Zilch::String& name);
    
    // Get the ObjectStore entry at the specified index.
    Zilch::String GetEntryAt(int index);
    
    // Store an object.
    StoreResult Store(const Zilch::String& name, Cog* object);
    
    // Restore an object to the space.
    Zilch::HandleOf<Cog> Restore(const Zilch::String& name, Space* space);
    
    // Restore an object if it is not stored use the archetype to create it.
    Zilch::HandleOf<Cog> RestoreOrArchetype(const Zilch::String& name, Archetype* archetype, Space* space);
    
    // Attempts to remove an object from the store.
    void Erase(const Zilch::String& name);
    
    // Clear the store.
    void ClearStore();
    
    // Returns the directory path to the object store.
    Zilch::String GetDirectoryPath();
    
    unsigned char mValue[48];
    
  protected:
    ObjectStore(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ObjectStore);
  };
  
  // A table of resources (or strings) that can be indexed, searched by name, or sampled randomly. The table can be randomly sampled to return an entry into the table.
  class ResourceTable : public DataResource
  {
  public:
    typedef ResourceTable ZilchSelf;
    typedef DataResource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Creates a ResourceTable for run-time modifications.
    static Zilch::HandleOf<ResourceTable> CreateRuntime();
    
    // Creates a clone of this table for run-time modifications.
    Zilch::HandleOf<ResourceTable> RuntimeClone();
    
    // Add the given entry. If another entry with the same name exists then an error is thrown.
    void AddOrError(ResourceTableEntry* entry);
    
    // Add the given entry. If another entry with the same name exists then no operation is performed.
    bool AddOrIgnore(ResourceTableEntry* entry);
    
    // Add the given entry. If another entry with the same name exists then it is overwritten.
    bool AddOrOverwrite(ResourceTableEntry* entry);
    
    // Returns the entry associated with the given key. If no entry matches the key then the provided default is returned.
    Zilch::HandleOf<ResourceTableEntry> GetOrDefault(const Zilch::String& key, ResourceTableEntry* defaultValue);
    
    // Returns the entry associated with the given key. If no entry matches the key then an exception is thrown.
    Zilch::HandleOf<ResourceTableEntry> GetOrError(const Zilch::String& key);
    
    // Returns the entry associated with the given key. If no entry matches then null is returned.
    Zilch::HandleOf<ResourceTableEntry> GetOrNull(const Zilch::String& key);
    
    // Access an item at the given index.
    Zilch::HandleOf<ResourceTableEntry> Get(int index);
    
    // Access an item at the given index.
    void Set(int index, ResourceTableEntry* entry);
    
    // Hash-Set interface. Gets the item with the same name as the entry.
    Zilch::HandleOf<ResourceTableEntry> Get(ResourceTableEntry* entry);
    
    // Hash-Set interface. Sets the item with the same name as the entry.
    void Set(ResourceTableEntry* entry);
    
    // Hash-Map interface. Gets via the provided key.
    Zilch::HandleOf<ResourceTableEntry> Get(const Zilch::String& key);
    
    // Hash-Map interface. Sets via the provided key.
    void Set(const Zilch::String& key, ResourceTableEntry* entry);
    
    // Removes the item at the given index.
    void RemoveAt(int index);
    
    // Removes the entry associated with the given key. If no entry matches an exception is thrown.
    void RemoveOrError(const Zilch::String& key);
    
    // Removes the entry associated with the given key. If no entry matches then no operation is performed.
    bool RemoveOrIgnore(const Zilch::String& key);
    
    // Returns if the given key is contained.
    bool Contains(const Zilch::String& key);
    
    int GetCount();
    
    Zilch::HandleOf<ResourceTableEntryRange> GetAll();
    
    // Clear all items in the table.
    void Clear();
    
    Zilch::String GetResourceType();
    
    void SetResourceType(const Zilch::String& value);
    
    float GetMaxWeight();
    
    void SetMaxWeight(float value);
    
    // Samples the table to return a random index into the table. Takes two (different) random floats from [0,1) in order to sample.
    int SampleIndex(float random1, float random2);
    
    // Samples the table to return a random entry. Takes two (different) random floats from [0,1) in order to sample. Returns an empty string if the table is empty.
    Zilch::HandleOf<ResourceTableEntry> Sample(float random1, float random2);
    
    // Force rebuild the weighted probability table.
    void ForceRebuild();
    
    unsigned char mValue[128];
    
  protected:
    ResourceTable(Zilch::NoType none) : DataResource(none) {}
    ZilchNoCopy(ResourceTable);
  };
  
  // An entry from a resource table. The resource type of this entry must match the resource type of the table to add/set. If the value is set via string then the type will be implicitly set to string, otherwise the type must be set via the Resource property.
  class ResourceTableEntry : public Zilch::ReferenceType
  {
  public:
    typedef ResourceTableEntry ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetName();
    
    void SetName(const Zilch::String& value);
    
    Zilch::String GetValue();
    
    void SetValue(const Zilch::String& value);
    
    float GetWeight();
    
    void SetWeight(float value);
    
    Zilch::HandleOf<Resource> GetResource();
    
    void SetResource(Resource* value);
    
    Zilch::String GetResourceType();
    
    void SetResourceType(const Zilch::String& value);
    
    // Creates a new entry with the same values.
    Zilch::HandleOf<ResourceTableEntry> Clone();
    
    unsigned char mValue[32];
    
  protected:
    ResourceTableEntry(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ResourceTableEntry);
  };
  
  class SampleCurve : public DataResource
  {
  public:
    typedef SampleCurve ZilchSelf;
    typedef DataResource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float Sample(float p0);
    
    float DebugSample(float p0, const Zilch::String& p1, const Zilch::Real4& p2);
    
    float GetWidthMax();
    
    float GetHeightMax();
    
    unsigned char mValue[184];
    
  protected:
    SampleCurve(Zilch::NoType none) : DataResource(none) {}
    ZilchNoCopy(SampleCurve);
  };
  
  class HeightPatch : public Zilch::ReferenceType
  {
  public:
    typedef HeightPatch ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[4112];
    
  protected:
    HeightPatch(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(HeightPatch);
  };
  
  // HeightMapSource stores data needed for height maps. Data is stored on PatchData which are indexed by x,y. Each PatchData stores layers that represent different data. The primary layer is height and paint values but additional layers can be added to store data like foliage or custom game data.
  class HeightMapSource : public Resource
  {
  public:
    typedef HeightMapSource ZilchSelf;
    typedef Resource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[48];
    
  protected:
    HeightMapSource(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(HeightMapSource);
  };
  
  class SceneGraphSource : public Zilch::ReferenceType
  {
  public:
    typedef SceneGraphSource ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[88];
    
  protected:
    SceneGraphSource(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SceneGraphSource);
  };
  
  // Specifies a range of colors that are interpolated when sampled.
  class ColorGradient : public DataResource
  {
  public:
    typedef ColorGradient ZilchSelf;
    typedef DataResource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Sample the curve at the given t.
    Zilch::Real4 Sample(float t);
    
    unsigned char mValue[32];
    
  protected:
    ColorGradient(Zilch::NoType none) : DataResource(none) {}
    ZilchNoCopy(ColorGradient);
  };
  
  class ContentLibraryReference : public SafeId32Object
  {
  public:
    typedef ContentLibraryReference ZilchSelf;
    typedef SafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetContentLibraryName();
    
    void SetContentLibraryName(const Zilch::String& value);
    
    unsigned char mValue[8];
    
  protected:
    ContentLibraryReference(Zilch::NoType none) : SafeId32Object(none) {}
    ZilchNoCopy(ContentLibraryReference);
  };
  
  class SharedContent : public Component
  {
  public:
    typedef SharedContent ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<ContentLibraryReferenceArray> GetExtraContentLibraries();
    
    void SetExtraContentLibraries(ContentLibraryReferenceArray* value);
    
    unsigned char mValue[32];
    
  protected:
    SharedContent(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SharedContent);
  };
  
  class RaycastProvider : public SafeId32Object
  {
  public:
    typedef RaycastProvider ZilchSelf;
    typedef SafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetActive();
    
    void SetActive(bool value);
    
    unsigned char mValue[8];
    
  protected:
    RaycastProvider(Zilch::NoType none) : SafeId32Object(none) {}
    ZilchNoCopy(RaycastProvider);
  };
  
  class Raycaster : public SafeId32
  {
  public:
    typedef Raycaster ZilchSelf;
    typedef SafeId32 ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[32];
    
  protected:
    Raycaster(Zilch::NoType none) : SafeId32(none) {}
    ZilchNoCopy(Raycaster);
  };
  
  // Game pad is a object for getting game pad input.
  class Gamepad : public EventObject
  {
  public:
    typedef Gamepad ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetIsActive();
    
    void SetIsActive(bool value);
    
    int GetGamepadIndex();
    
    void SetGamepadIndex(int value);
    
    Zilch::Real2 GetLeftStick();
    
    void SetLeftStick(const Zilch::Real2& value);
    
    Zilch::Real2 GetRightStick();
    
    void SetRightStick(const Zilch::Real2& value);
    
    Zilch::Real2 GetLeftStickDelta();
    
    void SetLeftStickDelta(const Zilch::Real2& value);
    
    Zilch::Real2 GetRightStickDelta();
    
    void SetRightStickDelta(const Zilch::Real2& value);
    
    float GetLeftTrigger();
    
    void SetLeftTrigger(float value);
    
    float GetRightTrigger();
    
    void SetRightTrigger(float value);
    
    // Has the button just been pressed this frame.
    bool IsButtonPressed(int index);
    
    // Is the button currently being held down.
    bool IsButtonHeld(int index);
    
    // Is the button just been released.
    bool IsButtonReleased(int index);
    
    // How long has this button been held down.
    float TimeButtonHeld(int index);
    
    // Vibrate this controller for a given time. Speed is a value between zero and one.
    void Vibrate(float time, float LeftSpeed, float RightSpeed);
    
    unsigned char mValue[352];
    
  protected:
    Gamepad(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(Gamepad);
  };
  
  // Gamepads is a collection of gamepads.
  class Gamepads : public EventObject
  {
  public:
    typedef Gamepads ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Pause Vibration on all gamepads.
    void PauseVibration();
    
    // Resume vibration on all gamepads.
    void ResumeVibration();
    
    // Get the gamepad for a given index from [0, GamepadCount].
    Zilch::HandleOf<Gamepad> GetGamePad(int gamepadIndex);
    
    int GetMaxGamepadCount();
    
    unsigned char mValue[40];
    
  protected:
    Gamepads(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(Gamepads);
  };
  
  class Tweakables : public EventObject
  {
  public:
    typedef Tweakables ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[88];
    
  protected:
    Tweakables(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(Tweakables);
  };
  
  class RawControlMapping : public Zilch::ReferenceType
  {
  public:
    typedef RawControlMapping ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[72];
    
  protected:
    RawControlMapping(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(RawControlMapping);
  };
  
  // A Joystick is associated with a hardware joystick, and provides the ability to query axes and buttons.
  class Joystick : public EventObject
  {
  public:
    typedef Joystick ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetIsActive();
    
    Zilch::String GetName();
    
    // Queries an axes and returns a value between [-1, 1]. The valid range of axes is between 0 and 'GetMaxAxes'. If the axis is not valid, then the value returned is 0. If the axis is disabled, then the value returned is Joystick.DisabledValue.
    float GetAxisValue(int index);
    
    Zilch::String GetAxisName(int index);
    
    int GetAxisIndex(const Zilch::String& name);
    
    float GetAxisValueByName(const Zilch::String& name);
    
    static float GetDisabledValue();
    
    // Queries a button and returns true if it is down, false if it is up The valid range of buttons is between 0 and 'GetMaxButtons' If the button is not valid, then the value returned is false.
    bool GetButtonValue(int index);
    
    int GetButtonCount();
    
    int GetAxisCount();
    
    // Load an input mapping.
    void LoadInputMapping(const Zilch::String& name);
    
    void SaveInputMapping(const Zilch::String& name);
    
    void StartCalibration();
    
    void EndCalibration();
    
    bool Calibrating();
    
    unsigned char mValue[80];
    
  protected:
    Joystick(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(Joystick);
  };
  
  // Joysticks is a collection of all joysticks available.
  class Joysticks : public EventObject
  {
  public:
    typedef Joysticks ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetJoystickCount();
    
    Zilch::HandleOf<JoystickRange> GetJoysticks();
    
    unsigned char mValue[80];
    
  protected:
    Joysticks(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(Joysticks);
  };
  
  class EventDirectoryWatcher : public EventObject
  {
  public:
    typedef EventDirectoryWatcher ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[320];
    
  protected:
    EventDirectoryWatcher(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(EventDirectoryWatcher);
  };
  
  class Job : public ReferenceCountedEventObject
  {
  public:
    typedef Job ZilchSelf;
    typedef ReferenceCountedEventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    Job(Zilch::NoType none) : ReferenceCountedEventObject(none) {}
    ZilchNoCopy(Job);
  };
  
  class DocumentationLibrary : public EventObject
  {
  public:
    typedef DocumentationLibrary ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[176];
    
  protected:
    DocumentationLibrary(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(DocumentationLibrary);
  };
  
  class Shortcuts : public EventObject
  {
  public:
    typedef Shortcuts ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    Shortcuts(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(Shortcuts);
  };
  
  class ComponentProxy : public Component
  {
  public:
    typedef ComponentProxy ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    ComponentProxy(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ComponentProxy);
  };
  
  class LauncherProjectInfo : public ComponentProxy
  {
  public:
    typedef LauncherProjectInfo ZilchSelf;
    typedef ComponentProxy ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    LauncherProjectInfo(Zilch::NoType none) : ComponentProxy(none) {}
    ZilchNoCopy(LauncherProjectInfo);
  };
  
  class ZilchLibraryResource : public Resource
  {
  public:
    typedef ZilchLibraryResource ZilchSelf;
    typedef Resource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ZilchLibraryResource(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(ZilchLibraryResource);
  };
  
  class ZilchDocumentResource : public DocumentResource
  {
  public:
    typedef ZilchDocumentResource ZilchSelf;
    typedef DocumentResource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetText();
    
    unsigned char mValue[16];
    
  protected:
    ZilchDocumentResource(Zilch::NoType none) : DocumentResource(none) {}
    ZilchNoCopy(ZilchDocumentResource);
  };
  
  class PropertyReal : public Zilch::ReferenceType
  {
  public:
    typedef PropertyReal ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Delegate GetSet();
    
    void SetSet(const Zilch::Delegate& value);
    
    Zilch::Delegate GetGet();
    
    void SetGet(const Zilch::Delegate& value);
    
    Zilch::HandleOf<Zilch::Property> GetProperty();
    
    void SetProperty(Zilch::Property* value);
    
    Zilch::Any GetInstance();
    
    void SetInstance(const Zilch::Any& value);
    
    unsigned char mValue[184];
    
  protected:
    PropertyReal(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PropertyReal);
  };
  
  class PropertyReal2 : public Zilch::ReferenceType
  {
  public:
    typedef PropertyReal2 ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Delegate GetSet();
    
    void SetSet(const Zilch::Delegate& value);
    
    Zilch::Delegate GetGet();
    
    void SetGet(const Zilch::Delegate& value);
    
    Zilch::HandleOf<Zilch::Property> GetProperty();
    
    void SetProperty(Zilch::Property* value);
    
    Zilch::Any GetInstance();
    
    void SetInstance(const Zilch::Any& value);
    
    unsigned char mValue[184];
    
  protected:
    PropertyReal2(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PropertyReal2);
  };
  
  class PropertyReal3 : public Zilch::ReferenceType
  {
  public:
    typedef PropertyReal3 ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Delegate GetSet();
    
    void SetSet(const Zilch::Delegate& value);
    
    Zilch::Delegate GetGet();
    
    void SetGet(const Zilch::Delegate& value);
    
    Zilch::HandleOf<Zilch::Property> GetProperty();
    
    void SetProperty(Zilch::Property* value);
    
    Zilch::Any GetInstance();
    
    void SetInstance(const Zilch::Any& value);
    
    unsigned char mValue[184];
    
  protected:
    PropertyReal3(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PropertyReal3);
  };
  
  class PropertyReal4 : public Zilch::ReferenceType
  {
  public:
    typedef PropertyReal4 ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Delegate GetSet();
    
    void SetSet(const Zilch::Delegate& value);
    
    Zilch::Delegate GetGet();
    
    void SetGet(const Zilch::Delegate& value);
    
    Zilch::HandleOf<Zilch::Property> GetProperty();
    
    void SetProperty(Zilch::Property* value);
    
    Zilch::Any GetInstance();
    
    void SetInstance(const Zilch::Any& value);
    
    unsigned char mValue[184];
    
  protected:
    PropertyReal4(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PropertyReal4);
  };
  
  class PropertyQuaternion : public Zilch::ReferenceType
  {
  public:
    typedef PropertyQuaternion ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Delegate GetSet();
    
    void SetSet(const Zilch::Delegate& value);
    
    Zilch::Delegate GetGet();
    
    void SetGet(const Zilch::Delegate& value);
    
    Zilch::HandleOf<Zilch::Property> GetProperty();
    
    void SetProperty(Zilch::Property* value);
    
    Zilch::Any GetInstance();
    
    void SetInstance(const Zilch::Any& value);
    
    unsigned char mValue[184];
    
  protected:
    PropertyQuaternion(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PropertyQuaternion);
  };
  
  class PropertyInteger : public Zilch::ReferenceType
  {
  public:
    typedef PropertyInteger ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Delegate GetSet();
    
    void SetSet(const Zilch::Delegate& value);
    
    Zilch::Delegate GetGet();
    
    void SetGet(const Zilch::Delegate& value);
    
    Zilch::HandleOf<Zilch::Property> GetProperty();
    
    void SetProperty(Zilch::Property* value);
    
    Zilch::Any GetInstance();
    
    void SetInstance(const Zilch::Any& value);
    
    unsigned char mValue[184];
    
  protected:
    PropertyInteger(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PropertyInteger);
  };
  
  class PropertyBoolean : public Zilch::ReferenceType
  {
  public:
    typedef PropertyBoolean ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Delegate GetSet();
    
    void SetSet(const Zilch::Delegate& value);
    
    Zilch::Delegate GetGet();
    
    void SetGet(const Zilch::Delegate& value);
    
    Zilch::HandleOf<Zilch::Property> GetProperty();
    
    void SetProperty(Zilch::Property* value);
    
    Zilch::Any GetInstance();
    
    void SetInstance(const Zilch::Any& value);
    
    unsigned char mValue[184];
    
  protected:
    PropertyBoolean(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PropertyBoolean);
  };
  
  class PropertyString : public Zilch::ReferenceType
  {
  public:
    typedef PropertyString ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Delegate GetSet();
    
    void SetSet(const Zilch::Delegate& value);
    
    Zilch::Delegate GetGet();
    
    void SetGet(const Zilch::Delegate& value);
    
    Zilch::HandleOf<Zilch::Property> GetProperty();
    
    void SetProperty(Zilch::Property* value);
    
    Zilch::Any GetInstance();
    
    void SetInstance(const Zilch::Any& value);
    
    unsigned char mValue[184];
    
  protected:
    PropertyString(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PropertyString);
  };
  
  class GraphicalEntryRange : public Zilch::ReferenceType
  {
  public:
    typedef GraphicalEntryRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<GraphicalEntryRange> GetAll();
    
    Zilch::HandleOf<GraphicalEntry> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[16];
    
  protected:
    GraphicalEntryRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(GraphicalEntryRange);
  };
  
  class MultiSpriteEntryRange : public Zilch::ReferenceType
  {
  public:
    typedef MultiSpriteEntryRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<MultiSpriteEntryRange> GetAll();
    
    Zilch::HandleOf<MultiSpriteEntry> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[40];
    
  protected:
    MultiSpriteEntryRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(MultiSpriteEntryRange);
  };
  
  class ParticleListRange : public Zilch::ReferenceType
  {
  public:
    typedef ParticleListRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<ParticleListRange> GetAll();
    
    Zilch::HandleOf<Particle> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[16];
    
  protected:
    ParticleListRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ParticleListRange);
  };
  
  class VertexSemanticRange : public Zilch::ReferenceType
  {
  public:
    typedef VertexSemanticRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<VertexSemanticRange> GetAll();
    
    VertexSemantic GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[72];
    
  protected:
    VertexSemanticRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(VertexSemanticRange);
  };
  
  class ArrayHandleOfMaterial : public Zilch::ReferenceType
  {
  public:
    typedef ArrayHandleOfMaterial ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<ArrayHandleOfMaterial> GetAll();
    
    Zilch::HandleOf<Material> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[32];
    
  protected:
    ArrayHandleOfMaterial(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ArrayHandleOfMaterial);
  };
  
  class ArrayHandleOfRenderGroup : public Zilch::ReferenceType
  {
  public:
    typedef ArrayHandleOfRenderGroup ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<ArrayHandleOfRenderGroup> GetAll();
    
    Zilch::HandleOf<RenderGroup> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[32];
    
  protected:
    ArrayHandleOfRenderGroup(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ArrayHandleOfRenderGroup);
  };
  
  // If blend equations are applied when writing to a render target.
  class BlendMode : public Zilch::Enum
  {
  public:
    typedef BlendMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static BlendMode GetDisabled();
    
    static BlendMode GetEnabled();
    
    static BlendMode GetSeparate();
    
    BlendMode();
  };
  
  // Values that can be multiplied with the operands used in the blend equation.
  class BlendFactor : public Zilch::Enum
  {
  public:
    typedef BlendFactor ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static BlendFactor GetZero();
    
    static BlendFactor GetOne();
    
    static BlendFactor GetSourceColor();
    
    static BlendFactor GetInvSourceColor();
    
    static BlendFactor GetDestColor();
    
    static BlendFactor GetInvDestColor();
    
    static BlendFactor GetSourceAlpha();
    
    static BlendFactor GetInvSourceAlpha();
    
    static BlendFactor GetDestAlpha();
    
    static BlendFactor GetInvDestAlpha();
    
    static BlendFactor GetSourceAlphaSaturate();
    
    BlendFactor();
  };
  
  // How pixel values (source) are combined with the active render target's values (destination).
  class BlendEquation : public Zilch::Enum
  {
  public:
    typedef BlendEquation ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static BlendEquation GetAdd();
    
    static BlendEquation GetSubtract();
    
    static BlendEquation GetReverseSubtract();
    
    static BlendEquation GetMin();
    
    static BlendEquation GetMax();
    
    BlendEquation();
  };
  
  // How triangles should be culled (not rendered) depending on which way they face.
  class CullMode : public Zilch::Enum
  {
  public:
    typedef CullMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static CullMode GetDisabled();
    
    static CullMode GetBackFace();
    
    static CullMode GetFrontFace();
    
    CullMode();
  };
  
  // How pixels depth values should be tested to determine if the pixel renders.
  class DepthMode : public Zilch::Enum
  {
  public:
    typedef DepthMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static DepthMode GetDisabled();
    
    static DepthMode GetRead();
    
    static DepthMode GetWrite();
    
    DepthMode();
  };
  
  // Method of sorting for determining the draw order of graphicals.
  class GraphicalSortMethod : public Zilch::Enum
  {
  public:
    typedef GraphicalSortMethod ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static GraphicalSortMethod GetNone();
    
    static GraphicalSortMethod GetGraphicalSortValue();
    
    static GraphicalSortMethod GetSortEvent();
    
    static GraphicalSortMethod GetBackToFrontView();
    
    static GraphicalSortMethod GetFrontToBackView();
    
    static GraphicalSortMethod GetNegativeToPositiveX();
    
    static GraphicalSortMethod GetPositiveToNegativeX();
    
    static GraphicalSortMethod GetNegativeToPositiveY();
    
    static GraphicalSortMethod GetPositiveToNegativeY();
    
    static GraphicalSortMethod GetNegativeToPositiveZ();
    
    static GraphicalSortMethod GetPositiveToNegativeZ();
    
    GraphicalSortMethod();
  };
  
  class MeshEmitMode : public Zilch::Enum
  {
  public:
    typedef MeshEmitMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static MeshEmitMode GetVertex();
    
    static MeshEmitMode GetEdge();
    
    static MeshEmitMode GetFace();
    
    MeshEmitMode();
  };
  
  // Method of 3D scene projection to a 2D plane.
  class PerspectiveMode : public Zilch::Enum
  {
  public:
    typedef PerspectiveMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static PerspectiveMode GetPerspective();
    
    static PerspectiveMode GetOrthographic();
    
    PerspectiveMode();
  };
  
  class PrimitiveType : public Zilch::Enum
  {
  public:
    typedef PrimitiveType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static PrimitiveType GetPoints();
    
    static PrimitiveType GetLines();
    
    static PrimitiveType GetTriangles();
    
    PrimitiveType();
  };
  
  // How the sprite quad is aligned in 3D space.
  class SpriteGeometryMode : public Zilch::Enum
  {
  public:
    typedef SpriteGeometryMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static SpriteGeometryMode GetZPlane();
    
    static SpriteGeometryMode GetViewPlane();
    
    SpriteGeometryMode();
  };
  
  class SpriteParticleAnimationMode : public Zilch::Enum
  {
  public:
    typedef SpriteParticleAnimationMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static SpriteParticleAnimationMode GetSingle();
    
    static SpriteParticleAnimationMode GetLooping();
    
    SpriteParticleAnimationMode();
  };
  
  // Sprite  Particle  System Enums.
  class SpriteParticleGeometryMode : public Zilch::Enum
  {
  public:
    typedef SpriteParticleGeometryMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static SpriteParticleGeometryMode GetBillboarded();
    
    static SpriteParticleGeometryMode GetBeam();
    
    static SpriteParticleGeometryMode GetOutward();
    
    static SpriteParticleGeometryMode GetFaceVelocity();
    
    static SpriteParticleGeometryMode GetFlat();
    
    SpriteParticleGeometryMode();
  };
  
  class SpriteParticleSortMode : public Zilch::Enum
  {
  public:
    typedef SpriteParticleSortMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static SpriteParticleSortMode GetNone();
    
    static SpriteParticleSortMode GetBackToFrontView();
    
    static SpriteParticleSortMode GetFrontToBackView();
    
    static SpriteParticleSortMode GetNegativeToPositiveX();
    
    static SpriteParticleSortMode GetPositiveToNegativeX();
    
    static SpriteParticleSortMode GetNegativeToPositiveY();
    
    static SpriteParticleSortMode GetPositiveToNegativeY();
    
    static SpriteParticleSortMode GetNegativeToPositiveZ();
    
    static SpriteParticleSortMode GetPositiveToNegativeZ();
    
    SpriteParticleSortMode();
  };
  
  // How stencil buffer values should be tested to determine if a pixel renders.
  class StencilMode : public Zilch::Enum
  {
  public:
    typedef StencilMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static StencilMode GetDisabled();
    
    static StencilMode GetEnabled();
    
    static StencilMode GetSeparate();
    
    StencilMode();
  };
  
  // Operations that can be applied to the stencil buffer.
  class StencilOp : public Zilch::Enum
  {
  public:
    typedef StencilOp ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static StencilOp GetZero();
    
    static StencilOp GetKeep();
    
    static StencilOp GetReplace();
    
    static StencilOp GetInvert();
    
    static StencilOp GetIncrement();
    
    static StencilOp GetIncrementWrap();
    
    static StencilOp GetDecrement();
    
    static StencilOp GetDecrementWrap();
    
    StencilOp();
  };
  
  class SystemSpace : public Zilch::Enum
  {
  public:
    typedef SystemSpace ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static SystemSpace GetWorldSpace();
    
    static SystemSpace GetLocalSpace();
    
    SystemSpace();
  };
  
  // How text is positioned relative to the object position.
  class TextAlign : public Zilch::Enum
  {
  public:
    typedef TextAlign ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static TextAlign GetLeft();
    
    static TextAlign GetCenter();
    
    static TextAlign GetRight();
    
    TextAlign();
  };
  
  // Method of comparison used when testing values against textures/buffers.
  class TextureCompareFunc : public Zilch::Enum
  {
  public:
    typedef TextureCompareFunc ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static TextureCompareFunc GetNever();
    
    static TextureCompareFunc GetAlways();
    
    static TextureCompareFunc GetLess();
    
    static TextureCompareFunc GetLessEqual();
    
    static TextureCompareFunc GetGreater();
    
    static TextureCompareFunc GetGreaterEqual();
    
    static TextureCompareFunc GetEqual();
    
    static TextureCompareFunc GetNotEqual();
    
    TextureCompareFunc();
  };
  
  // If texture sampling should do comparison.
  class TextureCompareMode : public Zilch::Enum
  {
  public:
    typedef TextureCompareMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static TextureCompareMode GetDisabled();
    
    static TextureCompareMode GetEnabled();
    
    TextureCompareMode();
  };
  
  class VertexElementType : public Zilch::Enum
  {
  public:
    typedef VertexElementType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static VertexElementType GetByte();
    
    static VertexElementType GetShort();
    
    static VertexElementType GetHalf();
    
    static VertexElementType GetReal();
    
    static VertexElementType GetNormByte();
    
    static VertexElementType GetNormShort();
    
    VertexElementType();
  };
  
  class VertexSemantic : public Zilch::Enum
  {
  public:
    typedef VertexSemantic ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static VertexSemantic GetPosition();
    
    static VertexSemantic GetNormal();
    
    static VertexSemantic GetTangent();
    
    static VertexSemantic GetBitangent();
    
    static VertexSemantic GetUv();
    
    static VertexSemantic GetUvAux();
    
    static VertexSemantic GetColor();
    
    static VertexSemantic GetColorAux();
    
    static VertexSemantic GetBoneWeights();
    
    static VertexSemantic GetBoneIndices();
    
    static VertexSemantic GetAux0();
    
    static VertexSemantic GetAux1();
    
    static VertexSemantic GetAux2();
    
    static VertexSemantic GetAux3();
    
    static VertexSemantic GetAux4();
    
    static VertexSemantic GetAux5();
    
    static VertexSemantic GetNone();
    
    VertexSemantic();
  };
  
  // How the viewport should be sized within the window size.
  class ViewportScaling : public Zilch::Enum
  {
  public:
    typedef ViewportScaling ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static ViewportScaling GetFill();
    
    static ViewportScaling GetLetterbox();
    
    static ViewportScaling GetExact();
    
    static ViewportScaling GetLargestMultiple();
    
    ViewportScaling();
  };
  
  class MaterialFactory : public MetaComposition
  {
  public:
    typedef MaterialFactory ZilchSelf;
    typedef MetaComposition ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[128];
    
  protected:
    MaterialFactory(Zilch::NoType none) : MetaComposition(none) {}
    ZilchNoCopy(MaterialFactory);
  };
  
  class CompositionLabelExtension : public EditorPropertyExtension
  {
  public:
    typedef CompositionLabelExtension ZilchSelf;
    typedef EditorPropertyExtension ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    CompositionLabelExtension(Zilch::NoType none) : EditorPropertyExtension(none) {}
    ZilchNoCopy(CompositionLabelExtension);
  };
  
  class HideBaseFilter : public MetaPropertyFilter
  {
  public:
    typedef HideBaseFilter ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    HideBaseFilter(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(HideBaseFilter);
  };
  
  // Event for changes of visibility state.
  class GraphicalEvent : public Event
  {
  public:
    typedef GraphicalEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Cog> GetViewingObject();
    
    void SetViewingObject(Cog* value);
    
    unsigned char mValue[56];
    
  protected:
    GraphicalEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(GraphicalEvent);
  };
  
  class GraphicalSortEvent : public Event
  {
  public:
    typedef GraphicalSortEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<GraphicalEntryRange> GetGraphicalEntries();
    
    Zilch::HandleOf<RenderGroup> GetRenderGroup();
    
    unsigned char mValue[24];
    
  protected:
    GraphicalSortEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(GraphicalSortEvent);
  };
  
  class ParticleEvent : public Event
  {
  public:
    typedef ParticleEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<ParticleListRange> GetNewParticles();
    
    int GetNewParticleCount();
    
    unsigned char mValue[24];
    
  protected:
    ParticleEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ParticleEvent);
  };
  
  // Interface for adding tasks for the renderer, essentially defining a rendering pipeline.
  class RenderTasksEvent : public Event
  {
  public:
    typedef RenderTasksEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Integer2 GetViewportSize();
    
    Zilch::HandleOf<Cog> GetCameraViewportCog();
    
    // Returns a RenderTarget for use when adding render tasks. Target only valid during this event. Will render to the given texture instead of an internally managed texture.
    Zilch::HandleOf<RenderTarget> GetRenderTarget(const Zilch::Integer2& __0, const TextureFormat& __1);
    
    // Returns a RenderTarget for use when adding render tasks. Target only valid during this event. Will render to the given texture instead of an internally managed texture.
    Zilch::HandleOf<RenderTarget> GetRenderTarget(const Zilch::Integer2& __0, const TextureFormat& __1, SamplerSettings* __2);
    
    // Returns a RenderTarget for use when adding render tasks. Target only valid during this event. Will render to the given texture instead of an internally managed texture.
    Zilch::HandleOf<RenderTarget> GetRenderTarget(Texture* texture);
    
    // Creates the interface used to define unique render settings for a base RenderGroup and its sub RenderGroups. The given RenderGroup is used to define the hierarchy, or sub hierarchy, that should be rendered. The given RenderGroup also defines the sort order for all objects that are within its hierarchy. Returned SubRenderGroupPass is only valid during this event.
    Zilch::HandleOf<SubRenderGroupPass> CreateSubRenderGroupPass(RenderGroup* baseGroup);
    
    // Initializes all the internal texture data for the given RenderTargets.
    void AddRenderTaskClearTarget(RenderTarget* colorTarget, const Zilch::Real4& color);
    
    // Initializes all the internal texture data for the given RenderTargets.
    void AddRenderTaskClearTarget(RenderTarget* depthTarget, float depth);
    
    // Initializes all the internal texture data for the given RenderTargets.
    void AddRenderTaskClearTarget(RenderTarget* depthTarget, float depth, int stencil);
    
    // Initializes all the internal texture data for the given RenderTargets.
    void AddRenderTaskClearTarget(RenderTarget* depthTarget, float depth, int stencil, int stencilWriteMask);
    
    // Initializes all the internal texture data for the given RenderTargets.
    void AddRenderTaskClearTarget(RenderTarget* colorTarget, RenderTarget* depthTarget, const Zilch::Real4& color, float depth);
    
    // Initializes all the internal texture data for the given RenderTargets.
    void AddRenderTaskClearTarget(RenderTarget* colorTarget, RenderTarget* depthTarget, const Zilch::Real4& color, float depth, int stencil);
    
    // Initializes all the internal texture data for the given RenderTargets.
    void AddRenderTaskClearTarget(RenderTarget* colorTarget, RenderTarget* depthTarget, const Zilch::Real4& color, float depth, int stencil, int stencilWriteMask);
    
    // Initializes all the internal texture data for the given RenderTargets.
    void AddRenderTaskClearTarget(RenderSettings* renderSettings, const Zilch::Real4& color);
    
    // Initializes all the internal texture data for the given RenderTargets.
    void AddRenderTaskClearTarget(RenderSettings* renderSettings, const Zilch::Real4& color, float depth);
    
    // Initializes all the internal texture data for the given RenderTargets.
    void AddRenderTaskClearTarget(RenderSettings* renderSettings, const Zilch::Real4& color, float depth, int stencil);
    
    // Initializes all the internal texture data for the given RenderTargets.
    void AddRenderTaskClearTarget(RenderSettings* renderSettings, const Zilch::Real4& color, float depth, int stencil, int stencilWriteMask);
    
    // Renders a group of objects with the given settings. The RenderPass fragment defines what data is written to RenderTargets.
    void AddRenderTaskRenderPass(RenderSettings* renderSettings, RenderGroup* renderGroup, MaterialBlock* renderPass);
    
    // Renders a group of objects with the given settings. The RenderPass fragment defines what data is written to RenderTargets.
    void AddRenderTaskRenderPass(RenderSettings* renderSettings, GraphicalRangeInterface* graphicalRange, MaterialBlock* renderPass);
    
    // Renders all objects within a RenderGroup hierarchy, sorted in the order defined by the base RenderGroup, and can use unique render settings for each RenderGroup in the hierarchy.
    void AddRenderTaskSubRenderGroupPass(SubRenderGroupPass* subRenderGroupPass);
    
    // Invokes the pixel shader for every pixel of the RenderTargets.
    void AddRenderTaskPostProcess(RenderTarget* renderTarget, Material* material);
    
    // Invokes the pixel shader for every pixel of the RenderTargets.
    void AddRenderTaskPostProcess(RenderTarget* renderTarget, MaterialBlock* postProcess);
    
    // Invokes the pixel shader for every pixel of the RenderTargets.
    void AddRenderTaskPostProcess(RenderSettings* renderSettings, Material* material);
    
    // Invokes the pixel shader for every pixel of the RenderTargets.
    void AddRenderTaskPostProcess(RenderSettings* renderSettings, MaterialBlock* postProcess);
    
    Zilch::HandleOf<RenderTarget> GetFinalTarget(const Zilch::Integer2& __0, const TextureFormat& __1);
    
    Zilch::HandleOf<RenderTarget> GetFinalTarget(const Zilch::Integer2& __0, const TextureFormat& __1, SamplerSettings* __2);
    
    unsigned char mValue[128];
    
  protected:
    RenderTasksEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(RenderTasksEvent);
  };
  
  class ResourceListEvent : public Event
  {
  public:
    typedef ResourceListEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    ResourceListEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ResourceListEvent);
  };
  
  class ShaderInputsEvent : public Event
  {
  public:
    typedef ShaderInputsEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    ShaderInputsEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ShaderInputsEvent);
  };
  
  // Base interface for components that require rendering.
  class Graphical : public Component
  {
  public:
    typedef Graphical ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetVisible();
    
    void SetVisible(bool value);
    
    bool GetViewCulling();
    
    void SetViewCulling(bool value);
    
    bool GetVisibilityEvents();
    
    void SetVisibilityEvents(bool value);
    
    bool GetOverrideBoundingBox();
    
    void SetOverrideBoundingBox(bool value);
    
    Zilch::Real3 GetLocalAabbCenter();
    
    void SetLocalAabbCenter(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalAabbHalfExtents();
    
    void SetLocalAabbHalfExtents(const Zilch::Real3& value);
    
    int GetGroupSortValue();
    
    void SetGroupSortValue(int value);
    
    Zilch::HandleOf<Material> GetMaterial();
    
    void SetMaterial(Material* value);
    
    Zilch::HandleOf<ShaderInputs> GetShaderInputs();
    
    void SetShaderInputs(ShaderInputs* value);
    
    Aabb GetWorldAabb();
    
    unsigned char mValue[256];
    
  protected:
    Graphical(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Graphical);
  };
  
  class SlicedDefinition : public Resource
  {
  public:
    typedef SlicedDefinition ZilchSelf;
    typedef Resource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[128];
    
  protected:
    SlicedDefinition(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(SlicedDefinition);
  };
  
  class Atlas : public Resource
  {
  public:
    typedef Atlas ZilchSelf;
    typedef Resource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[112];
    
  protected:
    Atlas(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(Atlas);
  };
  
  // Common interface for 2D Sprite based graphicals.
  class BaseSprite : public Graphical
  {
  public:
    typedef BaseSprite ZilchSelf;
    typedef Graphical ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real4 GetVertexColor();
    
    void SetVertexColor(const Zilch::Real4& value);
    
    SpriteGeometryMode GetGeometryMode();
    
    void SetGeometryMode(const SpriteGeometryMode& value);
    
    unsigned char mValue[24];
    
  protected:
    BaseSprite(Zilch::NoType none) : Graphical(none) {}
    ZilchNoCopy(BaseSprite);
  };
  
  // Settings for how pixel shader outputs are combined with the RenderTarget's current values.
  class BlendSettings : public Zilch::ReferenceType
  {
  public:
    typedef BlendSettings ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    BlendMode GetBlendMode();
    
    void SetBlendMode(const BlendMode& value);
    
    BlendEquation GetBlendEquation();
    
    void SetBlendEquation(const BlendEquation& value);
    
    BlendFactor GetSourceFactor();
    
    void SetSourceFactor(const BlendFactor& value);
    
    BlendFactor GetDestFactor();
    
    void SetDestFactor(const BlendFactor& value);
    
    BlendEquation GetBlendEquationAlpha();
    
    void SetBlendEquationAlpha(const BlendEquation& value);
    
    BlendFactor GetSourceFactorAlpha();
    
    void SetSourceFactorAlpha(const BlendFactor& value);
    
    BlendFactor GetDestFactorAlpha();
    
    void SetDestFactorAlpha(const BlendFactor& value);
    
    unsigned char mValue[24];
    
  protected:
    BlendSettings(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(BlendSettings);
  };
  
  // Indexable interface for settings BlendSettings.
  class BlendSettingsMrt : public ThreadSafeReferenceCounted
  {
  public:
    typedef BlendSettingsMrt ZilchSelf;
    typedef ThreadSafeReferenceCounted ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Get the current BlendSettings for a color target at the given index.
    Zilch::HandleOf<BlendSettings> Get(int index);
    
    // Set the BlendSettings for a color target at the given index.
    void Set(int index, BlendSettings* blendSettings);
    
    unsigned char mValue[56];
    
  protected:
    BlendSettingsMrt(Zilch::NoType none) : ThreadSafeReferenceCounted(none) {}
    ZilchNoCopy(BlendSettingsMrt);
  };
  
  // Used by Skeleton to identify child objects whose transforms can be used for mesh skinning.
  class Bone : public Component
  {
  public:
    typedef Bone ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    Bone(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Bone);
  };
  
  // Represents a viewpoint for rendering.
  class Camera : public Component
  {
  public:
    typedef Camera ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetNearPlane();
    
    void SetNearPlane(float value);
    
    float GetFarPlane();
    
    void SetFarPlane(float value);
    
    PerspectiveMode GetPerspectiveMode();
    
    void SetPerspectiveMode(const PerspectiveMode& value);
    
    float GetFieldOfView();
    
    void SetFieldOfView(float value);
    
    float GetSize();
    
    void SetSize(float value);
    
    Zilch::HandleOf<Cog> GetCameraViewportCog();
    
    Zilch::Real3 GetWorldTranslation();
    
    Zilch::Real3 GetWorldDirection();
    
    Zilch::Real3 GetWorldUp();
    
    // Creates a frustum using the Camera's settings along with the given aspect ratio.
    Frustum GetFrustum(float aspect);
    
    unsigned char mValue[408];
    
  protected:
    Camera(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Camera);
  };
  
  // Indexable interface for settings ColorTargets.
  class ColorTargetMrt : public ThreadSafeReferenceCounted
  {
  public:
    typedef ColorTargetMrt ZilchSelf;
    typedef ThreadSafeReferenceCounted ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Set the RenderTarget to use for the given index.
    void Set(int index, RenderTarget* colorTarget);
    
    unsigned char mValue[56];
    
  protected:
    ColorTargetMrt(Zilch::NoType none) : ThreadSafeReferenceCounted(none) {}
    ZilchNoCopy(ColorTargetMrt);
  };
  
  class DebugGraphical : public Graphical
  {
  public:
    typedef DebugGraphical ZilchSelf;
    typedef Graphical ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    DebugGraphical(Zilch::NoType none) : Graphical(none) {}
    ZilchNoCopy(DebugGraphical);
  };
  
  class DebugGraphicalPrimitive : public DebugGraphical
  {
  public:
    typedef DebugGraphicalPrimitive ZilchSelf;
    typedef DebugGraphical ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    DebugGraphicalPrimitive(Zilch::NoType none) : DebugGraphical(none) {}
    ZilchNoCopy(DebugGraphicalPrimitive);
  };
  
  class DebugGraphicalThickLine : public DebugGraphicalPrimitive
  {
  public:
    typedef DebugGraphicalThickLine ZilchSelf;
    typedef DebugGraphicalPrimitive ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    DebugGraphicalThickLine(Zilch::NoType none) : DebugGraphicalPrimitive(none) {}
    ZilchNoCopy(DebugGraphicalThickLine);
  };
  
  class DebugGraphicalText : public DebugGraphical
  {
  public:
    typedef DebugGraphicalText ZilchSelf;
    typedef DebugGraphical ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    DebugGraphicalText(Zilch::NoType none) : DebugGraphical(none) {}
    ZilchNoCopy(DebugGraphicalText);
  };
  
  class DefinitionSet : public Resource
  {
  public:
    typedef DefinitionSet ZilchSelf;
    typedef Resource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[48];
    
  protected:
    DefinitionSet(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(DefinitionSet);
  };
  
  // Settings for how the depth buffer should control pixel output.
  class DepthSettings : public Zilch::ReferenceType
  {
  public:
    typedef DepthSettings ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    DepthMode GetDepthMode();
    
    void SetDepthMode(const DepthMode& value);
    
    TextureCompareFunc GetDepthCompareFunc();
    
    void SetDepthCompareFunc(const TextureCompareFunc& value);
    
    StencilMode GetStencilMode();
    
    void SetStencilMode(const StencilMode& value);
    
    TextureCompareFunc GetStencilCompareFunc();
    
    void SetStencilCompareFunc(const TextureCompareFunc& value);
    
    StencilOp GetStencilFailOp();
    
    void SetStencilFailOp(const StencilOp& value);
    
    StencilOp GetDepthFailOp();
    
    void SetDepthFailOp(const StencilOp& value);
    
    StencilOp GetDepthPassOp();
    
    void SetDepthPassOp(const StencilOp& value);
    
    TextureCompareFunc GetStencilCompareFuncBackFace();
    
    void SetStencilCompareFuncBackFace(const TextureCompareFunc& value);
    
    StencilOp GetStencilFailOpBackFace();
    
    void SetStencilFailOpBackFace(const StencilOp& value);
    
    StencilOp GetDepthFailOpBackFace();
    
    void SetDepthFailOpBackFace(const StencilOp& value);
    
    StencilOp GetDepthPassOpBackFace();
    
    void SetDepthPassOpBackFace(const StencilOp& value);
    
    unsigned char GetStencilReadMask();
    
    void SetStencilReadMask(unsigned char value);
    
    unsigned char GetStencilWriteMask();
    
    void SetStencilWriteMask(unsigned char value);
    
    unsigned char GetStencilTestValue();
    
    void SetStencilTestValue(unsigned char value);
    
    unsigned char GetStencilReadMaskBackFace();
    
    void SetStencilReadMaskBackFace(unsigned char value);
    
    unsigned char GetStencilWriteMaskBackFace();
    
    void SetStencilWriteMaskBackFace(unsigned char value);
    
    unsigned char GetStencilTestValueBackFace();
    
    void SetStencilTestValueBackFace(unsigned char value);
    
    unsigned char mValue[32];
    
  protected:
    DepthSettings(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(DepthSettings);
  };
  
  class Font : public Resource
  {
  public:
    typedef Font ZilchSelf;
    typedef Resource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[64];
    
  protected:
    Font(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(Font);
  };
  
  class GraphicalEntry : public Zilch::ReferenceType
  {
  public:
    typedef GraphicalEntry ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Cog> GetCog();
    
    void SetGraphicalSortValue(int p0);
    
    unsigned char mValue[24];
    
  protected:
    GraphicalEntry(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(GraphicalEntry);
  };
  
  // A list for custom specifying which Graphicals and in what draw order for a RenderPass.
  class GraphicalRangeInterface : public Zilch::ReferenceType
  {
  public:
    typedef GraphicalRangeInterface ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Add a Graphical to the list.
    void Add(Graphical* graphical);
    
    // Remove all Graphicals from the list.
    void Clear();
    
    int GetCount();
    
    unsigned char mValue[32];
    
  protected:
    GraphicalRangeInterface(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(GraphicalRangeInterface);
  };
  
  class GraphicsDriverSupport : public Zilch::ReferenceType
  {
  public:
    typedef GraphicsDriverSupport ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetTextureCompression();
    
    bool GetMultiTargetBlend();
    
    bool GetSamplerObjects();
    
    unsigned char mValue[4];
    
  protected:
    GraphicsDriverSupport(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(GraphicsDriverSupport);
  };
  
  class GraphicsEngine : public System
  {
  public:
    typedef GraphicsEngine ZilchSelf;
    typedef System ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[1840];
    
  protected:
    GraphicsEngine(Zilch::NoType none) : System(none) {}
    ZilchNoCopy(GraphicsEngine);
  };
  
  class GraphicsRaycastProvider : public RaycastProvider
  {
  public:
    typedef GraphicsRaycastProvider ZilchSelf;
    typedef RaycastProvider ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetMultiSelectGraphical();
    
    void SetMultiSelectGraphical(bool value);
    
    bool GetVisibleOnly();
    
    void SetVisibleOnly(bool value);
    
    unsigned char mValue[8];
    
  protected:
    GraphicsRaycastProvider(Zilch::NoType none) : RaycastProvider(none) {}
    ZilchNoCopy(GraphicsRaycastProvider);
  };
  
  // Core space component that manages all interactions between graphics related objects.
  class GraphicsSpace : public Component
  {
  public:
    typedef GraphicsSpace ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetActive();
    
    void SetActive(bool value);
    
    bool GetRandomSeed();
    
    void SetRandomSeed(bool value);
    
    int GetSeed();
    
    void SetSeed(int value);
    
    unsigned char mValue[376];
    
  protected:
    GraphicsSpace(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(GraphicsSpace);
  };
  
  // Generates a graphical mesh from every patch of height data in the HeightMap component.
  class HeightMapModel : public Graphical
  {
  public:
    typedef HeightMapModel ZilchSelf;
    typedef Graphical ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[72];
    
  protected:
    HeightMapModel(Zilch::NoType none) : Graphical(none) {}
    ZilchNoCopy(HeightMapModel);
  };
  
  class ImageDefinition : public SlicedDefinition
  {
  public:
    typedef ImageDefinition ZilchSelf;
    typedef SlicedDefinition ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ImageDefinition(Zilch::NoType none) : SlicedDefinition(none) {}
    ZilchNoCopy(ImageDefinition);
  };
  
  // Indices used to define non-sequential primitive construction from vertices, such as shared vertices.
  class IndexBuffer : public SafeId32
  {
  public:
    typedef IndexBuffer ZilchSelf;
    typedef SafeId32 ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetCount();
    
    void SetCount(int value);
    
    // Add a vertex index to the buffer.
    void Add(int value);
    
    // Returns the vertex index that is stored at the given index of this buffer.
    int Get(int index);
    
    // Clears all stored indices so that new ones can be added.
    void Clear();
    
    unsigned char mValue[48];
    
  protected:
    IndexBuffer(Zilch::NoType none) : SafeId32(none) {}
    ZilchNoCopy(IndexBuffer);
  };
  
  // A composition of shader fragments that defines a shader program that is used when rendering Graphicals.
  class Material : public DataResource
  {
  public:
    typedef Material ZilchSelf;
    typedef DataResource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Creates an anonymous copy that can be independently modified, destroyed when all references are gone.
    Zilch::HandleOf<Material> RuntimeClone();
    
    Zilch::HandleOf<RenderGroupList> GetRenderGroups();
    
    Zilch::HandleOf<RenderGroupList> GetReferencedByList();
    
    int GetCompositionLabel();
    
    unsigned char mValue[496];
    
  protected:
    Material(Zilch::NoType none) : DataResource(none) {}
    ZilchNoCopy(Material);
  };
  
  class MaterialBlock : public Object
  {
  public:
    typedef MaterialBlock ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    MaterialBlock(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(MaterialBlock);
  };
  
  class MaterialList : public SafeId32EventObject
  {
  public:
    typedef MaterialList ZilchSelf;
    typedef SafeId32EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Adds the Material to this RenderGroups's list. Runtime resources only.
    void Add(Material* material);
    
    // Removes the Material from this RenderGroups's list. Runtime resources only.
    void Remove(Material* material);
    
    // Range of all resources in the list.
    Zilch::HandleOf<ArrayHandleOfMaterial> All();
    
    unsigned char mValue[72];
    
  protected:
    MaterialList(Zilch::NoType none) : SafeId32EventObject(none) {}
    ZilchNoCopy(MaterialList);
  };
  
  // Data that represents a mesh in the way that is intended to be used by graphics hardware.
  class Mesh : public Resource
  {
  public:
    typedef Mesh ZilchSelf;
    typedef Resource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Makes an anonymous Mesh resource that can be defined by script and uploaded to the gpu.
    static Zilch::HandleOf<Mesh> CreateRuntime();
    
    // Creates a clone of this Mesh. As a clone is expected to be modified, an upload function must be called before this mesh can be used.
    Zilch::HandleOf<Mesh> RuntimeClone();
    
    Zilch::HandleOf<VertexBuffer> GetVertices();
    
    Zilch::HandleOf<IndexBuffer> GetIndices();
    
    PrimitiveType GetPrimitiveType();
    
    void SetPrimitiveType(const PrimitiveType& value);
    
    // Upload vertex buffer and index buffer data to the gpu. This will also build the aabb and information needed for raycasting.
    void Upload();
    
    // Same as Upload except raycasting information will not be built. This avoids a possible spike when a custom mesh will never need to be raycasted against.
    void UploadNoRayCastInfo();
    
    // Same as Upload except raycasting information and the aabb will not be built. This should be used when the user is manually setting an aabb or frustum culling is disabled.
    void UploadNoRayCastInfoOrAabb();
    
    unsigned char mValue[320];
    
  protected:
    Mesh(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(Mesh);
  };
  
  // Renders a mesh.
  class Model : public Graphical
  {
  public:
    typedef Model ZilchSelf;
    typedef Graphical ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Mesh> GetMesh();
    
    void SetMesh(Mesh* value);
    
    unsigned char mValue[56];
    
  protected:
    Model(Zilch::NoType none) : Graphical(none) {}
    ZilchNoCopy(Model);
  };
  
  // Interface for configuring multiple color target outputs.
  class MultiRenderTarget : public ThreadSafeReferenceCounted
  {
  public:
    typedef MultiRenderTarget ZilchSelf;
    typedef ThreadSafeReferenceCounted ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<ColorTargetMrt> GetColorTarget();
    
    void SetColorTarget0(RenderTarget* value);
    
    void SetColorTarget1(RenderTarget* value);
    
    void SetColorTarget2(RenderTarget* value);
    
    void SetColorTarget3(RenderTarget* value);
    
    void SetColorTarget4(RenderTarget* value);
    
    void SetColorTarget5(RenderTarget* value);
    
    void SetColorTarget6(RenderTarget* value);
    
    void SetColorTarget7(RenderTarget* value);
    
    Zilch::HandleOf<BlendSettingsMrt> GetBlendSettings();
    
    Zilch::HandleOf<BlendSettings> GetBlendSettings0();
    
    void SetBlendSettings0(BlendSettings* value);
    
    Zilch::HandleOf<BlendSettings> GetBlendSettings1();
    
    void SetBlendSettings1(BlendSettings* value);
    
    Zilch::HandleOf<BlendSettings> GetBlendSettings2();
    
    void SetBlendSettings2(BlendSettings* value);
    
    Zilch::HandleOf<BlendSettings> GetBlendSettings3();
    
    void SetBlendSettings3(BlendSettings* value);
    
    Zilch::HandleOf<BlendSettings> GetBlendSettings4();
    
    void SetBlendSettings4(BlendSettings* value);
    
    Zilch::HandleOf<BlendSettings> GetBlendSettings5();
    
    void SetBlendSettings5(BlendSettings* value);
    
    Zilch::HandleOf<BlendSettings> GetBlendSettings6();
    
    void SetBlendSettings6(BlendSettings* value);
    
    Zilch::HandleOf<BlendSettings> GetBlendSettings7();
    
    void SetBlendSettings7(BlendSettings* value);
    
    unsigned char mValue[216];
    
  protected:
    MultiRenderTarget(Zilch::NoType none) : ThreadSafeReferenceCounted(none) {}
    ZilchNoCopy(MultiRenderTarget);
  };
  
  class MultiSprite : public BaseSprite
  {
  public:
    typedef MultiSprite ZilchSelf;
    typedef BaseSprite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetAnimationActive();
    
    void SetAnimationActive(bool value);
    
    float GetAnimationSpeed();
    
    void SetAnimationSpeed(float value);
    
    Zilch::HandleOf<MultiSpriteEntry> Get(const Zilch::Integer2& p0);
    
    void Set(const Zilch::Integer2& p0, SpriteSource* p1);
    
    void Clear();
    
    Zilch::HandleOf<MultiSpriteEntryRange> All();
    
    unsigned char mValue[120];
    
  protected:
    MultiSprite(Zilch::NoType none) : BaseSprite(none) {}
    ZilchNoCopy(MultiSprite);
  };
  
  class MultiSpriteEntry : public Zilch::ReferenceType
  {
  public:
    typedef MultiSpriteEntry ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Integer2 GetIndex();
    
    Zilch::HandleOf<SpriteSource> GetSpriteSource();
    
    unsigned char mValue[64];
    
  protected:
    MultiSpriteEntry(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(MultiSpriteEntry);
  };
  
  class Particle : public Zilch::ReferenceType
  {
  public:
    typedef Particle ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetTime();
    
    void SetTime(float value);
    
    float GetLifetime();
    
    void SetLifetime(float value);
    
    float GetSize();
    
    void SetSize(float value);
    
    float GetRotation();
    
    void SetRotation(float value);
    
    float GetRotationalVelocity();
    
    void SetRotationalVelocity(float value);
    
    Zilch::Real3 GetPosition();
    
    void SetPosition(const Zilch::Real3& value);
    
    Zilch::Real3 GetVelocity();
    
    void SetVelocity(const Zilch::Real3& value);
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    float GetWanderAngle();
    
    void SetWanderAngle(float value);
    
    unsigned char mValue[72];
    
  protected:
    Particle(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Particle);
  };
  
  // Particle Animator Interface. Particle Animators effect particles in the system.
  class ParticleAnimator : public Component
  {
  public:
    typedef ParticleAnimator ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[24];
    
  protected:
    ParticleAnimator(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ParticleAnimator);
  };
  
  class ParticleCollisionPlane : public ParticleAnimator
  {
  public:
    typedef ParticleCollisionPlane ZilchSelf;
    typedef ParticleAnimator ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    SystemSpace GetPlaneSpace();
    
    void SetPlaneSpace(const SystemSpace& value);
    
    Zilch::Real3 GetPlanePosition();
    
    void SetPlanePosition(const Zilch::Real3& value);
    
    Zilch::Real3 GetPlaneNormal();
    
    void SetPlaneNormal(const Zilch::Real3& value);
    
    float GetRestitution();
    
    void SetRestitution(float value);
    
    float GetFriction();
    
    void SetFriction(float value);
    
    unsigned char mValue[40];
    
  protected:
    ParticleCollisionPlane(Zilch::NoType none) : ParticleAnimator(none) {}
    ZilchNoCopy(ParticleCollisionPlane);
  };
  
  class ParticleCollisionHeightmap : public ParticleAnimator
  {
  public:
    typedef ParticleCollisionHeightmap ZilchSelf;
    typedef ParticleAnimator ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<CogPath> GetHeightMap();
    
    void SetHeightMap(CogPath* value);
    
    float GetRestitution();
    
    void SetRestitution(float value);
    
    float GetFriction();
    
    void SetFriction(float value);
    
    unsigned char mValue[72];
    
  protected:
    ParticleCollisionHeightmap(Zilch::NoType none) : ParticleAnimator(none) {}
    ZilchNoCopy(ParticleCollisionHeightmap);
  };
  
  // Particle emitters add new particles to the system and control where the particles will appear (sphere emitter, mesh emitter, etc)
  class ParticleEmitter : public Component
  {
  public:
    typedef ParticleEmitter ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[48];
    
  protected:
    ParticleEmitter(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ParticleEmitter);
  };
  
  // An interface for generating and managing particles of a generic definition using emitters and animators.
  class ParticleSystem : public Graphical
  {
  public:
    typedef ParticleSystem ZilchSelf;
    typedef Graphical ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetBoundingBoxSize();
    
    void SetBoundingBoxSize(float value);
    
    bool GetChildSystem();
    
    void SetChildSystem(bool value);
    
    SystemSpace GetSystemSpace();
    
    void SetSystemSpace(const SystemSpace& value);
    
    float GetWarmUpTime();
    
    void SetWarmUpTime(float value);
    
    bool GetPreviewInEditor();
    
    void SetPreviewInEditor(bool value);
    
    // A list of all particles currently active in the system.
    Zilch::HandleOf<ParticleListRange> AllParticles();
    
    // Clear all current particles.
    void Clear();
    
    unsigned char mValue[120];
    
  protected:
    ParticleSystem(Zilch::NoType none) : Graphical(none) {}
    ZilchNoCopy(ParticleSystem);
  };
  
  class MaterialBlockProxy : public MaterialBlock
  {
  public:
    typedef MaterialBlockProxy ZilchSelf;
    typedef MaterialBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    MaterialBlockProxy(Zilch::NoType none) : MaterialBlock(none) {}
    ZilchNoCopy(MaterialBlockProxy);
  };
  
  // How Materials are categorized, determines which graphicals are drawn in a render pass.
  class RenderGroup : public DataResource
  {
  public:
    typedef RenderGroup ZilchSelf;
    typedef DataResource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Returns whether or not the given RenderGroup is a sub group of this.
    bool IsSubRenderGroup(RenderGroup* renderGroup);
    
    // Returns whether or not this is a sub group of the given RenderGroup.
    bool IsSubRenderGroupOf(RenderGroup* renderGroup);
    
    Zilch::HandleOf<MaterialList> GetMaterials();
    
    Zilch::HandleOf<MaterialList> GetReferencedByList();
    
    GraphicalSortMethod GetGraphicalSortMethod();
    
    void SetGraphicalSortMethod(const GraphicalSortMethod& value);
    
    Zilch::HandleOf<RenderGroup> GetParentRenderGroup();
    
    void SetParentRenderGroup(RenderGroup* value);
    
    Zilch::HandleOf<ChildRenderGroupList> GetChildRenderGroups();
    
    unsigned char mValue[648];
    
  protected:
    RenderGroup(Zilch::NoType none) : DataResource(none) {}
    ZilchNoCopy(RenderGroup);
  };
  
  class RenderGroupList : public SafeId32EventObject
  {
  public:
    typedef RenderGroupList ZilchSelf;
    typedef SafeId32EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Adds the RenderGroup to this Material's list. Runtime resources only.
    void Add(RenderGroup* renderGroup);
    
    // Removes the RenderGroup from this Material's list. Runtime resources only.
    void Remove(RenderGroup* renderGroup);
    
    // Range of all resources in the list.
    Zilch::HandleOf<ArrayHandleOfRenderGroup> All();
    
    unsigned char mValue[72];
    
  protected:
    RenderGroupList(Zilch::NoType none) : SafeId32EventObject(none) {}
    ZilchNoCopy(RenderGroupList);
  };
  
  // Contains all output targets and render settings needed for a render task.
  class RenderSettings : public Zilch::ReferenceType
  {
  public:
    typedef RenderSettings ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    void SetColorTarget(RenderTarget* value);
    
    void SetDepthTarget(RenderTarget* value);
    
    Zilch::HandleOf<MultiRenderTarget> GetMultiRenderTarget();
    
    Zilch::HandleOf<BlendSettings> GetBlendSettings();
    
    void SetBlendSettings(BlendSettings* value);
    
    Zilch::HandleOf<DepthSettings> GetDepthSettings();
    
    void SetDepthSettings(DepthSettings* value);
    
    CullMode GetCullMode();
    
    void SetCullMode(const CullMode& value);
    
    Zilch::HandleOf<ShaderInputs> GetGlobalShaderInputs();
    
    void SetGlobalShaderInputs(ShaderInputs* value);
    
    unsigned char mValue[440];
    
  protected:
    RenderSettings(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(RenderSettings);
  };
  
  // Interface for rendering output. Texture data is managed and recycled by the engine.
  class RenderTarget : public SafeId32
  {
  public:
    typedef RenderTarget ZilchSelf;
    typedef SafeId32 ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Texture> GetTexture();
    
    // Allows the managed Texture being referenced by this RenderTarget to be reused by the renderer if the same specifications are requested again. Also deletes this RenderTarget.
    void Release();
    
    unsigned char mValue[64];
    
  protected:
    RenderTarget(Zilch::NoType none) : SafeId32(none) {}
    ZilchNoCopy(RenderTarget);
  };
  
  // Used when requesting a RenderTarget to configure how its texture is sampled.
  class SamplerSettings : public Zilch::ReferenceType
  {
  public:
    typedef SamplerSettings ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    TextureAddressing GetAddressingX();
    
    void SetAddressingX(const TextureAddressing& value);
    
    TextureAddressing GetAddressingY();
    
    void SetAddressingY(const TextureAddressing& value);
    
    TextureFiltering GetFiltering();
    
    void SetFiltering(const TextureFiltering& value);
    
    TextureCompareMode GetCompareMode();
    
    void SetCompareMode(const TextureCompareMode& value);
    
    TextureCompareFunc GetCompareFunc();
    
    void SetCompareFunc(const TextureCompareFunc& value);
    
    unsigned char mValue[20];
    
  protected:
    SamplerSettings(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SamplerSettings);
  };
  
  // Utility selection behavior for objects in the editor.
  class SelectionIcon : public Component
  {
  public:
    typedef SelectionIcon ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetVisible();
    
    void SetVisible(bool value);
    
    bool GetVisibilityEvents();
    
    void SetVisibilityEvents(bool value);
    
    Zilch::HandleOf<Material> GetMaterial();
    
    void SetMaterial(Material* value);
    
    Zilch::HandleOf<ShaderInputs> GetShaderInputs();
    
    void SetShaderInputs(ShaderInputs* value);
    
    Zilch::HandleOf<SpriteSource> GetSpriteSource();
    
    void SetSpriteSource(SpriteSource* value);
    
    float GetViewScale();
    
    void SetViewScale(float value);
    
    bool GetOverrideSelections();
    
    void SetOverrideSelections(bool value);
    
    unsigned char mValue[320];
    
  protected:
    SelectionIcon(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SelectionIcon);
  };
  
  // A set of shader inputs for overriding values per object or globally.
  class ShaderInputs : public ReferenceCountedThreadSafeId32
  {
  public:
    typedef ShaderInputs ZilchSelf;
    typedef ReferenceCountedThreadSafeId32 ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static Zilch::HandleOf<ShaderInputs> Create();
    
    // Add an input value for a specific fragment.
    void Add(const Zilch::String& fragmentName, const Zilch::String& inputName, bool input);
    
    // Add an input value for a specific fragment.
    void Add(const Zilch::String& fragmentName, const Zilch::String& inputName, int input);
    
    // Add an input value for a specific fragment.
    void Add(const Zilch::String& __0, const Zilch::String& __1, const Zilch::Integer2& __2);
    
    // Add an input value for a specific fragment.
    void Add(const Zilch::String& __0, const Zilch::String& __1, const Zilch::Integer3& __2);
    
    // Add an input value for a specific fragment.
    void Add(const Zilch::String& __0, const Zilch::String& __1, const Zilch::Integer4& __2);
    
    // Add an input value for a specific fragment.
    void Add(const Zilch::String& fragmentName, const Zilch::String& inputName, float input);
    
    // Add an input value for a specific fragment.
    void Add(const Zilch::String& fragmentName, const Zilch::String& inputName, const Zilch::Real2& input);
    
    // Add an input value for a specific fragment.
    void Add(const Zilch::String& fragmentName, const Zilch::String& inputName, const Zilch::Real3& input);
    
    // Add an input value for a specific fragment.
    void Add(const Zilch::String& fragmentName, const Zilch::String& inputName, const Zilch::Real4& input);
    
    // Add an input value for a specific fragment.
    void Add(const Zilch::String& __0, const Zilch::String& __1, const Zilch::Real3x3& __2);
    
    // Add an input value for a specific fragment.
    void Add(const Zilch::String& __0, const Zilch::String& __1, const Zilch::Real4x4& __2);
    
    // Add an input value for a specific fragment.
    void Add(const Zilch::String& fragmentName, const Zilch::String& inputName, Texture* input);
    
    // Remove a specific input that was added.
    void Remove(const Zilch::String& fragmentName, const Zilch::String& inputName);
    
    // Remove all added inputs.
    void Clear();
    
    unsigned char mValue[48];
    
  protected:
    ShaderInputs(Zilch::NoType none) : ReferenceCountedThreadSafeId32(none) {}
    ZilchNoCopy(ShaderInputs);
  };
  
  // Stores a map of Bones so that SkinnedModels can collect transform matrices for mesh skinning.
  class Skeleton : public Component
  {
  public:
    typedef Skeleton ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[96];
    
  protected:
    Skeleton(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Skeleton);
  };
  
  // Renders a mesh using the transform hierarchy of a Skeleton to apply skinning.
  class SkinnedModel : public Graphical
  {
  public:
    typedef SkinnedModel ZilchSelf;
    typedef Graphical ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Mesh> GetMesh();
    
    void SetMesh(Mesh* value);
    
    Zilch::HandleOf<CogPath> GetSkeletonPath();
    
    void SetSkeletonPath(CogPath* value);
    
    unsigned char mValue[184];
    
  protected:
    SkinnedModel(Zilch::NoType none) : Graphical(none) {}
    ZilchNoCopy(SkinnedModel);
  };
  
  // A generated quad that addresses atlased image data for efficient frame-based animations and batched rendering.
  class Sprite : public BaseSprite
  {
  public:
    typedef Sprite ZilchSelf;
    typedef BaseSprite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<SpriteSource> GetSpriteSource();
    
    void SetSpriteSource(SpriteSource* value);
    
    bool GetFlipX();
    
    void SetFlipX(bool value);
    
    bool GetFlipY();
    
    void SetFlipY(bool value);
    
    bool GetAnimationActive();
    
    void SetAnimationActive(bool value);
    
    float GetAnimationSpeed();
    
    void SetAnimationSpeed(float value);
    
    int GetStartFrame();
    
    void SetStartFrame(int value);
    
    int GetCurrentFrame();
    
    void SetCurrentFrame(int value);
    
    unsigned char mValue[80];
    
  protected:
    Sprite(Zilch::NoType none) : BaseSprite(none) {}
    ZilchNoCopy(Sprite);
  };
  
  // A particle system that uses sprites to represent each particle.
  class SpriteParticleSystem : public ParticleSystem
  {
  public:
    typedef SpriteParticleSystem ZilchSelf;
    typedef ParticleSystem ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real4 GetVertexColor();
    
    void SetVertexColor(const Zilch::Real4& value);
    
    SpriteParticleGeometryMode GetGeometryMode();
    
    void SetGeometryMode(const SpriteParticleGeometryMode& value);
    
    Zilch::HandleOf<SpriteSource> GetSpriteSource();
    
    void SetSpriteSource(SpriteSource* value);
    
    SpriteParticleAnimationMode GetParticleAnimation();
    
    void SetParticleAnimation(const SpriteParticleAnimationMode& value);
    
    SpriteParticleSortMode GetParticleSort();
    
    void SetParticleSort(const SpriteParticleSortMode& value);
    
    float GetBeamBaseScale();
    
    void SetBeamBaseScale(float value);
    
    float GetBeamVelocityScale();
    
    void SetBeamVelocityScale(float value);
    
    unsigned char mValue[96];
    
  protected:
    SpriteParticleSystem(Zilch::NoType none) : ParticleSystem(none) {}
    ZilchNoCopy(SpriteParticleSystem);
  };
  
  class SpriteSource : public Resource
  {
  public:
    typedef SpriteSource ZilchSelf;
    typedef Resource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetFrameCount();
    
    void SetFrameCount(int value);
    
    Zilch::Real2 GetSize();
    
    Zilch::Real2 GetOrigin();
    
    unsigned char mValue[160];
    
  protected:
    SpriteSource(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(SpriteSource);
  };
  
  // Text that is rendered from a texture atlas in the same way that Sprites are.
  class SpriteText : public BaseSprite
  {
  public:
    typedef SpriteText ZilchSelf;
    typedef BaseSprite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetText();
    
    void SetText(const Zilch::String& value);
    
    Zilch::HandleOf<Font> GetFont();
    
    void SetFont(Font* value);
    
    int GetFontSize();
    
    void SetFontSize(int value);
    
    float GetPixelsPerUnit();
    
    void SetPixelsPerUnit(float value);
    
    TextAlign GetTextAlign();
    
    void SetTextAlign(const TextAlign& value);
    
    // Get the effective size in world space of the current text.
    Zilch::Real2 MeasureText();
    
    // Get the effective size in world space that the SpriteText would be if this was its text.
    Zilch::Real2 MeasureGivenText(const Zilch::String& text);
    
    // Get the position in world space of a character by index.
    Zilch::Real3 GetCharacterPosition(int characterIndex);
    
    unsigned char mValue[80];
    
  protected:
    SpriteText(Zilch::NoType none) : BaseSprite(none) {}
    ZilchNoCopy(SpriteText);
  };
  
  // Interface used to define unique render settings for a base RenderGroup and its sub RenderGroups.
  class SubRenderGroupPass : public SafeId32
  {
  public:
    typedef SubRenderGroupPass ZilchSelf;
    typedef SafeId32 ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Resets interface back to the initial creation state with a given base RenderGroup.
    void Reset(RenderGroup* baseRenderGroup);
    
    // Settings to use for the base or all sub RenderGroups that do not have specified settings. Without defaults, the base or any sub RenderGroup without settings will not render.
    void SetDefaultSettings(RenderSettings* defaultSettings, MaterialBlock* defaultPass);
    
    // Define the settings to use for a specific RenderGroup. Given RenderGroup must be a child of the base RenderGroup, or the base itself, that this was initialized with.
    void AddSubSettings(RenderSettings* subSettings, RenderGroup* subGroup, MaterialBlock* subPass);
    
    // Explicitely exclude a RenderGroup from rendering when there are default settings. Given RenderGroup must be a child of the base RenderGroup, or the base itself, that this was initialized with.
    void ExcludeSubRenderGroup(RenderGroup* subGroup);
    
    unsigned char mValue[96];
    
  protected:
    SubRenderGroupPass(Zilch::NoType none) : SafeId32(none) {}
    ZilchNoCopy(SubRenderGroupPass);
  };
  
  class TextDefinition : public Resource
  {
  public:
    typedef TextDefinition ZilchSelf;
    typedef Resource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    TextDefinition(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(TextDefinition);
  };
  
  // Data that represents a texture in the way that is intended to be used by graphics hardware.
  class Texture : public Resource
  {
  public:
    typedef Texture ZilchSelf;
    typedef Resource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Makes an anonymous Texture resource that can be defined by script and uploaded to the gpu.
    static Zilch::HandleOf<Texture> CreateRuntime();
    
    TextureType GetType();
    
    TextureCompression GetCompression();
    
    int GetWidth();
    
    int GetHeight();
    
    Zilch::Integer2 GetSize();
    
    TextureFormat GetFormat();
    
    TextureAddressing GetAddressingX();
    
    void SetAddressingX(const TextureAddressing& value);
    
    TextureAddressing GetAddressingY();
    
    void SetAddressingY(const TextureAddressing& value);
    
    TextureFiltering GetFiltering();
    
    void SetFiltering(const TextureFiltering& value);
    
    TextureAnisotropy GetAnisotropy();
    
    void SetAnisotropy(const TextureAnisotropy& value);
    
    TextureMipMapping GetMipMapping();
    
    void SetMipMapping(const TextureMipMapping& value);
    
    TextureCompareMode GetCompareMode();
    
    void SetCompareMode(const TextureCompareMode& value);
    
    TextureCompareFunc GetCompareFunc();
    
    void SetCompareFunc(const TextureCompareFunc& value);
    
    // Uploads the given texture data to the gpu, configured with the current settings of this Texture.
    void Upload(TextureData* textureData);
    
    // Uploads the given texture data, overwriting a sub region of the texture data that is already on the gpu.
    void SubUpload(TextureData* textureData, int xOffset, int yOffset);
    
    unsigned char mValue[96];
    
  protected:
    Texture(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(Texture);
  };
  
  // Modifiable texture data that can be used to upload to a runtime Texture resource. All formats use one interface for get/set, all values are converted to/from floats and unused channels are ignored. Integer formats are represented in the normalized range [0, 1].
  class TextureData : public Zilch::ReferenceType
  {
  public:
    typedef TextureData ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    TextureFormat GetFormat();
    
    int GetWidth();
    
    int GetHeight();
    
    int GetPixelCount();
    
    // Returns the pixel values at the given index.
    Zilch::Real4 Get(int index);
    
    // Returns the pixel values at the given index.
    Zilch::Real4 Get(int x, int y);
    
    // Sets the pixel values at the given index.
    void Set(int index, const Zilch::Real4& value);
    
    // Sets the pixel values at the given index.
    void Set(int x, int y, const Zilch::Real4& value);
    
    unsigned char mValue[32];
    
  protected:
    TextureData(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(TextureData);
  };
  
  // Vertex data and attribute semantics for defining data that can be uploaded to the gpu.
  class VertexBuffer : public SafeId32
  {
  public:
    typedef VertexBuffer ZilchSelf;
    typedef SafeId32 ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Adds an attribute to the definition of the vertices that are to be stored. Add the attributes in the order that they should be stored in memory on a vertex.
    void AddAttribute(const VertexSemantic& semantic, const VertexElementType& elementType, int elementCount);
    
    // Returns a range of attribute semantics in the order that they were added.
    Zilch::HandleOf<VertexSemanticRange> GetAttributes();
    
    // Adds data as bytes to the buffer, data is expected in the order of the attributes, one vertex after another.
    void AddByte(int value);
    
    // Adds data as bytes to the buffer, data is expected in the order of the attributes, one vertex after another.
    void AddByte(const Zilch::Integer2& __0);
    
    // Adds data as bytes to the buffer, data is expected in the order of the attributes, one vertex after another.
    void AddByte(const Zilch::Integer3& __0);
    
    // Adds data as bytes to the buffer, data is expected in the order of the attributes, one vertex after another.
    void AddByte(const Zilch::Integer4& __0);
    
    // Adds data as shorts to the buffer, data is expected in the order of the attributes, one vertex after another.
    void AddShort(int value);
    
    // Adds data as shorts to the buffer, data is expected in the order of the attributes, one vertex after another.
    void AddShort(const Zilch::Integer2& __0);
    
    // Adds data as shorts to the buffer, data is expected in the order of the attributes, one vertex after another.
    void AddShort(const Zilch::Integer3& __0);
    
    // Adds data as shorts to the buffer, data is expected in the order of the attributes, one vertex after another.
    void AddShort(const Zilch::Integer4& __0);
    
    // Adds data as floats to the buffer, data is expected in the order of the attributes, one vertex after another.
    void AddReal(float value);
    
    // Adds data as floats to the buffer, data is expected in the order of the attributes, one vertex after another.
    void AddReal(const Zilch::Real2& value);
    
    // Adds data as floats to the buffer, data is expected in the order of the attributes, one vertex after another.
    void AddReal(const Zilch::Real3& value);
    
    // Adds data as floats to the buffer, data is expected in the order of the attributes, one vertex after another.
    void AddReal(const Zilch::Real4& value);
    
    // Gets the data of an attribute of a vertex, returns values of 0 if read is invalid.
    Zilch::Real4 GetVertexData(int vertexIndex, const VertexSemantic& semantic);
    
    // Gets the data of an attribute of a vertex, throws exception if attribute info doesn't match or read is invalid.
    Zilch::Real4 GetVertexData(int vertexIndex, const VertexSemantic& semantic, const VertexElementType& type, int count);
    
    // Returns false if GetVertexData() would throw an exception with the same arguments.
    bool IsValidVertexData(int vertexIndex, const VertexSemantic& semantic, const VertexElementType& type, int count);
    
    // Clears all added attributes from the vertex definition so they can be redefined.
    void ClearAttributes();
    
    // Clears all added vertex data so new data can be added.
    void ClearData();
    
    // Returns the type that is used to store the given attribute, throws exception if the attribute is not in the vertex definition.
    VertexElementType GetElementType(const VertexSemantic& semantic);
    
    // Returns the number of elements stored for the given attribute, throws exception if the attribute is not in the vertex definition.
    int GetElementCount(const VertexSemantic& semantic);
    
    int GetVertexCount();
    
    unsigned char mValue[88];
    
  protected:
    VertexBuffer(Zilch::NoType none) : SafeId32(none) {}
    ZilchNoCopy(VertexBuffer);
  };
  
  class ViewportInterface : public Component
  {
  public:
    typedef ViewportInterface ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ViewportInterface(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ViewportInterface);
  };
  
  class ZilchFragment : public ZilchDocumentResource
  {
  public:
    typedef ZilchFragment ZilchSelf;
    typedef ZilchDocumentResource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ZilchFragment(Zilch::NoType none) : ZilchDocumentResource(none) {}
    ZilchNoCopy(ZilchFragment);
  };
  
  class ChildRenderGroupList : public RenderGroupList
  {
  public:
    typedef ChildRenderGroupList ZilchSelf;
    typedef RenderGroupList ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ChildRenderGroupList(Zilch::NoType none) : RenderGroupList(none) {}
    ZilchNoCopy(ChildRenderGroupList);
  };
  
  class Graphics : public Zilch::ReferenceType
  {
  public:
    typedef Graphics ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static Zilch::HandleOf<GraphicsDriverSupport> GetDriverSupport();
    
    unsigned char mValue[1];
    
  protected:
    Graphics(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Graphics);
  };
  
  // Basic Particle Animation Effects.
  class LinearParticleAnimator : public ParticleAnimator
  {
  public:
    typedef LinearParticleAnimator ZilchSelf;
    typedef ParticleAnimator ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetForce();
    
    void SetForce(const Zilch::Real3& value);
    
    Zilch::Real3 GetRandomForce();
    
    void SetRandomForce(const Zilch::Real3& value);
    
    float GetTorque();
    
    void SetTorque(float value);
    
    float GetGrowth();
    
    void SetGrowth(float value);
    
    float GetDampening();
    
    void SetDampening(float value);
    
    Zilch::Real3 GetTwist();
    
    void SetTwist(const Zilch::Real3& value);
    
    unsigned char mValue[48];
    
  protected:
    LinearParticleAnimator(Zilch::NoType none) : ParticleAnimator(none) {}
    ZilchNoCopy(LinearParticleAnimator);
  };
  
  class ParticleAttractor : public ParticleAnimator
  {
  public:
    typedef ParticleAttractor ZilchSelf;
    typedef ParticleAnimator ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    SystemSpace GetPositionSpace();
    
    void SetPositionSpace(const SystemSpace& value);
    
    Zilch::Real3 GetAttractPosition();
    
    void SetAttractPosition(const Zilch::Real3& value);
    
    float GetStrength();
    
    void SetStrength(float value);
    
    float GetMinDistance();
    
    void SetMinDistance(float value);
    
    float GetMaxDistance();
    
    void SetMaxDistance(float value);
    
    unsigned char mValue[32];
    
  protected:
    ParticleAttractor(Zilch::NoType none) : ParticleAnimator(none) {}
    ZilchNoCopy(ParticleAttractor);
  };
  
  // Linear interpolate colors across the particles lifetime.
  class ParticleColorAnimator : public ParticleAnimator
  {
  public:
    typedef ParticleColorAnimator ZilchSelf;
    typedef ParticleAnimator ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<ColorGradient> GetTimeGradient();
    
    void SetTimeGradient(ColorGradient* value);
    
    Zilch::HandleOf<ColorGradient> GetVelocityGradient();
    
    void SetVelocityGradient(ColorGradient* value);
    
    float GetMaxParticleSpeed();
    
    void SetMaxParticleSpeed(float value);
    
    unsigned char mValue[120];
    
  protected:
    ParticleColorAnimator(Zilch::NoType none) : ParticleAnimator(none) {}
    ZilchNoCopy(ParticleColorAnimator);
  };
  
  class ParticleTwister : public ParticleAnimator
  {
  public:
    typedef ParticleTwister ZilchSelf;
    typedef ParticleAnimator ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetAxis();
    
    void SetAxis(const Zilch::Real3& value);
    
    float GetStrength();
    
    void SetStrength(float value);
    
    float GetMinDistance();
    
    void SetMinDistance(float value);
    
    float GetMaxDistance();
    
    void SetMaxDistance(float value);
    
    unsigned char mValue[24];
    
  protected:
    ParticleTwister(Zilch::NoType none) : ParticleAnimator(none) {}
    ZilchNoCopy(ParticleTwister);
  };
  
  // Particle animator that causes particle to wander or smoothly vary directions.
  class ParticleWander : public ParticleAnimator
  {
  public:
    typedef ParticleWander ZilchSelf;
    typedef ParticleAnimator ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetWanderAngle();
    
    void SetWanderAngle(float value);
    
    float GetWanderAngleVariance();
    
    void SetWanderAngleVariance(float value);
    
    float GetWanderStrength();
    
    void SetWanderStrength(float value);
    
    unsigned char mValue[16];
    
  protected:
    ParticleWander(Zilch::NoType none) : ParticleAnimator(none) {}
    ZilchNoCopy(ParticleWander);
  };
  
  // Particle Emitter Shared.
  class ParticleEmitterShared : public ParticleEmitter
  {
  public:
    typedef ParticleEmitterShared ZilchSelf;
    typedef ParticleEmitter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetActive();
    
    void SetActive(bool value);
    
    float GetEmitDelay();
    
    void SetEmitDelay(float value);
    
    int GetEmitCount();
    
    void SetEmitCount(int value);
    
    float GetEmitRate();
    
    void SetEmitRate(float value);
    
    float GetEmitVariance();
    
    void SetEmitVariance(float value);
    
    float GetEmitRateSoftStartTime();
    
    void SetEmitRateSoftStartTime(float value);
    
    float GetSize();
    
    void SetSize(float value);
    
    float GetSizeVariance();
    
    void SetSizeVariance(float value);
    
    float GetLifetime();
    
    void SetLifetime(float value);
    
    float GetLifetimeVariance();
    
    void SetLifetimeVariance(float value);
    
    float GetSpin();
    
    void SetSpin(float value);
    
    float GetSpinVariance();
    
    void SetSpinVariance(float value);
    
    bool GetRandomSpin();
    
    void SetRandomSpin(bool value);
    
    float GetFill();
    
    void SetFill(float value);
    
    float GetEmitterVelocityPercent();
    
    void SetEmitterVelocityPercent(float value);
    
    Zilch::Real3 GetStartVelocity();
    
    void SetStartVelocity(const Zilch::Real3& value);
    
    Zilch::Real3 GetRandomVelocity();
    
    void SetRandomVelocity(const Zilch::Real3& value);
    
    Zilch::Real3 GetTangentVelocity();
    
    void SetTangentVelocity(const Zilch::Real3& value);
    
    Zilch::Real3 GetEmitterSize();
    
    void SetEmitterSize(const Zilch::Real3& value);
    
    bool GetFastMovingEmitter();
    
    void SetFastMovingEmitter(bool value);
    
    // Reset the number of particles to emit back to EmitCount.
    void ResetCount();
    
    unsigned char mValue[128];
    
  protected:
    ParticleEmitterShared(Zilch::NoType none) : ParticleEmitter(none) {}
    ZilchNoCopy(ParticleEmitterShared);
  };
  
  // Emits particles inside a box.
  class BoxParticleEmitter : public ParticleEmitterShared
  {
  public:
    typedef BoxParticleEmitter ZilchSelf;
    typedef ParticleEmitterShared ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    BoxParticleEmitter(Zilch::NoType none) : ParticleEmitterShared(none) {}
    ZilchNoCopy(BoxParticleEmitter);
  };
  
  // Emits particles on a mesh surface.
  class MeshParticleEmitter : public ParticleEmitterShared
  {
  public:
    typedef MeshParticleEmitter ZilchSelf;
    typedef ParticleEmitterShared ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Mesh> GetMesh();
    
    void SetMesh(Mesh* value);
    
    MeshEmitMode GetMeshEmitMode();
    
    void SetMeshEmitMode(const MeshEmitMode& value);
    
    float GetNormalExtrude();
    
    void SetNormalExtrude(float value);
    
    unsigned char mValue[144];
    
  protected:
    MeshParticleEmitter(Zilch::NoType none) : ParticleEmitterShared(none) {}
    ZilchNoCopy(MeshParticleEmitter);
  };
  
  // Emits particles inside a sphere.
  class SphericalParticleEmitter : public ParticleEmitterShared
  {
  public:
    typedef SphericalParticleEmitter ZilchSelf;
    typedef ParticleEmitterShared ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    SphericalParticleEmitter(Zilch::NoType none) : ParticleEmitterShared(none) {}
    ZilchNoCopy(SphericalParticleEmitter);
  };
  
  class ContactPointRange : public Zilch::ReferenceType
  {
  public:
    typedef ContactPointRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<ContactPointRange> GetAll();
    
    Zilch::HandleOf<ContactPoint> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[40];
    
  protected:
    ContactPointRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ContactPointRange);
  };
  
  class ContactRange : public Zilch::ReferenceType
  {
  public:
    typedef ContactRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<ContactRange> GetAll();
    
    Zilch::HandleOf<ContactGraphEdge> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[40];
    
  protected:
    ContactRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ContactRange);
  };
  
  class JointRange : public Zilch::ReferenceType
  {
  public:
    typedef JointRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<JointRange> GetAll();
    
    Zilch::HandleOf<JointGraphEdge> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[40];
    
  protected:
    JointRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(JointRange);
  };
  
  class CastResultsRange : public Zilch::ReferenceType
  {
  public:
    typedef CastResultsRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<CastResultsRange> GetAll();
    
    Zilch::HandleOf<CastResult> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[48];
    
  protected:
    CastResultsRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CastResultsRange);
  };
  
  class CastResultsArrayRange : public Zilch::ReferenceType
  {
  public:
    typedef CastResultsArrayRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<CastResultsArrayRange> GetAll();
    
    Zilch::HandleOf<CastResult> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[16];
    
  protected:
    CastResultsArrayRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CastResultsArrayRange);
  };
  
  class SweepResultRange : public Zilch::ReferenceType
  {
  public:
    typedef SweepResultRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<SweepResultRange> GetAll();
    
    Zilch::HandleOf<SweepResult> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[48];
    
  protected:
    SweepResultRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SweepResultRange);
  };
  
  class PhysicsMeshVertexRange : public Zilch::ReferenceType
  {
  public:
    typedef PhysicsMeshVertexRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<PhysicsMeshVertexRange> GetAll();
    
    Zilch::Real3 GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[64];
    
  protected:
    PhysicsMeshVertexRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PhysicsMeshVertexRange);
  };
  
  class PhysicsMeshIndexRange : public Zilch::ReferenceType
  {
  public:
    typedef PhysicsMeshIndexRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<PhysicsMeshIndexRange> GetAll();
    
    int GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[64];
    
  protected:
    PhysicsMeshIndexRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(PhysicsMeshIndexRange);
  };
  
  // What kind of dynamics this body should have. Determines if forces are integrated and if collisions are resolved.
  class RigidBodyDynamicState : public Zilch::Enum
  {
  public:
    typedef RigidBodyDynamicState ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static RigidBodyDynamicState GetDynamic();
    
    static RigidBodyDynamicState GetStatic();
    
    static RigidBodyDynamicState GetKinematic();
    
    RigidBodyDynamicState();
  };
  
  // Controls custom cast filtering via the CastFilterEvent . Allows custom filter logic per object.
  class CastFilterState : public Zilch::Enum
  {
  public:
    typedef CastFilterState ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static CastFilterState GetAccept();
    
    static CastFilterState GetReject();
    
    static CastFilterState GetDefaultBehavior();
    
    CastFilterState();
  };
  
  class PhysicsEffectType : public Zilch::Enum
  {
  public:
    typedef PhysicsEffectType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static PhysicsEffectType GetDrag();
    
    static PhysicsEffectType GetFlow();
    
    static PhysicsEffectType GetForce();
    
    static PhysicsEffectType GetGravity();
    
    static PhysicsEffectType GetThrust();
    
    static PhysicsEffectType GetVortex();
    
    static PhysicsEffectType GetWind();
    
    static PhysicsEffectType GetTorque();
    
    static PhysicsEffectType GetPointGravity();
    
    static PhysicsEffectType GetPointForce();
    
    static PhysicsEffectType GetBuoyancy();
    
    static PhysicsEffectType GetCustom();
    
    static PhysicsEffectType GetInvalid();
    
    PhysicsEffectType();
  };
  
  // What kind of position correction should be applied for any constraint that is set to Inherit.
  class PhysicsSolverPositionCorrection : public Zilch::Enum
  {
  public:
    typedef PhysicsSolverPositionCorrection ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static PhysicsSolverPositionCorrection GetBaumgarte();
    
    static PhysicsSolverPositionCorrection GetPostStabilization();
    
    PhysicsSolverPositionCorrection();
  };
  
  // What kind of position correction behavior is desired for constraint or constraint type.
  class ConstraintPositionCorrection : public Zilch::Enum
  {
  public:
    typedef ConstraintPositionCorrection ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static ConstraintPositionCorrection GetBaumgarte();
    
    static ConstraintPositionCorrection GetPostStabilization();
    
    static ConstraintPositionCorrection GetInherit();
    
    ConstraintPositionCorrection();
  };
  
  // What kind of a constraint solver should be used. A few pre-defined types meant for comparing performance.
  class PhysicsSolverType : public Zilch::Enum
  {
  public:
    typedef PhysicsSolverType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static PhysicsSolverType GetBasic();
    
    static PhysicsSolverType GetNormal();
    
    static PhysicsSolverType GetGenericBasic();
    
    static PhysicsSolverType GetThreaded();
    
    PhysicsSolverType();
  };
  
  // What kind of solver technique to use for position correction. Mainly for testing.
  class PhysicsSolverSubType : public Zilch::Enum
  {
  public:
    typedef PhysicsSolverSubType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static PhysicsSolverSubType GetBasicSolving();
    
    static PhysicsSolverSubType GetBlockSolving();
    
    PhysicsSolverSubType();
  };
  
  // How should islands be built. Internal for testing (mostly legacy).
  class PhysicsIslandType : public Zilch::Enum
  {
  public:
    typedef PhysicsIslandType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static PhysicsIslandType GetComposites();
    
    static PhysicsIslandType GetKinematics();
    
    static PhysicsIslandType GetForcedOne();
    
    PhysicsIslandType();
  };
  
  // What kind of pre-processing strategy should be used for merging islands.
  class PhysicsIslandPreProcessingMode : public Zilch::Enum
  {
  public:
    typedef PhysicsIslandPreProcessingMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static PhysicsIslandPreProcessingMode GetNone();
    
    static PhysicsIslandPreProcessingMode GetColliderCount();
    
    static PhysicsIslandPreProcessingMode GetConstraintCount();
    
    PhysicsIslandPreProcessingMode();
  };
  
  // How to compute the tangents for a contact point. Mainly for testing.
  class PhysicsContactTangentTypes : public Zilch::Enum
  {
  public:
    typedef PhysicsContactTangentTypes ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static PhysicsContactTangentTypes GetOrthonormalTangents();
    
    static PhysicsContactTangentTypes GetVelocityTangents();
    
    static PhysicsContactTangentTypes GetRandomTangents();
    
    PhysicsContactTangentTypes();
  };
  
  class JointFrameOfReference : public Zilch::Enum
  {
  public:
    typedef JointFrameOfReference ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static JointFrameOfReference GetObjectA();
    
    static JointFrameOfReference GetObjectB();
    
    JointFrameOfReference();
  };
  
  // Defines a primary direction for an axis.
  class AxisDirection : public Zilch::Enum
  {
  public:
    typedef AxisDirection ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static AxisDirection GetX();
    
    static AxisDirection GetY();
    
    static AxisDirection GetZ();
    
    AxisDirection();
  };
  
  // Describes how force values are interpolated between min/max values.
  class PhysicsEffectInterpolationType : public Zilch::Enum
  {
  public:
    typedef PhysicsEffectInterpolationType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static PhysicsEffectInterpolationType GetLinear();
    
    static PhysicsEffectInterpolationType GetQuadratic();
    
    PhysicsEffectInterpolationType();
  };
  
  // Describes how interpolation is performed (if at all) outside of a physics effect's max distance.
  class PhysicsEffectEndCondition : public Zilch::Enum
  {
  public:
    typedef PhysicsEffectEndCondition ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static PhysicsEffectEndCondition GetClampToMax();
    
    static PhysicsEffectEndCondition GetContinueFalloff();
    
    static PhysicsEffectEndCondition GetNoEffect();
    
    PhysicsEffectEndCondition();
  };
  
  // Represents what dimensions a RigidBody should operate in (how many degrees of freedom it has by default).
  class Mode2DStates : public Zilch::Enum
  {
  public:
    typedef Mode2DStates ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static Mode2DStates GetMode2D();
    
    static Mode2DStates GetInheritFromSpace();
    
    static Mode2DStates GetMode3D();
    
    Mode2DStates();
  };
  
  // How should a capsule collider respond to non-uniform scale?
  class CapsuleScalingMode : public Zilch::Enum
  {
  public:
    typedef CapsuleScalingMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static CapsuleScalingMode GetPreserveHeight();
    
    static CapsuleScalingMode GetPreserveScale();
    
    CapsuleScalingMode();
  };
  
  // Controls what parts of collision detection/resolution are run for a CollisionGroup pair.
  class CollisionFilterCollisionFlags : public Zilch::Enum
  {
  public:
    typedef CollisionFilterCollisionFlags ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static CollisionFilterCollisionFlags GetSkipDetection();
    
    static CollisionFilterCollisionFlags GetSkipResolution();
    
    static CollisionFilterCollisionFlags GetResolve();
    
    CollisionFilterCollisionFlags();
  };
  
  // What kind of filter block this is. These blocks are used to send out/override collision group events of certain types (collision started, etc...)
  class CollisionFilterBlockType : public Zilch::Enum
  {
  public:
    typedef CollisionFilterBlockType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static CollisionFilterBlockType GetCollisionStartedBlock();
    
    static CollisionFilterBlockType GetCollisionPersistedBlock();
    
    static CollisionFilterBlockType GetCollisionEndedBlock();
    
    static CollisionFilterBlockType GetPreSolveBlock();
    
    CollisionFilterBlockType();
  };
  
  // When should debug drawing of a spring system happen.
  class SpringDebugDrawMode : public Zilch::Enum
  {
  public:
    typedef SpringDebugDrawMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static SpringDebugDrawMode GetNone();
    
    static SpringDebugDrawMode GetWhenNoMesh();
    
    static SpringDebugDrawMode GetAlways();
    
    SpringDebugDrawMode();
  };
  
  // How should springs be drawn?
  class SpringDebugDrawType : public Zilch::Enum
  {
  public:
    typedef SpringDebugDrawType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static SpringDebugDrawType GetNormal();
    
    static SpringDebugDrawType GetSorted();
    
    SpringDebugDrawType();
  };
  
  // How should springs be sorted for solving. This effects the convergence rate of a system.
  class SpringSortOrder : public Zilch::Enum
  {
  public:
    typedef SpringSortOrder ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static SpringSortOrder GetNone();
    
    static SpringSortOrder GetTopDown();
    
    static SpringSortOrder GetBottomUp();
    
    SpringSortOrder();
  };
  
  class JointTypes : public Zilch::Enum
  {
  public:
    typedef JointTypes ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static JointTypes GetStickJoint();
    
    static JointTypes GetPositionJoint();
    
    static JointTypes GetPrismaticJoint();
    
    static JointTypes GetRevoluteJoint();
    
    static JointTypes GetUniversalJoint();
    
    static JointTypes GetWeldJoint();
    
    static JointTypes GetFixedAngleJoint();
    
    static JointTypes GetWheelJoint();
    
    static JointTypes GetGearJoint();
    
    static JointTypes GetPulleyJoint();
    
    static JointTypes GetManipulatorJoint();
    
    static JointTypes GetPhyGunJoint();
    
    static JointTypes GetLinearAxisJoint();
    
    static JointTypes GetPrismaticJoint2d();
    
    static JointTypes GetRevoluteJoint2d();
    
    static JointTypes GetWheelJoint2d();
    
    static JointTypes GetRelativeVelocityJoint();
    
    static JointTypes GetUprightJoint();
    
    static JointTypes GetCustomJoint();
    
    JointTypes();
  };
  
  class CollisionFilterMetaComposition : public MetaComposition
  {
  public:
    typedef CollisionFilterMetaComposition ZilchSelf;
    typedef MetaComposition ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    CollisionFilterMetaComposition(Zilch::NoType none) : MetaComposition(none) {}
    ZilchNoCopy(CollisionFilterMetaComposition);
  };
  
  class PhysicsSolverConfigMetaComposition : public MetaComposition
  {
  public:
    typedef PhysicsSolverConfigMetaComposition ZilchSelf;
    typedef MetaComposition ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    PhysicsSolverConfigMetaComposition(Zilch::NoType none) : MetaComposition(none) {}
    ZilchNoCopy(PhysicsSolverConfigMetaComposition);
  };
  
  // Common interface for all collision events. Contains shared methods to access contact information for a collision.
  class BaseCollisionEvent : public Event
  {
  public:
    typedef BaseCollisionEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Cog> GetObject();
    
    Zilch::HandleOf<Cog> GetOtherObject();
    
    int GetContactPointCount();
    
    bool GetIsGhost();
    
    Zilch::HandleOf<ContactPointRange> GetContactPoints();
    
    unsigned char mValue[32];
    
  protected:
    BaseCollisionEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(BaseCollisionEvent);
  };
  
  // Information about a collision in physics. Sent when collisions start, persist, or end.
  class CollisionEvent : public BaseCollisionEvent
  {
  public:
    typedef CollisionEvent ZilchSelf;
    typedef BaseCollisionEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<ContactPoint> GetFirstPoint();
    
    unsigned char mValue[80];
    
  protected:
    CollisionEvent(Zilch::NoType none) : BaseCollisionEvent(none) {}
    ZilchNoCopy(CollisionEvent);
  };
  
  // An event sent out when specified by a CollisionFilter in a CollisionTable. Used to hook up events based upon certain CollisionGroup types colliding.
  class CollisionGroupEvent : public BaseCollisionEvent
  {
  public:
    typedef CollisionGroupEvent ZilchSelf;
    typedef BaseCollisionEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetTypeAName();
    
    Zilch::String GetTypeBName();
    
    Zilch::HandleOf<ContactPoint> GetFirstPoint();
    
    unsigned char mValue[24];
    
  protected:
    CollisionGroupEvent(Zilch::NoType none) : BaseCollisionEvent(none) {}
    ZilchNoCopy(CollisionGroupEvent);
  };
  
  // Sent by CustomJoint before solving constraints. Used to configure constraints before the physics system begins solving.
  class CustomJointEvent : public Event
  {
  public:
    typedef CustomJointEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<CustomJoint> GetOwner();
    
    void SetOwner(CustomJoint* value);
    
    float GetDt();
    
    void SetDt(float value);
    
    unsigned char mValue[16];
    
  protected:
    CustomJointEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(CustomJointEvent);
  };
  
  // Sent out when a joint reaches some condition. Currently sent out when a limit is reached or an impulse's limit is exceeded.
  class JointEvent : public Event
  {
  public:
    typedef JointEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Cog> GetObjectA();
    
    Zilch::HandleOf<Cog> GetObjectB();
    
    Zilch::HandleOf<Cog> GetJointCog();
    
    Zilch::HandleOf<Joint> GetJoint();
    
    unsigned char mValue[48];
    
  protected:
    JointEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(JointEvent);
  };
  
  // Event data for applying custom physics effects.
  class CustomPhysicsEffectEvent : public Event
  {
  public:
    typedef CustomPhysicsEffectEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetDt();
    
    void SetDt(float value);
    
    Zilch::HandleOf<CustomPhysicsEffect> GetEffect();
    
    void SetEffect(CustomPhysicsEffect* value);
    
    Zilch::HandleOf<RigidBody> GetRigidBody();
    
    void SetRigidBody(RigidBody* value);
    
    unsigned char mValue[24];
    
  protected:
    CustomPhysicsEffectEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(CustomPhysicsEffectEvent);
  };
  
  // Allows a user to filter out an object during any cast in physics.
  class CastFilterEvent : public Event
  {
  public:
    typedef CastFilterEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Cog> GetObject();
    
    CastFilterState GetFilterState();
    
    void SetFilterState(const CastFilterState& value);
    
    unsigned char mValue[16];
    
  protected:
    CastFilterEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(CastFilterEvent);
  };
  
  // Event sent out when a CollisionFilter contains a PreSolveBlock. This event is sent out after collision detection but before collision resolution. This can be used to alter the state of the two objects in a collision before they're resolved (e.g. turn one from static to dynamic). Warning: Do not delete objects or do any other significant changes as this may destabilize the system.
  class PreSolveEvent : public BaseCollisionEvent
  {
  public:
    typedef PreSolveEvent ZilchSelf;
    typedef BaseCollisionEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetRestitution();
    
    void SetRestitution(float value);
    
    float GetFriction();
    
    void SetFriction(float value);
    
    unsigned char mValue[24];
    
  protected:
    PreSolveEvent(Zilch::NoType none) : BaseCollisionEvent(none) {}
    ZilchNoCopy(PreSolveEvent);
  };
  
  class PhysicsEngine : public System
  {
  public:
    typedef PhysicsEngine ZilchSelf;
    typedef System ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[176];
    
  protected:
    PhysicsEngine(Zilch::NoType none) : System(none) {}
    ZilchNoCopy(PhysicsEngine);
  };
  
  // The PhysicsSpace is an "instance" of a world. This world manages and stores all of the other physical components of this world. PhysicSpaces act independently of each other.
  class PhysicsSpace : public Component
  {
  public:
    typedef PhysicsSpace ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetSubStepCount();
    
    void SetSubStepCount(int value);
    
    bool GetAllowSleep();
    
    void SetAllowSleep(bool value);
    
    bool GetMode2D();
    
    void SetMode2D(bool value);
    
    bool GetDeterministic();
    
    void SetDeterministic(bool value);
    
    Zilch::HandleOf<CollisionTable> GetCollisionTable();
    
    void SetCollisionTable(CollisionTable* value);
    
    Zilch::HandleOf<PhysicsSolverConfig> GetPhysicsSolverConfig();
    
    void SetPhysicsSolverConfig(PhysicsSolverConfig* value);
    
    Zilch::String GetDynamicBroadphaseType();
    
    void SetDynamicBroadphaseType(const Zilch::String& value);
    
    Zilch::String GetStaticBroadphaseType();
    
    void SetStaticBroadphaseType(const Zilch::String& value);
    
    // Filters two cogs to not resolve collisions with each other. This is a runtime only feature and will not be saved.
    void AddPairFilter(Cog* cog1, Cog* cog2);
    
    // Adds a filter to ignore collision between both hierarchies passed in. See AddPairFilter for more info.
    void AddHierarchyPairFilter(Cog* cog1, Cog* cog2);
    
    // Removes the filter between two cogs allowing collisions to be computed as normal.
    void RemovePairFilter(Cog* cog1, Cog* cog2);
    
    // Removes the filters between both hierarchies. See RemovePairFilter for more info.
    void RemoveHierarchyPairFilter(Cog* cog1, Cog* cog2);
    
    // Forces all queued computations in physics to be updated now. Should only be used for debugging.
    void FlushPhysicsQueue();
    
    // Finds the first collider that a ray hits. A default CastFilter will be used.
    Zilch::HandleOf<CastResult> CastRayFirst(const Ray& worldRay);
    
    // Finds the first collider that a ray hits using the given filter.
    Zilch::HandleOf<CastResult> CastRayFirst(const Ray& worldRay, CastFilter* filter);
    
    // Finds all colliders in the space that a ray hits. This returns up to maxCount number of objects. A default CastFilter will be used.
    Zilch::HandleOf<CastResultsRange> CastRay(const Ray& worldRay, int maxCount);
    
    // Finds all colliders in the space that a ray hits using the given filter. This returns up to maxCount number of objects.
    Zilch::HandleOf<CastResultsRange> CastRay(const Ray& worldRay, int maxCount, CastFilter* filter);
    
    // Finds all colliders in the space that a line segment hits. This returns up to maxCount number of objects. A default CastFilter will be used.
    Zilch::HandleOf<CastResultsRange> CastSegment(const Segment& segment, int maxCount);
    
    // Finds all colliders in the space that a line segment hits using the given filter. This returns up to maxCount number of objects.
    Zilch::HandleOf<CastResultsRange> CastSegment(const Segment& segment, int maxCount, CastFilter* filter);
    
    // Finds all colliders in the space that an Aabb hits using the given filter. This returns up to maxCount number of objects.
    Zilch::HandleOf<CastResultsRange> CastAabb(const Aabb& aabb, int maxCount, CastFilter* filter);
    
    // Finds all colliders in the space that a Sphere hits using the given filter. This returns up to maxCount number of objects.
    Zilch::HandleOf<CastResultsRange> CastSphere(const Sphere& sphere, int maxCount, CastFilter* filter);
    
    // Finds all colliders in the space that a Frustum hits using the given filter. This returns up to maxCount number of objects.
    Zilch::HandleOf<CastResultsRange> CastFrustum(const Frustum& frustum, int maxCount, CastFilter* filter);
    
    // Finds all colliders in the space that another collider hits using the given filter. The test collider's position can be offset to test at a different location. This returns up to maxCount number of objects.
    Zilch::HandleOf<CastResultsRange> CastCollider(const Zilch::Real3& offset, Collider* testCollider, CastFilter* filter);
    
    // Dispatches an event to all objects within the given sphere. Uses the default cast filter.
    void DispatchWithinSphere(const Sphere& sphere, const Zilch::String& eventName, Event* toSend);
    
    // Dispatches an event to all objects within the given sphere using the provided cast filter.
    void DispatchWithinSphere(const Sphere& sphere, CastFilter* filter, const Zilch::String& eventName, Event* toSend);
    
    // Dispatches an event to all objects within the given aabb. Uses the default cast filter.
    void DispatchWithinAabb(const Aabb& aabb, const Zilch::String& eventName, Event* toSend);
    
    // Dispatches an event to all objects within the given aabb using the provided cast filter.
    void DispatchWithinAabb(const Aabb& aabb, CastFilter* filter, const Zilch::String& eventName, Event* toSend);
    
    // Performs a swept cast with a collider's shape and a given velocity. Returns a range of all objects the collider could've hit within 'dt' time.
    Zilch::HandleOf<SweepResultRange> SweepCollider(Collider* collider, const Zilch::Real3& velocity, float dt, CastFilter* filter);
    
    // Creates a joint by name (e.g. StickJoint) between two cogs. The world points of the joint are both set to worldPoint.
    Zilch::HandleOf<Cog> CreateJoint(Cog* cog0, Cog* cog1, const Zilch::String& jointName, const Zilch::Real3& worldPoint);
    
    // Returns a debug string stating why physics does or doesn't think these two objects should be colliding.
    Zilch::String WhyAreTheyNotColliding(Cog* cog1, Cog* cog2);
    
    unsigned char mValue[640];
    
  protected:
    PhysicsSpace(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(PhysicsSpace);
  };
  
  // RigidBody defines the inertia (mass, velocity, etc...) of a rigid object. Any PhysicsEffects attached to a RigidBody without a region will be applied to the center of mass of this body.
  class RigidBody : public Component
  {
  public:
    typedef RigidBody ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetVelocity();
    
    void SetVelocity(const Zilch::Real3& value);
    
    Zilch::Real3 GetAngularVelocity();
    
    void SetAngularVelocity(const Zilch::Real3& value);
    
    // Adds to the current linear velocity (world space). Will wake up the body if it's asleep.
    void ApplyLinearVelocity(const Zilch::Real3& linear);
    
    // Adds to the current angular velocity (world space). Will wake up the body if it's asleep.
    void ApplyAngularVelocity(const Zilch::Real3& angular);
    
    // Applies a velocity at a world space point on the object. Results in a change to linear and angular velocity. Will wake up the body if it's asleep.
    void ApplyVelocityAtPoint(const Zilch::Real3& velocity, const Zilch::Real3& worldPoint);
    
    // Computes the linear point velocity of world-space point.
    Zilch::Real3 GetPointVelocity(const Zilch::Real3& worldPoint);
    
    Zilch::Real3 GetForce();
    
    void SetForce(const Zilch::Real3& value);
    
    Zilch::Real3 GetTorque();
    
    void SetTorque(const Zilch::Real3& value);
    
    // Applies a force through the center of mass of the body (world space). Will not wake up the body if it's asleep.
    void ApplyForceNoWakeUp(const Zilch::Real3& force);
    
    // Applies a torque through the center of mass of the body (world space). Will not wake up the body if it's asleep.
    void ApplyTorqueNoWakeUp(const Zilch::Real3& torque);
    
    // Applies a force at an offset from the center of mass (world space). Results in a force and torque to the center of mass. Will not wake up the body if it's asleep.
    void ApplyForceAtOffsetVectorNoWakeUp(const Zilch::Real3& force, const Zilch::Real3& worldOffset);
    
    // Applies a force at a world point (world space). Results in a force and torque to the center of mass. Will not wake up the body if it's asleep.
    void ApplyForceAtPointNoWakeUp(const Zilch::Real3& force, const Zilch::Real3& worldPoint);
    
    // Applies a force through the center of mass of the body (world space). Will wake up the body if it's asleep.
    void ApplyForce(const Zilch::Real3& force);
    
    // Applies a torque through the center of mass of the body (world space). Will wake up the body if it's asleep.
    void ApplyTorque(const Zilch::Real3& torque);
    
    // Applies a force at an offset from the center of mass (world space). Results in a force and torque to the center of mass. Will wake up the body if it's asleep.
    void ApplyForceAtOffsetVector(const Zilch::Real3& force, const Zilch::Real3& worldOffset);
    
    // Applies a force at a world point (world space). Results in a force and torque to the center of mass. Will wake up the body if it's asleep.
    void ApplyForceAtPoint(const Zilch::Real3& force, const Zilch::Real3& worldPoint);
    
    // Applies a linear impulse through the center of mass (world space). Only results in a change of linear velocity. Will wake up the body if it's asleep.
    void ApplyLinearImpulse(const Zilch::Real3& linear);
    
    // Applies an angular impulse through the center of mass (world space). Only results in a change of angular velocity. Will wake up the body if it's asleep.
    void ApplyAngularImpulse(const Zilch::Real3& angular);
    
    // Applies an impulse at on offset from the center of mass (world space). Results in a change in linear and angular velocity. Will wake up the body if it's asleep.
    void ApplyImpulseAtOffsetVector(const Zilch::Real3& impulse, const Zilch::Real3& worldOffset);
    
    // Applies an impulse at a world point (world space). Results in a change to linear and angular velocity. Will wake up the body if it's asleep.
    void ApplyImpulseAtPoint(const Zilch::Real3& impulse, const Zilch::Real3& worldPoint);
    
    RigidBodyDynamicState GetDynamicState();
    
    void SetDynamicState(const RigidBodyDynamicState& value);
    
    bool GetAllowSleep();
    
    void SetAllowSleep(bool value);
    
    bool GetAsleep();
    
    void SetAsleep(bool value);
    
    // Forces the object awake. Will reset the sleep timer.
    void ForceAwake();
    
    // Forces the object asleep. Warning: calling this function could create gameplay flaws if used incorrectly, use at your own risk (and sparingly).
    void ForceAsleep();
    
    bool GetRotationLocked();
    
    void SetRotationLocked(bool value);
    
    Mode2DStates GetMode2D();
    
    void SetMode2D(const Mode2DStates& value);
    
    float GetMass();
    
    Zilch::Real3x3 GetLocalInverseInertiaTensor();
    
    Zilch::Real3x3 GetWorldInverseInertiaTensor();
    
    Zilch::Real3 GetWorldCenterOfMass();
    
    Zilch::HandleOf<RigidBody> GetActiveBody();
    
    unsigned char mValue[320];
    
  protected:
    RigidBody(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(RigidBody);
  };
  
  // Regions are used to make PhysicsEffects affect a region of space. Any effects attached to a Cog with a Region will apply to all objects in contact with this region.
  class Region : public Component
  {
  public:
    typedef Region ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetWakeUpOnEffectChange();
    
    void SetWakeUpOnEffectChange(bool value);
    
    // Dispatches an event to all objects in this region.
    void DispatchEvent(const Zilch::String& eventId, Event* toSend);
    
    unsigned char mValue[56];
    
  protected:
    Region(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Region);
  };
  
  // Takes a snap shot of the current mass and inertia and overrides the object's mass so it can be resized while keeping it's old mass.
  class MassOverride : public Component
  {
  public:
    typedef MassOverride ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetActive();
    
    void SetActive(bool value);
    
    float GetInverseMass();
    
    void SetInverseMass(float value);
    
    float GetMass();
    
    void SetMass(float value);
    
    Zilch::Real3x3 GetLocalInverseInertiaTensor();
    
    void SetLocalInverseInertiaTensor(const Zilch::Real3x3& value);
    
    Zilch::Real3 GetLocalCenterOfMass();
    
    void SetLocalCenterOfMass(const Zilch::Real3& value);
    
    bool GetAutoComputeInertia();
    
    void SetAutoComputeInertia(bool value);
    
    bool GetAutoComputeCenterOfMass();
    
    void SetAutoComputeCenterOfMass(bool value);
    
    // Takes a new snapshot of the current mass and inertia.
    void RecomputeMass();
    
    unsigned char mValue[104];
    
  protected:
    MassOverride(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(MassOverride);
  };
  
  // A collider controls how collision detection is performed for an object. A collider also gives mass properties to a RigidBody(via the material and volume). If there is no RigidBody associated with this collider then it is considered static. Note: colliders without RigidBodies should not be moved at run-time!
  class Collider : public Component
  {
  public:
    typedef Collider ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<PhysicsMaterial> GetMaterial();
    
    void SetMaterial(PhysicsMaterial* value);
    
    Zilch::HandleOf<CollisionGroup> GetCollisionGroup();
    
    void SetCollisionGroup(CollisionGroup* value);
    
    bool GetGhost();
    
    void SetGhost(bool value);
    
    bool GetSendsEvents();
    
    void SetSendsEvents(bool value);
    
    Zilch::Real3 GetOffset();
    
    void SetOffset(const Zilch::Real3& value);
    
    // Compute the world-space volume of this collider.
    float ComputeVolume();
    
    // Returns the point velocity of a world-space point with respect to the current rigid body's linear and angular velocity. If there is no rigid body this returns zero.
    Zilch::Real3 GetPointVelocity(const Zilch::Real3& worldPoint);
    
    Zilch::HandleOf<RigidBody> GetActiveBody();
    
    int GetContactCount();
    
    Zilch::HandleOf<ContactRange> GetContacts();
    
    int GetJointCount();
    
    Zilch::HandleOf<JointRange> GetJoints();
    
    Aabb GetWorldAabb();
    
    Sphere GetWorldBoundingSphere();
    
    unsigned char mValue[344];
    
  protected:
    Collider(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Collider);
  };
  
  // Defines the collision volume of a box defined by a size on each axis.
  class BoxCollider : public Collider
  {
  public:
    typedef BoxCollider ZilchSelf;
    typedef Collider ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetHalfSize();
    
    void SetHalfSize(const Zilch::Real3& value);
    
    Zilch::Real3 GetSize();
    
    void SetSize(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldSize();
    
    unsigned char mValue[24];
    
  protected:
    BoxCollider(Zilch::NoType none) : Collider(none) {}
    ZilchNoCopy(BoxCollider);
  };
  
  // Defines the collision volume for a capsule defined by a height and radius. A capsule can be thought of as a cylinder with spherical end caps.
  class CapsuleCollider : public Collider
  {
  public:
    typedef CapsuleCollider ZilchSelf;
    typedef Collider ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetRadius();
    
    void SetRadius(float value);
    
    float GetHeight();
    
    void SetHeight(float value);
    
    AxisDirection GetDirection();
    
    void SetDirection(const AxisDirection& value);
    
    CapsuleScalingMode GetScalingMode();
    
    void SetScalingMode(const CapsuleScalingMode& value);
    
    float GetWorldRadius();
    
    float GetWorldCylinderHeight();
    
    unsigned char mValue[24];
    
  protected:
    CapsuleCollider(Zilch::NoType none) : Collider(none) {}
    ZilchNoCopy(CapsuleCollider);
  };
  
  // Defines the collision volume for a convex mesh ( ConvexMesh resource). This collider has a volume and hence is able to work with a RigidBody.
  class ConvexMeshCollider : public Collider
  {
  public:
    typedef ConvexMeshCollider ZilchSelf;
    typedef Collider ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<ConvexMesh> GetConvexMesh();
    
    void SetConvexMesh(ConvexMesh* value);
    
    unsigned char mValue[56];
    
  protected:
    ConvexMeshCollider(Zilch::NoType none) : Collider(none) {}
    ZilchNoCopy(ConvexMeshCollider);
  };
  
  // Defines the collision volume for a cylinder defined by a height and radius.
  class CylinderCollider : public Collider
  {
  public:
    typedef CylinderCollider ZilchSelf;
    typedef Collider ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetRadius();
    
    void SetRadius(float value);
    
    float GetHeight();
    
    void SetHeight(float value);
    
    AxisDirection GetDirection();
    
    void SetDirection(const AxisDirection& value);
    
    float GetWorldRadius();
    
    float GetWorldHeight();
    
    unsigned char mValue[24];
    
  protected:
    CylinderCollider(Zilch::NoType none) : Collider(none) {}
    ZilchNoCopy(CylinderCollider);
  };
  
  // Defines the collision volume for an ellipsoid (3 dimensional ellipse) defined by three radius values.
  class EllipsoidCollider : public Collider
  {
  public:
    typedef EllipsoidCollider ZilchSelf;
    typedef Collider ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetRadii();
    
    void SetRadii(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldRadii();
    
    unsigned char mValue[16];
    
  protected:
    EllipsoidCollider(Zilch::NoType none) : Collider(none) {}
    ZilchNoCopy(EllipsoidCollider);
  };
  
  // Defines collision for a height map.
  class HeightMapCollider : public Collider
  {
  public:
    typedef HeightMapCollider ZilchSelf;
    typedef Collider ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetThickness();
    
    void SetThickness(float value);
    
    // Clear the cached information used to avoid catching edges. Typically called internally by physics, but is exposed for manual triggering.
    void ClearCachedEdgeAdjacency();
    
    unsigned char mValue[120];
    
  protected:
    HeightMapCollider(Zilch::NoType none) : Collider(none) {}
    ZilchNoCopy(HeightMapCollider);
  };
  
  // Defines the collision for a generic mesh from a collection of triangles ( PhysicsMesh resource). This collider type is not expected to have a dynamic or kinematic RigidBody.
  class MeshCollider : public Collider
  {
  public:
    typedef MeshCollider ZilchSelf;
    typedef Collider ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<PhysicsMesh> GetPhysicsMesh();
    
    void SetPhysicsMesh(PhysicsMesh* value);
    
    bool GetDrawEdges();
    
    void SetDrawEdges(bool value);
    
    bool GetDrawFaces();
    
    void SetDrawFaces(bool value);
    
    bool GetDrawFaceNormals();
    
    void SetDrawFaceNormals(bool value);
    
    unsigned char mValue[64];
    
  protected:
    MeshCollider(Zilch::NoType none) : Collider(none) {}
    ZilchNoCopy(MeshCollider);
  };
  
  // Defines a collection of sub-convex meshes. This allows a non-convex object to be broken up into several convex pieces for efficient collision detection and use with rigid bodies.
  class MultiConvexMeshCollider : public Collider
  {
  public:
    typedef MultiConvexMeshCollider ZilchSelf;
    typedef Collider ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<MultiConvexMesh> GetMesh();
    
    void SetMesh(MultiConvexMesh* value);
    
    unsigned char mValue[56];
    
  protected:
    MultiConvexMeshCollider(Zilch::NoType none) : Collider(none) {}
    ZilchNoCopy(MultiConvexMeshCollider);
  };
  
  // Defines the collision volume for a sphere defined by a radius.
  class SphereCollider : public Collider
  {
  public:
    typedef SphereCollider ZilchSelf;
    typedef Collider ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetRadius();
    
    void SetRadius(float value);
    
    float GetWorldRadius();
    
    unsigned char mValue[8];
    
  protected:
    SphereCollider(Zilch::NoType none) : Collider(none) {}
    ZilchNoCopy(SphereCollider);
  };
  
  // A common interface for all effects in physics. An effect is something that typically applies a force and can be attached to a collider, rigid body, region, or even a space. This effect is applied every frame according to the rules of the object it is attached to.
  class PhysicsEffect : public Component
  {
  public:
    typedef PhysicsEffect ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Toggles whether or not this effect is active.
    void Toggle();
    
    bool GetActive();
    
    void SetActive(bool value);
    
    bool GetWakeUpOnChange();
    
    void SetWakeUpOnChange(bool value);
    
    bool GetDebugDrawEffect();
    
    void SetDebugDrawEffect(bool value);
    
    PhysicsEffectType GetEffectType();
    
    unsigned char mValue[40];
    
  protected:
    PhysicsEffect(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(PhysicsEffect);
  };
  
  // Common interface for all directional force effects. Used to group together all common logic/variables for the force/gravity variants.
  class BasicDirectionEffect : public PhysicsEffect
  {
  public:
    typedef BasicDirectionEffect ZilchSelf;
    typedef PhysicsEffect ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetLocalSpaceDirection();
    
    void SetLocalSpaceDirection(bool value);
    
    float GetStrength();
    
    void SetStrength(float value);
    
    Zilch::Real3 GetDirection();
    
    void SetDirection(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldDirection();
    
    unsigned char mValue[32];
    
  protected:
    BasicDirectionEffect(Zilch::NoType none) : PhysicsEffect(none) {}
    ZilchNoCopy(BasicDirectionEffect);
  };
  
  // A force effect that is applied in a given direction (local or world space). This is used to create force regions that will push objects in a given direction. This can also be used on a rigid body to push an object in it's forward direction (e.g a missile) if applied locally. Note: this is always applied at the center of mass of the object. If a more rocket like effect is desired see ThrustEffect.
  class ForceEffect : public BasicDirectionEffect
  {
  public:
    typedef ForceEffect ZilchSelf;
    typedef BasicDirectionEffect ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ForceEffect(Zilch::NoType none) : BasicDirectionEffect(none) {}
    ZilchNoCopy(ForceEffect);
  };
  
  // A constant acceleration that is applied in the given direction (mass is ignored). This is useful for creating gravity (either on the entire world or in a region) that will push/pull objects in a given direction at a constant acceleration.
  class GravityEffect : public BasicDirectionEffect
  {
  public:
    typedef GravityEffect ZilchSelf;
    typedef BasicDirectionEffect ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    GravityEffect(Zilch::NoType none) : BasicDirectionEffect(none) {}
    ZilchNoCopy(GravityEffect);
  };
  
  // Common interface for all point effects. Used to attract or repel objects towards a central point. The strength of the effect is calculated as an interpolation between two strength values at two radial distances.
  class BasicPointEffect : public PhysicsEffect
  {
  public:
    typedef BasicPointEffect ZilchSelf;
    typedef PhysicsEffect ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetMinDistance();
    
    void SetMinDistance(float value);
    
    float GetMaxDistance();
    
    void SetMaxDistance(float value);
    
    float GetStrengthAtMin();
    
    void SetStrengthAtMin(float value);
    
    float GetStrengthAtMax();
    
    void SetStrengthAtMax(float value);
    
    Zilch::Real3 GetLocalPositionOffset();
    
    void SetLocalPositionOffset(const Zilch::Real3& value);
    
    PhysicsEffectInterpolationType GetInterpolationType();
    
    void SetInterpolationType(const PhysicsEffectInterpolationType& value);
    
    PhysicsEffectEndCondition GetEndCondition();
    
    void SetEndCondition(const PhysicsEffectEndCondition& value);
    
    unsigned char mValue[48];
    
  protected:
    BasicPointEffect(Zilch::NoType none) : PhysicsEffect(none) {}
    ZilchNoCopy(BasicPointEffect);
  };
  
  // A force effect with a direction and strength based upon the distance from a central point. The direction of the force will always point away from the effect center, but the strength will vary depending on the min/max distance and strength values. Positive strength values point away from the effect center. Useful to make planetary force field like effects.
  class PointForceEffect : public BasicPointEffect
  {
  public:
    typedef PointForceEffect ZilchSelf;
    typedef BasicPointEffect ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PointForceEffect(Zilch::NoType none) : BasicPointEffect(none) {}
    ZilchNoCopy(PointForceEffect);
  };
  
  // A force effect that pulls an object towards a central point. This effect is nearly identical to PointForceEffect with two exceptions. 1. An acceleration is applied instead of a force (mass is ignored). 2. A positive strength value will pull objects toward the center of the effect. This is useful to make planetary gravity or other similar effects.
  class PointGravityEffect : public BasicPointEffect
  {
  public:
    typedef PointGravityEffect ZilchSelf;
    typedef BasicPointEffect ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PointGravityEffect(Zilch::NoType none) : BasicPointEffect(none) {}
    ZilchNoCopy(PointGravityEffect);
  };
  
  // Applies a buoyancy force to an object in a given direction.
  class BuoyancyEffect : public PhysicsEffect
  {
  public:
    typedef BuoyancyEffect ZilchSelf;
    typedef PhysicsEffect ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetDensity();
    
    void SetDensity(float value);
    
    Zilch::Real3 GetGravity();
    
    void SetGravity(const Zilch::Real3& value);
    
    int GetDetail();
    
    void SetDetail(int value);
    
    bool GetDebugDrawRuntime();
    
    void SetDebugDrawRuntime(bool value);
    
    unsigned char mValue[32];
    
  protected:
    BuoyancyEffect(Zilch::NoType none) : PhysicsEffect(none) {}
    ZilchNoCopy(BuoyancyEffect);
  };
  
  // Applies drag or damping forces to slow down an object's linear and angular velocity. Drag is computed as a simple linear approximation of the drag force. Damping is a linear approximation of a drag acceleration. This means that damping affects all objects the same (mass independent).
  class DragEffect : public PhysicsEffect
  {
  public:
    typedef DragEffect ZilchSelf;
    typedef PhysicsEffect ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetLinearDamping();
    
    void SetLinearDamping(float value);
    
    float GetAngularDamping();
    
    void SetAngularDamping(float value);
    
    float GetLinearDrag();
    
    void SetLinearDrag(float value);
    
    float GetAngularDrag();
    
    void SetAngularDrag(float value);
    
    unsigned char mValue[16];
    
  protected:
    DragEffect(Zilch::NoType none) : PhysicsEffect(none) {}
    ZilchNoCopy(DragEffect);
  };
  
  // Applies a force to make an object move at a target speed in a given direction. This can also be used to pull the object towards the center of the flow (the axis in the flow direction centered at the effect). Used to model a river or a tractor beam.
  class FlowEffect : public PhysicsEffect
  {
  public:
    typedef FlowEffect ZilchSelf;
    typedef PhysicsEffect ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetLocalForce();
    
    void SetLocalForce(bool value);
    
    bool GetAttractToFlowCenter();
    
    void SetAttractToFlowCenter(bool value);
    
    float GetFlowSpeed();
    
    void SetFlowSpeed(float value);
    
    float GetMaxFlowForce();
    
    void SetMaxFlowForce(float value);
    
    Zilch::Real3 GetFlowDirection();
    
    void SetFlowDirection(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldFlowDirection();
    
    float GetAttractSpeed();
    
    void SetAttractSpeed(float value);
    
    float GetMaxAttractForce();
    
    void SetMaxAttractForce(float value);
    
    unsigned char mValue[56];
    
  protected:
    FlowEffect(Zilch::NoType none) : PhysicsEffect(none) {}
    ZilchNoCopy(FlowEffect);
  };
  
  // Allows a cog to ignore certain effect types (such as gravity or drag) that are being applied to the entire space (effects on Space or LevelSettings).
  class IgnoreSpaceEffects : public Component
  {
  public:
    typedef IgnoreSpaceEffects ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetIgnoreDrag();
    
    void SetIgnoreDrag(bool value);
    
    bool GetIgnoreFlow();
    
    void SetIgnoreFlow(bool value);
    
    bool GetIgnoreForce();
    
    void SetIgnoreForce(bool value);
    
    bool GetIgnoreGravity();
    
    void SetIgnoreGravity(bool value);
    
    bool GetIgnorePointForce();
    
    void SetIgnorePointForce(bool value);
    
    bool GetIgnorePointGravity();
    
    void SetIgnorePointGravity(bool value);
    
    bool GetIgnoreThrust();
    
    void SetIgnoreThrust(bool value);
    
    bool GetIgnoreVortex();
    
    void SetIgnoreVortex(bool value);
    
    bool GetIgnoreWind();
    
    void SetIgnoreWind(bool value);
    
    bool GetIgnoreTorque();
    
    void SetIgnoreTorque(bool value);
    
    bool GetIgnoreBuoyancy();
    
    void SetIgnoreBuoyancy(bool value);
    
    bool GetIgnoreCustom();
    
    void SetIgnoreCustom(bool value);
    
    // Should the given effect type be ignored?
    bool GetIgnoreState(const PhysicsEffectType& effectType);
    
    // Set if an effect type should be ignored.
    void SetIgnoreState(const PhysicsEffectType& effectType, bool ignore);
    
    unsigned char mValue[8];
    
  protected:
    IgnoreSpaceEffects(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(IgnoreSpaceEffects);
  };
  
  // Applies a directional force at the thrust effect's center. When applied to a rigid body, this will compute a torque if the force's direction does not go through the center of mass. Useful for modeling any sort of a thruster.
  class ThrustEffect : public PhysicsEffect
  {
  public:
    typedef ThrustEffect ZilchSelf;
    typedef PhysicsEffect ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetLocalSpaceDirection();
    
    void SetLocalSpaceDirection(bool value);
    
    float GetForceStrength();
    
    void SetForceStrength(float value);
    
    Zilch::Real3 GetForceDirection();
    
    void SetForceDirection(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldForceDirection();
    
    unsigned char mValue[48];
    
  protected:
    ThrustEffect(Zilch::NoType none) : PhysicsEffect(none) {}
    ZilchNoCopy(ThrustEffect);
  };
  
  // Applies a torque to the center of mass of a body.
  class TorqueEffect : public PhysicsEffect
  {
  public:
    typedef TorqueEffect ZilchSelf;
    typedef PhysicsEffect ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetLocalTorque();
    
    void SetLocalTorque(bool value);
    
    float GetTorqueStrength();
    
    void SetTorqueStrength(float value);
    
    Zilch::Real3 GetTorqueAxis();
    
    void SetTorqueAxis(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldTorqueAxis();
    
    unsigned char mValue[32];
    
  protected:
    TorqueEffect(Zilch::NoType none) : PhysicsEffect(none) {}
    ZilchNoCopy(TorqueEffect);
  };
  
  // Applies a force about an axis at the object's center. This will apply two forces to a body: One pulls the object towards the center of the vortex and the other applies a tangential force. Useful to model a vortex. This only expects to be used as a Region effect.
  class VortexEffect : public PhysicsEffect
  {
  public:
    typedef VortexEffect ZilchSelf;
    typedef PhysicsEffect ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetLocalAxis();
    
    void SetLocalAxis(bool value);
    
    float GetMinDistance();
    
    void SetMinDistance(float value);
    
    float GetMaxDistance();
    
    void SetMaxDistance(float value);
    
    float GetTwistStrengthAtMinDistance();
    
    void SetTwistStrengthAtMinDistance(float value);
    
    float GetTwistStrengthAtMaxDistance();
    
    void SetTwistStrengthAtMaxDistance(float value);
    
    float GetInwardStrengthAtMinDistance();
    
    void SetInwardStrengthAtMinDistance(float value);
    
    float GetInwardStrengthAtMaxDistance();
    
    void SetInwardStrengthAtMaxDistance(float value);
    
    Zilch::Real3 GetVortexAxis();
    
    void SetVortexAxis(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldVortexAxis();
    
    PhysicsEffectInterpolationType GetInterpolationType();
    
    void SetInterpolationType(const PhysicsEffectInterpolationType& value);
    
    PhysicsEffectEndCondition GetEndCondition();
    
    void SetEndCondition(const PhysicsEffectEndCondition& value);
    
    unsigned char mValue[72];
    
  protected:
    VortexEffect(Zilch::NoType none) : PhysicsEffect(none) {}
    ZilchNoCopy(VortexEffect);
  };
  
  // Applies a wind force in a given direction. The wind force is calculated from the squared wind speed and is scaled by the approximate surface area of the object in the direction of the force.
  class WindEffect : public PhysicsEffect
  {
  public:
    typedef WindEffect ZilchSelf;
    typedef PhysicsEffect ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetWindSpeed();
    
    void SetWindSpeed(float value);
    
    Zilch::Real3 GetWindDirection();
    
    void SetWindDirection(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldWindDirection();
    
    bool GetLocalSpaceDirection();
    
    void SetLocalSpaceDirection(bool value);
    
    unsigned char mValue[32];
    
  protected:
    WindEffect(Zilch::NoType none) : PhysicsEffect(none) {}
    ZilchNoCopy(WindEffect);
  };
  
  // A physics effect that sends events out so users can apply custom logic for forces.
  class CustomPhysicsEffect : public PhysicsEffect
  {
  public:
    typedef CustomPhysicsEffect ZilchSelf;
    typedef PhysicsEffect ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    CustomPhysicsEffect(Zilch::NoType none) : PhysicsEffect(none) {}
    ZilchNoCopy(CustomPhysicsEffect);
  };
  
  // Information to represent a constraint to be solved. The main information that needs to be set here is the Jacobian and error. A constraint will enforce that the relative velocities along the Jacobian are equal to zero (ignoring error correction or motors).
  class CustomConstraintInfo : public ReferenceCountedEventObject
  {
  public:
    typedef CustomConstraintInfo ZilchSelf;
    typedef ReferenceCountedEventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetLinear0();
    
    void SetLinear0(const Zilch::Real3& value);
    
    Zilch::Real3 GetAngular0();
    
    void SetAngular0(const Zilch::Real3& value);
    
    Zilch::Real3 GetLinear1();
    
    void SetLinear1(const Zilch::Real3& value);
    
    Zilch::Real3 GetAngular1();
    
    void SetAngular1(const Zilch::Real3& value);
    
    float GetEffectiveMass();
    
    void SetEffectiveMass(float value);
    
    float GetGamma();
    
    void SetGamma(float value);
    
    float GetBias();
    
    void SetBias(float value);
    
    float GetMinImpulse();
    
    void SetMinImpulse(float value);
    
    float GetMaxImpulse();
    
    void SetMaxImpulse(float value);
    
    float GetImpulse();
    
    void SetImpulse(float value);
    
    float GetError();
    
    void SetError(float value);
    
    float GetBaumgarte();
    
    void SetBaumgarte(float value);
    
    bool GetActive();
    
    void SetActive(bool value);
    
    bool GetSolvePosition();
    
    void SetSolvePosition(bool value);
    
    // Set the Jacobian of this constraint (and the effective mass).
    void SetJacobian(const Zilch::Real3& linear0, const Zilch::Real3& angular0, const Zilch::Real3& linear1, const Zilch::Real3& angular1);
    
    // Set the position error of the constraint. This also sets the bias of the constraint (used to actually correct the error). If you want to set this constraint as a motor you should not call this function (or call it first). If you want to set this as a spring then make sure you call this first.
    void SetErrorAndBias(float error);
    
    // Sets this constraint as a motor (i.e. a constraint that drives movement along the Jacobian direction at a certain speed). The motor has a min and max impulse value that can be solved (typically -value, +value). If you set this as a motor, you should do so last. Motors should typically be their own constraint unlike springs.
    void ComputeMotor(float targetSpeed, float minImpulse, float maxImpulse);
    
    // Given the currently set mass and error, fix the constraint to be soft (i.e. solve the constraint like a spring). The spring fixes the constraint using the given frequency (oscillations per second) and damping ratio (0 is no damping, 1 is critical damping).
    void ComputeSpring(float frequencyHz, float dampRatio);
    
    // Remove this constraint from whatever joint owns it. This is equivalent to "this.Owner.RemoveConstraint(this)".
    void DetachFromOwner();
    
    // Is this constraint currently owned by a joint? (Equivalent to "this.Owner != null").
    bool IsOwned();
    
    Zilch::HandleOf<CustomJoint> GetOwner();
    
    unsigned char mValue[144];
    
  protected:
    CustomConstraintInfo(Zilch::NoType none) : ReferenceCountedEventObject(none) {}
    ZilchNoCopy(CustomConstraintInfo);
  };
  
  // Defines spring properties for a joint. Used to make a joint soft and therefore behave spring-like. A joint spring has a frequency in hertz at which to oscillate as well as a damping ratio. The ratio should vary from 0 to 1 where 0 is no damping and 1 is critical damping. See each joint for a description of how it reacts to a spring.
  class JointSpring : public Component
  {
  public:
    typedef JointSpring ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetActive();
    
    void SetActive(bool value);
    
    float GetFrequencyHz();
    
    void SetFrequencyHz(float value);
    
    float GetDampingRatio();
    
    void SetDampingRatio(float value);
    
    int GetAtomIds();
    
    void SetAtomIds(int value);
    
    unsigned char mValue[24];
    
  protected:
    JointSpring(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(JointSpring);
  };
  
  // Defines limit properties for a joint. Used to add a min/max bounds to a joint. When the joint is in between the min/max bounds, the "limited" portion will be ignored (The stick will not solve when it is in between the bounds, making it a rope). See each joint for a description of how it reacts to a limit.
  class JointLimit : public Component
  {
  public:
    typedef JointLimit ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetActive();
    
    void SetActive(bool value);
    
    float GetLowerLimit();
    
    void SetLowerLimit(float value);
    
    float GetUpperLimit();
    
    void SetUpperLimit(float value);
    
    int GetAtomIds();
    
    void SetAtomIds(int value);
    
    unsigned char mValue[24];
    
  protected:
    JointLimit(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(JointLimit);
  };
  
  // Defines motor properties for a joint. Used to add energy to a joint. A motor defines a desired speed to move at as well as a max impulse that can be applied to reach that speed in a timestep. See each joint for a description of how it reacts to a motor.
  class JointMotor : public Component
  {
  public:
    typedef JointMotor ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetActive();
    
    void SetActive(bool value);
    
    bool GetReverse();
    
    void SetReverse(bool value);
    
    float GetSpeed();
    
    void SetSpeed(float value);
    
    float GetMaxImpulse();
    
    void SetMaxImpulse(float value);
    
    int GetAtomIds();
    
    void SetAtomIds(int value);
    
    unsigned char mValue[32];
    
  protected:
    JointMotor(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(JointMotor);
  };
  
  // Allows the user to override parameters for debug drawing of joints. Primarily used to debug draw from different object perspectives and to change the size of drawn data.
  class JointDebugDrawConfig : public Component
  {
  public:
    typedef JointDebugDrawConfig ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetActive();
    
    void SetActive(bool value);
    
    float GetSize();
    
    void SetSize(float value);
    
    float GetDetail();
    
    void SetDetail(float value);
    
    bool GetObjectAPerspective();
    
    void SetObjectAPerspective(bool value);
    
    bool GetObjectBPerspective();
    
    void SetObjectBPerspective(bool value);
    
    unsigned char mValue[16];
    
  protected:
    JointDebugDrawConfig(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(JointDebugDrawConfig);
  };
  
  // Overrides a joint's configuration values of slop, linear/angular Baumgarte, and linear/angular error correction. Slop is the amount of error allowed before position correction takes effect. Baumgarte is used to correct error with a penalty impulse. Baumgarte is split into linear and angular portions because of stability. Error correction is only used when the joint is solved with post stabilization.
  class JointConfigOverride : public Component
  {
  public:
    typedef JointConfigOverride ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    ConstraintPositionCorrection GetPositionCorrectionType();
    
    void SetPositionCorrectionType(const ConstraintPositionCorrection& value);
    
    unsigned char mValue[32];
    
  protected:
    JointConfigOverride(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(JointConfigOverride);
  };
  
  // Joints connect two objects together with one or more constraints. A constraint is a mathematical rule that restricts object movement, typically defined in terms of the position and velocities of the objects involved.
  class Joint : public Component
  {
  public:
    typedef Joint ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetActive();
    
    void SetActive(bool value);
    
    bool GetSendsEvents();
    
    void SetSendsEvents(bool value);
    
    bool GetAutoSnaps();
    
    void SetAutoSnaps(bool value);
    
    bool GetCollideConnected();
    
    void SetCollideConnected(bool value);
    
    float GetMaxImpulse();
    
    void SetMaxImpulse(float value);
    
    // If the passed in object is ObjectA, returns ObjectB. Provides easier logic for traversing across joints.
    Zilch::HandleOf<Cog> GetOtherObject(Cog* cog);
    
    // Returns the cog associated with an index. Index of 0 is ObjectA, index 1 is ObjectB. Used to write more streamline functions where you index into the objects in a loop.
    Zilch::HandleOf<Cog> GetCog(int index);
    
    unsigned char mValue[152];
    
  protected:
    Joint(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Joint);
  };
  
  // A customizable joint that can be configured in script. The user can create constraints belonging to this joint and set the required values to solve them. Some basic constraint understanding is required. To compute constraints you should listen to Events.ComputeCustomJointInfo.
  class CustomJoint : public Joint
  {
  public:
    typedef CustomJoint ZilchSelf;
    typedef Joint ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Create a constraint that is attached to this joint.
    Zilch::HandleOf<CustomConstraintInfo> CreateConstraint();
    
    // Add a constraint to this joint. This will assert if a joint already owns this constraint.
    void AddConstraint(CustomConstraintInfo* constraint);
    
    // If the given constraint belongs to this joint then remove it from the constraints to solve.
    void RemoveConstraint(CustomConstraintInfo* constraint);
    
    // Clear all constraints from this joint (so none will solve).
    void ClearConstraints();
    
    long long GetConstraintCount();
    
    Zilch::HandleOf<CustomConstraintInfo> GetConstraint(long long __0);
    
    unsigned char mValue[32];
    
  protected:
    CustomJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(CustomJoint);
  };
  
  // A block of information for solving a joint (or constraint) type. This is used to configure how one joint is solved independently of another joint.
  class ConstraintConfigBlock : public SafeId32Object
  {
  public:
    typedef ConstraintConfigBlock ZilchSelf;
    typedef SafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetSlop();
    
    void SetSlop(float value);
    
    float GetLinearBaumgarte();
    
    void SetLinearBaumgarte(float value);
    
    float GetAngularBaumgarte();
    
    void SetAngularBaumgarte(float value);
    
    float GetLinearErrorCorrection();
    
    void SetLinearErrorCorrection(float value);
    
    float GetAngularErrorCorrection();
    
    void SetAngularErrorCorrection(float value);
    
    ConstraintPositionCorrection GetPositionCorrectionType();
    
    void SetPositionCorrectionType(const ConstraintPositionCorrection& value);
    
    unsigned char mValue[32];
    
  protected:
    ConstraintConfigBlock(Zilch::NoType none) : SafeId32Object(none) {}
    ZilchNoCopy(ConstraintConfigBlock);
  };
  
  // A stick joint is used to simulate a rope or a stick. This joint forces a constant distance between the anchor points on the objects. If there is no limit, this behaves as a stick. If there is a limit, then this behaves as a rope. Motors and springs are also applied to the axis of the rope. Add on definitions: Limit: A limit will provide a min/max distance that the anchors can be between. Motor: A motor will push/pull the objects in the direction of the rope. The motor will not have any effect unless a limit or spring is present. Spring: A spring will make the rope behave spring-like at its boundaries.
  class StickJoint : public Joint
  {
  public:
    typedef StickJoint ZilchSelf;
    typedef Joint ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetLength();
    
    void SetLength(float value);
    
    Zilch::Real3 GetLocalPointA();
    
    void SetLocalPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointB();
    
    void SetLocalPointB(const Zilch::Real3& value);
    
    // Sets the position of the anchor on object A and B given a position in world space 
    void SetWorldPoints(const Zilch::Real3& point);
    
    Zilch::Real3 GetWorldPointA();
    
    void SetWorldPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointB();
    
    void SetWorldPointB(const Zilch::Real3& value);
    
    unsigned char mValue[40];
    
  protected:
    StickJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(StickJoint);
  };
  
  class StickJointBlock : public ConstraintConfigBlock
  {
  public:
    typedef StickJointBlock ZilchSelf;
    typedef ConstraintConfigBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    StickJointBlock(Zilch::NoType none) : ConstraintConfigBlock(none) {}
    ZilchNoCopy(StickJointBlock);
  };
  
  // Represents a ball and socket joint. A position joint constrains the two anchor points on each object to be equal. Limits, motors, and springs typically should not be used. Add on definitions: Limit: A limit will provide a min/max translation on every axis (x,y,z) that the objects must be between. Motor: A motor will attempt to drive the translation in the positive direction on every axis. Spring: A spring will make the translation on every axis springy at the bounds.
  class PositionJoint : public Joint
  {
  public:
    typedef PositionJoint ZilchSelf;
    typedef Joint ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetLocalPointA();
    
    void SetLocalPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointB();
    
    void SetLocalPointB(const Zilch::Real3& value);
    
    // Sets the position of the anchor on object A and B given a position in world space 
    void SetWorldPoints(const Zilch::Real3& point);
    
    Zilch::Real3 GetWorldPointA();
    
    void SetWorldPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointB();
    
    void SetWorldPointB(const Zilch::Real3& value);
    
    unsigned char mValue[48];
    
  protected:
    PositionJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(PositionJoint);
  };
  
  class PositionJointBlock : public ConstraintConfigBlock
  {
  public:
    typedef PositionJointBlock ZilchSelf;
    typedef ConstraintConfigBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PositionJointBlock(Zilch::NoType none) : ConstraintConfigBlock(none) {}
    ZilchNoCopy(PositionJointBlock);
  };
  
  // A prismatic joint sometimes called a slider) is used to create something similar to a piston. This joint fixes all degrees of rotation and leaves one linear axis free. Therefore, the bodies will rotate with each other and move with each other, except for one axis where they can move freely. Add on definitions: Limit: A limit will provide a min/max translational distance for the two objects on the slider axis. Motor: A motor will push/pull the objects on the slider axis. Spring: A spring will make the slider axis springy at its limits.
  class PrismaticJoint : public Joint
  {
  public:
    typedef PrismaticJoint ZilchSelf;
    typedef Joint ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetLocalPointA();
    
    void SetLocalPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointB();
    
    void SetLocalPointB(const Zilch::Real3& value);
    
    // Sets the position of the anchor on object A and B given a position in world space 
    void SetWorldPoints(const Zilch::Real3& point);
    
    Zilch::Real3 GetWorldPointA();
    
    void SetWorldPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointB();
    
    void SetWorldPointB(const Zilch::Real3& value);
    
    Zilch::Quaternion GetLocalBasisA();
    
    void SetLocalBasisA(const Zilch::Quaternion& value);
    
    Zilch::Quaternion GetLocalBasisB();
    
    void SetLocalBasisB(const Zilch::Quaternion& value);
    
    Zilch::Real3 GetLocalAxisA();
    
    void SetLocalAxisA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalAxisB();
    
    void SetLocalAxisB(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldAxis();
    
    void SetWorldAxis(const Zilch::Real3& value);
    
    unsigned char mValue[128];
    
  protected:
    PrismaticJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(PrismaticJoint);
  };
  
  class PrismaticJointBlock : public ConstraintConfigBlock
  {
  public:
    typedef PrismaticJointBlock ZilchSelf;
    typedef ConstraintConfigBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PrismaticJointBlock(Zilch::NoType none) : ConstraintConfigBlock(none) {}
    ZilchNoCopy(PrismaticJointBlock);
  };
  
  // A revolute joint is used to create a wheel or a hinge. A revolute joint bring the two locally defined axes together and allows free rotation only on that axis. This axis is also where the motor is applied. The two axes that are orthogonal to the motor axis have their rotation locked (objects rotate together unless on the motor axis). Add on definitions: Limit: A limit will provide a min/max angle on the motor axis. Zero is defined by the location of the primary axis on the FrameOfreference object. Motor: A motor will drive the objects about the motor axis. Spring: A spring will make the motor axis springy at the limits.
  class RevoluteJoint : public Joint
  {
  public:
    typedef RevoluteJoint ZilchSelf;
    typedef Joint ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetLocalPointA();
    
    void SetLocalPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointB();
    
    void SetLocalPointB(const Zilch::Real3& value);
    
    // Sets the position of the anchor on object A and B given a position in world space 
    void SetWorldPoints(const Zilch::Real3& point);
    
    Zilch::Real3 GetWorldPointA();
    
    void SetWorldPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointB();
    
    void SetWorldPointB(const Zilch::Real3& value);
    
    Zilch::Quaternion GetLocalBasisA();
    
    void SetLocalBasisA(const Zilch::Quaternion& value);
    
    Zilch::Quaternion GetLocalBasisB();
    
    void SetLocalBasisB(const Zilch::Quaternion& value);
    
    Zilch::Quaternion GetWorldBasis();
    
    void SetWorldBasis(const Zilch::Quaternion& value);
    
    JointFrameOfReference GetFrameOfReference();
    
    void SetFrameOfReference(const JointFrameOfReference& value);
    
    // Legacy. Used to set the entire frame in world space for this joint. The x and y axes are used as a basis for limiting the joint. The x axis is at angle 0 and the y axis is at angle 90. The z axis is the axis of rotational freedom.
    void SetWorldFrame(const Zilch::Quaternion& rot);
    
    unsigned char mValue[112];
    
  protected:
    RevoluteJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(RevoluteJoint);
  };
  
  class RevoluteJointBlock : public ConstraintConfigBlock
  {
  public:
    typedef RevoluteJointBlock ZilchSelf;
    typedef ConstraintConfigBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    RevoluteJointBlock(Zilch::NoType none) : ConstraintConfigBlock(none) {}
    ZilchNoCopy(RevoluteJointBlock);
  };
  
  // A universal joint locks positional movement of two points together as well as locking rotation about one axis. This means it is a joint that constrains four axes and leaves two free rotational axes. This joint is most useful to model something like a arm or leg that has a large range of rotational movement.
  class UniversalJoint : public Joint
  {
  public:
    typedef UniversalJoint ZilchSelf;
    typedef Joint ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetLocalPointA();
    
    void SetLocalPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointB();
    
    void SetLocalPointB(const Zilch::Real3& value);
    
    // Sets the position of the anchor on object A and B given a position in world space 
    void SetWorldPoints(const Zilch::Real3& point);
    
    Zilch::Real3 GetWorldPointA();
    
    void SetWorldPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointB();
    
    void SetWorldPointB(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalAxis0OfBodyA();
    
    void SetLocalAxis0OfBodyA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalAxis1OfBodyA();
    
    void SetLocalAxis1OfBodyA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalAxis0OfBodyB();
    
    void SetLocalAxis0OfBodyB(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalAxis1OfBodyB();
    
    void SetLocalAxis1OfBodyB(const Zilch::Real3& value);
    
    unsigned char mValue[120];
    
  protected:
    UniversalJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(UniversalJoint);
  };
  
  class UniversalJointBlock : public ConstraintConfigBlock
  {
  public:
    typedef UniversalJointBlock ZilchSelf;
    typedef ConstraintConfigBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    UniversalJointBlock(Zilch::NoType none) : ConstraintConfigBlock(none) {}
    ZilchNoCopy(UniversalJointBlock);
  };
  
  // A weld joint is used to lock the position and orientation of two objects together. Welds should generally not be used to make two objects rigid as they are computationally more expensive and less rigid than using composites. The primary uses for welds are for quick connections or connections that are desired to not be fully rigid. Also, while it can be done with composites too, welds can be used to model object breaking beyond some max force. Limits, motors and springs should most likely not be used on this. Add on definitions: Limit: A limit will provide a min/max translation on the x, y, and z axes. Motor: A motor will attempt to drive the rotation on the x, y, and z axes. Spring: A spring will make the x, y, and z axis springy.
  class WeldJoint : public Joint
  {
  public:
    typedef WeldJoint ZilchSelf;
    typedef Joint ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetLocalPointA();
    
    void SetLocalPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointB();
    
    void SetLocalPointB(const Zilch::Real3& value);
    
    // Sets the position of the anchor on object A and B given a position in world space 
    void SetWorldPoints(const Zilch::Real3& point);
    
    Zilch::Real3 GetWorldPointA();
    
    void SetWorldPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointB();
    
    void SetWorldPointB(const Zilch::Real3& value);
    
    Zilch::Quaternion GetLocalBasisA();
    
    void SetLocalBasisA(const Zilch::Quaternion& value);
    
    Zilch::Quaternion GetLocalBasisB();
    
    void SetLocalBasisB(const Zilch::Quaternion& value);
    
    unsigned char mValue[104];
    
  protected:
    WeldJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(WeldJoint);
  };
  
  class WeldJointBlock : public ConstraintConfigBlock
  {
  public:
    typedef WeldJointBlock ZilchSelf;
    typedef ConstraintConfigBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    WeldJointBlock(Zilch::NoType none) : ConstraintConfigBlock(none) {}
    ZilchNoCopy(WeldJointBlock);
  };
  
  // Locks the orientation of two objects together. Used when two objects should always rotate in unison. Typically not used by itself, but useful as a proof of concept for joints that use this functionality internally. Limits, motors, and springs should most likely not be used on this. Add on definitions: Limit: A limit will provide a min/max angle on every axis that the objects must be between. Motor: A motor will attempt to drive the rotation on every axis forward. Spring: A spring will make the rotations on every axis at the bounds springy.
  class FixedAngleJoint : public Joint
  {
  public:
    typedef FixedAngleJoint ZilchSelf;
    typedef Joint ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Quaternion GetLocalBasisA();
    
    void SetLocalBasisA(const Zilch::Quaternion& value);
    
    Zilch::Quaternion GetLocalBasisB();
    
    void SetLocalBasisB(const Zilch::Quaternion& value);
    
    unsigned char mValue[56];
    
  protected:
    FixedAngleJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(FixedAngleJoint);
  };
  
  class FixedAngleJointBlock : public ConstraintConfigBlock
  {
  public:
    typedef FixedAngleJointBlock ZilchSelf;
    typedef ConstraintConfigBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    FixedAngleJointBlock(Zilch::NoType none) : ConstraintConfigBlock(none) {}
    ZilchNoCopy(FixedAngleJointBlock);
  };
  
  // A joint that models a wheel with shocks. A wheel aligns the two local axes together and allows free rotation about this axis. The specified shock axis is turned into a soft constraint to model the shocks. Note: ObjectA should be the root object as the shock axis rotates with this object. If ObjectA is the wheel, then the shock axis will rotate with the wheel, causing the shocks to not stay aligned. Add on definitions: Limit: A limit will provide a min/max angle on the motor axis. Motor: A motor will turn the objects about the motor axis. Spring: A spring will make the shock axis springy. A spring is attached by default to a wheel.
  class WheelJoint : public Joint
  {
  public:
    typedef WheelJoint ZilchSelf;
    typedef Joint ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetLocalPointA();
    
    void SetLocalPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointB();
    
    void SetLocalPointB(const Zilch::Real3& value);
    
    // Sets the position of the anchor on object A and B given a position in world space 
    void SetWorldPoints(const Zilch::Real3& point);
    
    Zilch::Real3 GetWorldPointA();
    
    void SetWorldPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointB();
    
    void SetWorldPointB(const Zilch::Real3& value);
    
    Zilch::Quaternion GetLocalBasisA();
    
    void SetLocalBasisA(const Zilch::Quaternion& value);
    
    Zilch::Quaternion GetLocalBasisB();
    
    void SetLocalBasisB(const Zilch::Quaternion& value);
    
    Zilch::Real3 GetLocalAxisA();
    
    void SetLocalAxisA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalAxisB();
    
    void SetLocalAxisB(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldAxis();
    
    void SetWorldAxis(const Zilch::Real3& value);
    
    Zilch::Real3 GetShockAxis();
    
    void SetShockAxis(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldShockAxis();
    
    void SetWorldShockAxis(const Zilch::Real3& value);
    
    unsigned char mValue[152];
    
  protected:
    WheelJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(WheelJoint);
  };
  
  class WheelJointBlock : public ConstraintConfigBlock
  {
  public:
    typedef WheelJointBlock ZilchSelf;
    typedef ConstraintConfigBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    WheelJointBlock(Zilch::NoType none) : ConstraintConfigBlock(none) {}
    ZilchNoCopy(WheelJointBlock);
  };
  
  // A gear connects two joints on two objects together. Either joint can be a prismatic or a revolute. A gear ratio is used to bind the two joints together. Limits, motors, and springs should not be used on this.
  class GearJoint : public Joint
  {
  public:
    typedef GearJoint ZilchSelf;
    typedef Joint ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetRatio();
    
    void SetRatio(float value);
    
    float GetConstant();
    
    void SetConstant(float value);
    
    Zilch::HandleOf<CogPath> GetJointAPath();
    
    void SetJointAPath(CogPath* value);
    
    Zilch::HandleOf<CogPath> GetJointBPath();
    
    void SetJointBPath(CogPath* value);
    
    Zilch::HandleOf<Cog> GetJointA();
    
    void SetJointA(Cog* value);
    
    Zilch::HandleOf<Cog> GetJointB();
    
    void SetJointB(Cog* value);
    
    unsigned char mValue[184];
    
  protected:
    GearJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(GearJoint);
  };
  
  class GearJointBlock : public ConstraintConfigBlock
  {
  public:
    typedef GearJointBlock ZilchSelf;
    typedef ConstraintConfigBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    GearJointBlock(Zilch::NoType none) : ConstraintConfigBlock(none) {}
    ZilchNoCopy(GearJointBlock);
  };
  
  // A PulleyJoint turns two StickJoints into a pulley via a pulley ratio. A PulleyJoint connects the two free objects of two different stick joints. These two objects will then be bound to move together via the formula "length0 + ratio * length1 = 0". Limits, motors and springs should not be used on a pulley.
  class PulleyJoint : public Joint
  {
  public:
    typedef PulleyJoint ZilchSelf;
    typedef Joint ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetRatio();
    
    void SetRatio(float value);
    
    Zilch::HandleOf<CogPath> GetJointAPath();
    
    void SetJointAPath(CogPath* value);
    
    Zilch::HandleOf<CogPath> GetJointBPath();
    
    void SetJointBPath(CogPath* value);
    
    Zilch::HandleOf<Cog> GetJointA();
    
    void SetJointA(Cog* value);
    
    Zilch::HandleOf<Cog> GetJointB();
    
    void SetJointB(Cog* value);
    
    unsigned char mValue[176];
    
  protected:
    PulleyJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(PulleyJoint);
  };
  
  class PulleyJointBlock : public ConstraintConfigBlock
  {
  public:
    typedef PulleyJointBlock ZilchSelf;
    typedef ConstraintConfigBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PulleyJointBlock(Zilch::NoType none) : ConstraintConfigBlock(none) {}
    ZilchNoCopy(PulleyJointBlock);
  };
  
  // Legacy. A position joint that is designed to manipulate one object. The only difference between this and the position joint is that the manipulator always draws itself, draws differently, and configures the max impulse differently.
  class ManipulatorJoint : public Joint
  {
  public:
    typedef ManipulatorJoint ZilchSelf;
    typedef Joint ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetTargetPoint();
    
    void SetTargetPoint(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPoint();
    
    void SetLocalPoint(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPoint();
    
    void SetWorldPoint(const Zilch::Real3& value);
    
    unsigned char mValue[48];
    
  protected:
    ManipulatorJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(ManipulatorJoint);
  };
  
  class ManipulatorJointBlock : public ConstraintConfigBlock
  {
  public:
    typedef ManipulatorJointBlock ZilchSelf;
    typedef ConstraintConfigBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ManipulatorJointBlock(Zilch::NoType none) : ConstraintConfigBlock(none) {}
    ZilchNoCopy(ManipulatorJointBlock);
  };
  
  // Legacy. A physics gun joint is an experimental joint for picking up objects. This acts as a weld between an object and the world. Primarily an experiment for picking up objects as a player. Should be custom implemented in script with CustomJoint instead.
  class PhyGunJoint : public Joint
  {
  public:
    typedef PhyGunJoint ZilchSelf;
    typedef Joint ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetTargetPoint();
    
    void SetTargetPoint(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPoint();
    
    void SetLocalPoint(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPoint();
    
    void SetWorldPoint(const Zilch::Real3& value);
    
    Zilch::Quaternion GetTargetRotation();
    
    void SetTargetRotation(const Zilch::Quaternion& value);
    
    Zilch::Quaternion GetWorldRotation();
    
    void SetWorldRotation(const Zilch::Quaternion& value);
    
    unsigned char mValue[104];
    
  protected:
    PhyGunJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(PhyGunJoint);
  };
  
  class PhyGunJointBlock : public ConstraintConfigBlock
  {
  public:
    typedef PhyGunJointBlock ZilchSelf;
    typedef ConstraintConfigBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PhyGunJointBlock(Zilch::NoType none) : ConstraintConfigBlock(none) {}
    ZilchNoCopy(PhyGunJointBlock);
  };
  
  // Legacy. A linear axis joint is used to keep an object locked on a plane that is defined by a normal. This was made to help make a dynamic character controller. Instead of locking translation along a plane, the constraint can be turned off with a motor attached to it which will drive movement in the direction of the plane normal. This can then be thought of as a "move in direction" constraint.
  class LinearAxisJoint : public Joint
  {
  public:
    typedef LinearAxisJoint ZilchSelf;
    typedef Joint ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetWorldAxis();
    
    void SetWorldAxis(const Zilch::Real3& value);
    
    unsigned char mValue[24];
    
  protected:
    LinearAxisJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(LinearAxisJoint);
  };
  
  class LinearAxisJointBlock : public ConstraintConfigBlock
  {
  public:
    typedef LinearAxisJointBlock ZilchSelf;
    typedef ConstraintConfigBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    LinearAxisJointBlock(Zilch::NoType none) : ConstraintConfigBlock(none) {}
    ZilchNoCopy(LinearAxisJointBlock);
  };
  
  // A prismatic joint is used to create something similar to a piston. This is the 2d version of PrismaticJoint. This joint is used in 2d mode for increased performance and stability. The slider axis is projected onto the z axis (the z component is ignored) so that the objects can be arbitrarily far apart. The x and y rotations are also ignored since the objects are only allowed to rotate about the z axis. Add on definitions: Limit: A limit will provide a min/max translational distance for the two objects on the slider axis. Motor: A motor will push/pull the objects on the slider axis. Spring: A spring will make the slider axis springy at its limits.
  class PrismaticJoint2d : public Joint
  {
  public:
    typedef PrismaticJoint2d ZilchSelf;
    typedef Joint ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetLocalPointA();
    
    void SetLocalPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointB();
    
    void SetLocalPointB(const Zilch::Real3& value);
    
    // Sets the position of the anchor on object A and B given a position in world space 
    void SetWorldPoints(const Zilch::Real3& point);
    
    Zilch::Real3 GetWorldPointA();
    
    void SetWorldPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointB();
    
    void SetWorldPointB(const Zilch::Real3& value);
    
    Zilch::Quaternion GetLocalBasisA();
    
    void SetLocalBasisA(const Zilch::Quaternion& value);
    
    Zilch::Quaternion GetLocalBasisB();
    
    void SetLocalBasisB(const Zilch::Quaternion& value);
    
    Zilch::Real3 GetLocalAxisA();
    
    void SetLocalAxisA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalAxisB();
    
    void SetLocalAxisB(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldAxis();
    
    void SetWorldAxis(const Zilch::Real3& value);
    
    unsigned char mValue[104];
    
  protected:
    PrismaticJoint2d(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(PrismaticJoint2d);
  };
  
  class PrismaticJoint2dBlock : public ConstraintConfigBlock
  {
  public:
    typedef PrismaticJoint2dBlock ZilchSelf;
    typedef ConstraintConfigBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PrismaticJoint2dBlock(Zilch::NoType none) : ConstraintConfigBlock(none) {}
    ZilchNoCopy(PrismaticJoint2dBlock);
  };
  
  // A revolute joint is used to create a wheel or a hinge. This is the 2d version of RevoluteJoint. This joint is used in 2d mode for increased performance and stability. The motor axis is automatically set to the z axis, as that is the only axis objects can rotate about. Also, the translation on the z axis is ignored so that objects can be arbitrarily far apart. Add on definitions: Limit: A limit will provide a min/max angle on the motor axis. Motor: A motor will turn the objects about the motor axis. Spring: A spring will make the motor axis springy at the limits.
  class RevoluteJoint2d : public Joint
  {
  public:
    typedef RevoluteJoint2d ZilchSelf;
    typedef Joint ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetLocalPointA();
    
    void SetLocalPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointB();
    
    void SetLocalPointB(const Zilch::Real3& value);
    
    // Sets the position of the anchor on object A and B given a position in world space 
    void SetWorldPoints(const Zilch::Real3& point);
    
    Zilch::Real3 GetWorldPointA();
    
    void SetWorldPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointB();
    
    void SetWorldPointB(const Zilch::Real3& value);
    
    unsigned char mValue[104];
    
  protected:
    RevoluteJoint2d(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(RevoluteJoint2d);
  };
  
  class RevoluteJoint2dBlock : public ConstraintConfigBlock
  {
  public:
    typedef RevoluteJoint2dBlock ZilchSelf;
    typedef ConstraintConfigBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    RevoluteJoint2dBlock(Zilch::NoType none) : ConstraintConfigBlock(none) {}
    ZilchNoCopy(RevoluteJoint2dBlock);
  };
  
  // A joint that models a wheel with shocks. This is the 2d version of WheelJoint. This joint is used in 2d mode for increased performance and stability. The motor axis is automatically set to the z axis, as that is the only axis objects can rotate about. Also, the translation on the z axis is ignored so that objects can be arbitrarily far apart. Add on definitions: Limit: A limit will provide a min/max angle on the motor axis. Motor: A motor will turn the objects about the motor axis. Spring: A spring will make the shock axis springy. A spring is attached by default to a wheel.
  class WheelJoint2d : public Joint
  {
  public:
    typedef WheelJoint2d ZilchSelf;
    typedef Joint ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetLocalPointA();
    
    void SetLocalPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalPointB();
    
    void SetLocalPointB(const Zilch::Real3& value);
    
    // Sets the position of the anchor on object A and B given a position in world space 
    void SetWorldPoints(const Zilch::Real3& point);
    
    Zilch::Real3 GetWorldPointA();
    
    void SetWorldPointA(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldPointB();
    
    void SetWorldPointB(const Zilch::Real3& value);
    
    Zilch::Quaternion GetLocalBasisA();
    
    void SetLocalBasisA(const Zilch::Quaternion& value);
    
    Zilch::Quaternion GetLocalBasisB();
    
    void SetLocalBasisB(const Zilch::Quaternion& value);
    
    Zilch::Real3 GetShockAxis();
    
    void SetShockAxis(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldShockAxis();
    
    void SetWorldShockAxis(const Zilch::Real3& value);
    
    unsigned char mValue[128];
    
  protected:
    WheelJoint2d(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(WheelJoint2d);
  };
  
  class WheelJoint2dBlock : public ConstraintConfigBlock
  {
  public:
    typedef WheelJoint2dBlock ZilchSelf;
    typedef ConstraintConfigBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    WheelJoint2dBlock(Zilch::NoType none) : ConstraintConfigBlock(none) {}
    ZilchNoCopy(WheelJoint2dBlock);
  };
  
  // A relative velocity joint defines what the desired relative velocity on three world axes should be between two objects. Relative velocity is defined as v2 - v1. This joint has not been tested with motors or limits in any way.
  class RelativeVelocityJoint : public Joint
  {
  public:
    typedef RelativeVelocityJoint ZilchSelf;
    typedef Joint ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // One of 3 axes to constrain movement on.
    Zilch::Real3 GetAxis(int index);
    
    // One of 3 axes to constrain movement on.
    void SetAxis(int index, const Zilch::Real3& axis);
    
    // The desired relative speed for the given axis index.
    float GetSpeed(int index);
    
    // The desired relative speed for the given axis index.
    void SetSpeed(int index, float speed);
    
    // The max impulse for the given axis index.
    float GetMaxImpulse(int index);
    
    // The max impulse for the given axis index.
    void SetMaxImpulse(int index, float maxImpulse);
    
    // Whether or not the given axis index is active.
    bool GetAxisActive(int index);
    
    // Whether or not the given axis index is active.
    void SetAxisActive(int index, bool active);
    
    unsigned char mValue[88];
    
  protected:
    RelativeVelocityJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(RelativeVelocityJoint);
  };
  
  class RelativeVelocityJointBlock : public ConstraintConfigBlock
  {
  public:
    typedef RelativeVelocityJointBlock ZilchSelf;
    typedef ConstraintConfigBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    RelativeVelocityJointBlock(Zilch::NoType none) : ConstraintConfigBlock(none) {}
    ZilchNoCopy(RelativeVelocityJointBlock);
  };
  
  // A joint to keep an object upright. Locks two axes of the objects together but allows free rotation on the plane defined by that axis. This constraint is useful for keeping any object upright. This could also be used to auto correct an object slowly by lowering the max impulse value of the constraint.
  class UprightJoint : public Joint
  {
  public:
    typedef UprightJoint ZilchSelf;
    typedef Joint ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetLocalAxisA();
    
    void SetLocalAxisA(const Zilch::Real3& value);
    
    Zilch::Real3 GetLocalAxisB();
    
    void SetLocalAxisB(const Zilch::Real3& value);
    
    Zilch::Real3 GetWorldAxis();
    
    void SetWorldAxis(const Zilch::Real3& value);
    
    unsigned char mValue[48];
    
  protected:
    UprightJoint(Zilch::NoType none) : Joint(none) {}
    ZilchNoCopy(UprightJoint);
  };
  
  class UprightJointBlock : public ConstraintConfigBlock
  {
  public:
    typedef UprightJointBlock ZilchSelf;
    typedef ConstraintConfigBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    UprightJointBlock(Zilch::NoType none) : ConstraintConfigBlock(none) {}
    ZilchNoCopy(UprightJointBlock);
  };
  
  class CustomJointBlock : public ConstraintConfigBlock
  {
  public:
    typedef CustomJointBlock ZilchSelf;
    typedef ConstraintConfigBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    CustomJointBlock(Zilch::NoType none) : ConstraintConfigBlock(none) {}
    ZilchNoCopy(CustomJointBlock);
  };
  
  class ContactBlock : public ConstraintConfigBlock
  {
  public:
    typedef ContactBlock ZilchSelf;
    typedef ConstraintConfigBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ContactBlock(Zilch::NoType none) : ConstraintConfigBlock(none) {}
    ZilchNoCopy(ContactBlock);
  };
  
  // Used to specify which collision group events should be sent out for a CollisionFilter. Allows customizing who gets events (in the filter pair) and what event name is sent out.
  class CollisionFilterBlock : public SafeId32Object
  {
  public:
    typedef CollisionFilterBlock ZilchSelf;
    typedef SafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    CollisionFilterBlockType GetBlockType();
    
    bool GetSendEventsToA();
    
    void SetSendEventsToA(bool value);
    
    bool GetSendEventsToB();
    
    void SetSendEventsToB(bool value);
    
    bool GetSendEventsToSpace();
    
    void SetSendEventsToSpace(bool value);
    
    Zilch::String GetEventOverride();
    
    void SetEventOverride(const Zilch::String& value);
    
    unsigned char mValue[16];
    
  protected:
    CollisionFilterBlock(Zilch::NoType none) : SafeId32Object(none) {}
    ZilchNoCopy(CollisionFilterBlock);
  };
  
  // CollisionFilterBlock for CollisionStarted events.
  class CollisionStartBlock : public CollisionFilterBlock
  {
  public:
    typedef CollisionStartBlock ZilchSelf;
    typedef CollisionFilterBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    CollisionStartBlock(Zilch::NoType none) : CollisionFilterBlock(none) {}
    ZilchNoCopy(CollisionStartBlock);
  };
  
  // CollisionFilterBlock for CollisionPersisted events.
  class CollisionPersistedBlock : public CollisionFilterBlock
  {
  public:
    typedef CollisionPersistedBlock ZilchSelf;
    typedef CollisionFilterBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    CollisionPersistedBlock(Zilch::NoType none) : CollisionFilterBlock(none) {}
    ZilchNoCopy(CollisionPersistedBlock);
  };
  
  // CollisionFilterBlock for CollisionEnded events.
  class CollisionEndBlock : public CollisionFilterBlock
  {
  public:
    typedef CollisionEndBlock ZilchSelf;
    typedef CollisionFilterBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    CollisionEndBlock(Zilch::NoType none) : CollisionFilterBlock(none) {}
    ZilchNoCopy(CollisionEndBlock);
  };
  
  // CollisionFilterBlock for sending out an event before collision is solved. Allows modifying object state before collision responses have been calculated.
  class PreSolveBlock : public CollisionFilterBlock
  {
  public:
    typedef PreSolveBlock ZilchSelf;
    typedef CollisionFilterBlock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PreSolveBlock(Zilch::NoType none) : CollisionFilterBlock(none) {}
    ZilchNoCopy(PreSolveBlock);
  };
  
  // Describes material properties of a collider mainly used during collision resolution.
  class PhysicsMaterial : public DataResource
  {
  public:
    typedef PhysicsMaterial ZilchSelf;
    typedef DataResource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Creates a PhysicsMaterial for run-time modifications.
    static Zilch::HandleOf<PhysicsMaterial> CreateRuntime();
    
    // Creates a clone of this material for run-time modifications.
    Zilch::HandleOf<PhysicsMaterial> RuntimeClone();
    
    float GetDensity();
    
    void SetDensity(float value);
    
    float GetRestitution();
    
    void SetRestitution(float value);
    
    float GetFriction();
    
    void SetFriction(float value);
    
    float GetRestitutionImportance();
    
    void SetRestitutionImportance(float value);
    
    float GetFrictionImportance();
    
    void SetFrictionImportance(float value);
    
    bool GetHighPriority();
    
    void SetHighPriority(bool value);
    
    // After modifying this resource, notify anyone using it to update now instead of at the next physics update.
    void UpdateAndNotifyIfModified();
    
    unsigned char mValue[32];
    
  protected:
    PhysicsMaterial(Zilch::NoType none) : DataResource(none) {}
    ZilchNoCopy(PhysicsMaterial);
  };
  
  // Base class of mesh type physics resources. Stores the actual mesh (no optimization structures) and information about the mesh such as mass and inertia.
  class GenericPhysicsMesh : public Resource
  {
  public:
    typedef GenericPhysicsMesh ZilchSelf;
    typedef Resource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<PhysicsMeshVertexData> GetVertices();
    
    Zilch::HandleOf<PhysicsMeshIndexData> GetIndices();
    
    // Check if the mesh is valid. Optionally throw a script exception if it is invalid.
    bool Validate(bool throwExceptionIfInvalid);
    
    // Rebuild all extra mesh information if it is currently modified. This includes things like the center of mass, volume, aabb, edge info and more (some derived types may have a mid-phase, etc...)
    void UpdateAndNotifyIfModified();
    
    unsigned char mValue[216];
    
  protected:
    GenericPhysicsMesh(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(GenericPhysicsMesh);
  };
  
  // A convex mesh meant for use with dynamic rigid bodies. Computes efficient contact information compared to a regular physics mesh. This mesh also defines a volume which means mass properties can be computed.
  class ConvexMesh : public GenericPhysicsMesh
  {
  public:
    typedef ConvexMesh ZilchSelf;
    typedef GenericPhysicsMesh ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Creates a ConvexMesh for run-time modifications.
    static Zilch::HandleOf<ConvexMesh> CreateRuntime();
    
    // Creates a clone of this mesh for run-time modifications.
    Zilch::HandleOf<ConvexMesh> RuntimeClone();
    
    
  protected:
    ConvexMesh(Zilch::NoType none) : GenericPhysicsMesh(none) {}
    ZilchNoCopy(ConvexMesh);
  };
  
  // Represents a collection of convex meshes that was decomposed from a mesh.
  class MultiConvexMesh : public Resource
  {
  public:
    typedef MultiConvexMesh ZilchSelf;
    typedef Resource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Creates a MultiConvexMesh for run-time modifications.
    static Zilch::HandleOf<MultiConvexMesh> CreateRuntime();
    
    // Creates a clone of this mesh for run-time modifications.
    Zilch::HandleOf<MultiConvexMesh> RuntimeClone();
    
    bool GetModified();
    
    bool GetValid();
    
    // Check if the mesh is valid. Optionally throw a script exception if it is invalid.
    bool Validate(bool throwExceptionIfInvalid);
    
    // Rebuild all extra mesh information if it is currently modified. This includes things like the center of mass, volume, aabb, edge info and more.
    void UpdateAndNotifyIfModified();
    
    Zilch::HandleOf<MultiConvexMeshVertexData> GetVertices();
    
    Zilch::HandleOf<MultiConvexMeshSubMeshData> GetSubMeshes();
    
    unsigned char mValue[176];
    
  protected:
    MultiConvexMesh(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(MultiConvexMesh);
  };
  
  // A mesh used to represent static world geometry. All geometry is stored and tested as a collection of triangles.
  class PhysicsMesh : public GenericPhysicsMesh
  {
  public:
    typedef PhysicsMesh ZilchSelf;
    typedef GenericPhysicsMesh ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Creates a PhysicsMesh for run-time modifications.
    static Zilch::HandleOf<PhysicsMesh> CreateRuntime();
    
    // Creates a clone of this mesh for run-time modifications.
    Zilch::HandleOf<PhysicsMesh> RuntimeClone();
    
    unsigned char mValue[144];
    
  protected:
    PhysicsMesh(Zilch::NoType none) : GenericPhysicsMesh(none) {}
    ZilchNoCopy(PhysicsMesh);
  };
  
  // A filter for storing the relationship between a pair of groups. Stores flags for the kind of filter this is, as well as what events to send out and to whom.
  class CollisionFilter : public SafeId32EventObject
  {
  public:
    typedef CollisionFilter ZilchSelf;
    typedef SafeId32EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    CollisionFilterCollisionFlags GetCollisionFlag();
    
    void SetCollisionFlag(const CollisionFilterCollisionFlags& value);
    
    Zilch::HandleOf<CollisionGroup> GetCollisionGroupA();
    
    Zilch::HandleOf<CollisionGroup> GetCollisionGroupB();
    
    unsigned char mValue[80];
    
  protected:
    CollisionFilter(Zilch::NoType none) : SafeId32EventObject(none) {}
    ZilchNoCopy(CollisionFilter);
  };
  
  // Represents a label for a Collider to be used with a CollisionTable.
  class CollisionGroup : public DataResource
  {
  public:
    typedef CollisionGroup ZilchSelf;
    typedef DataResource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Creates a CollisionGroup for run-time modifications.
    static Zilch::HandleOf<CollisionGroup> CreateRuntime();
    
    // Creates a clone of this CollisionGroup for run-time modifications.
    Zilch::HandleOf<CollisionGroup> RuntimeClone();
    
    
  protected:
    CollisionGroup(Zilch::NoType none) : DataResource(none) {}
    ZilchNoCopy(CollisionGroup);
  };
  
  // Defines filter pairs between CollisionGroups. These filters are used to control if collision detection and resolution happens between Colliders. Additionally, CollisionFilterBlocks can be defined on filters to send out extra events.
  class CollisionTable : public DataResource
  {
  public:
    typedef CollisionTable ZilchSelf;
    typedef DataResource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Creates a CollisionTable for run-time modifications.
    static Zilch::HandleOf<CollisionTable> CreateRuntime();
    
    // Creates a clone of this CollisionTable for run-time modifications.
    Zilch::HandleOf<CollisionTable> RuntimeClone();
    
    // Finds the filter between the pair of collision groups.
    Zilch::HandleOf<CollisionFilter> FindFilter(CollisionGroup* groupA, CollisionGroup* groupB);
    
    unsigned char mValue[120];
    
  protected:
    CollisionTable(Zilch::NoType none) : DataResource(none) {}
    ZilchNoCopy(CollisionTable);
  };
  
  // Defines various configuration values used by physics to solve constraints. This resource defines a tiered set of properties that can be overridden global or per constraint type.
  class PhysicsSolverConfig : public DataResource
  {
  public:
    typedef PhysicsSolverConfig ZilchSelf;
    typedef DataResource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetSolverIterationCount();
    
    void SetSolverIterationCount(int value);
    
    int GetPositionIterationCount();
    
    void SetPositionIterationCount(int value);
    
    float GetVelocityRestitutionThreshold();
    
    void SetVelocityRestitutionThreshold(float value);
    
    PhysicsSolverPositionCorrection GetPositionCorrectionType();
    
    void SetPositionCorrectionType(const PhysicsSolverPositionCorrection& value);
    
    unsigned char mValue[144];
    
  protected:
    PhysicsSolverConfig(Zilch::NoType none) : DataResource(none) {}
    ZilchNoCopy(PhysicsSolverConfig);
  };
  
  class PhysicsMeshVertexData : public SafeId32Object
  {
  public:
    typedef PhysicsMeshVertexData ZilchSelf;
    typedef SafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 Get(int __0);
    
    void Set(int __0, const Zilch::Real3& __1);
    
    void Add(const Zilch::Real3& __0);
    
    void Clear();
    
    Zilch::HandleOf<PhysicsMeshVertexRange> GetAll();
    
    int GetCount();
    
    unsigned char mValue[16];
    
  protected:
    PhysicsMeshVertexData(Zilch::NoType none) : SafeId32Object(none) {}
    ZilchNoCopy(PhysicsMeshVertexData);
  };
  
  class PhysicsMeshIndexData : public SafeId32Object
  {
  public:
    typedef PhysicsMeshIndexData ZilchSelf;
    typedef SafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int Get(int __0);
    
    void Set(int __0, int __1);
    
    void Add(int __0);
    
    void Clear();
    
    Zilch::HandleOf<PhysicsMeshIndexRange> GetAll();
    
    int GetCount();
    
    unsigned char mValue[16];
    
  protected:
    PhysicsMeshIndexData(Zilch::NoType none) : SafeId32Object(none) {}
    ZilchNoCopy(PhysicsMeshIndexData);
  };
  
  class MultiConvexMeshVertexData : public SafeId32Object
  {
  public:
    typedef MultiConvexMeshVertexData ZilchSelf;
    typedef SafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 Get(int __0);
    
    void Set(int __0, const Zilch::Real3& __1);
    
    void Add(const Zilch::Real3& __0);
    
    void Clear();
    
    Zilch::HandleOf<MultiConvexMeshVertexRange> GetAll();
    
    int GetCount();
    
    unsigned char mValue[16];
    
  protected:
    MultiConvexMeshVertexData(Zilch::NoType none) : SafeId32Object(none) {}
    ZilchNoCopy(MultiConvexMeshVertexData);
  };
  
  class MultiConvexMeshIndexData : public SafeId32Object
  {
  public:
    typedef MultiConvexMeshIndexData ZilchSelf;
    typedef SafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int Get(int __0);
    
    void Set(int __0, int __1);
    
    void Add(int __0);
    
    void Clear();
    
    Zilch::HandleOf<MultiConvexMeshIndexRange> GetAll();
    
    int GetCount();
    
    unsigned char mValue[16];
    
  protected:
    MultiConvexMeshIndexData(Zilch::NoType none) : SafeId32Object(none) {}
    ZilchNoCopy(MultiConvexMeshIndexData);
  };
  
  // Contains the indices of a convex mesh. The triangle indices are the primary method to configure this (required for mass computations). The regular indices are used for debug drawing and to reduce intersection tests by removing duplicate points. If left empty, Indices will be auto-filled from the triangle indices.
  class SubConvexMesh : public SafeId32Object
  {
  public:
    typedef SubConvexMesh ZilchSelf;
    typedef SafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<MultiConvexMeshIndexData> GetIndices();
    
    Zilch::HandleOf<MultiConvexMeshIndexData> GetTriangleIndices();
    
    Zilch::HandleOf<MultiConvexMesh> GetMesh();
    
    void SetMesh(MultiConvexMesh* value);
    
    bool GetValid();
    
    unsigned char mValue[184];
    
  protected:
    SubConvexMesh(Zilch::NoType none) : SafeId32Object(none) {}
    ZilchNoCopy(SubConvexMesh);
  };
  
  class MultiConvexMeshSubMeshData : public SafeId32Object
  {
  public:
    typedef MultiConvexMeshSubMeshData ZilchSelf;
    typedef SafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<MultiConvexMeshSubMeshRange> GetAll();
    
    // Create and add a new SubConvexMesh. Returns the new mesh for modification.
    Zilch::HandleOf<SubConvexMesh> Add();
    
    // Remove the sub-mesh at the given index.
    void RemoveAt(int arrayIndex);
    
    Zilch::HandleOf<SubConvexMesh> Get(int __0);
    
    // Clears all sub-meshes.
    void Clear();
    
    int GetCount();
    
    unsigned char mValue[16];
    
  protected:
    MultiConvexMeshSubMeshData(Zilch::NoType none) : SafeId32Object(none) {}
    ZilchNoCopy(MultiConvexMeshSubMeshData);
  };
  
  class MultiConvexMeshVertexRange : public Zilch::ReferenceType
  {
  public:
    typedef MultiConvexMeshVertexRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<MultiConvexMeshVertexRange> GetAll();
    
    Zilch::Real3 GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[64];
    
  protected:
    MultiConvexMeshVertexRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(MultiConvexMeshVertexRange);
  };
  
  class MultiConvexMeshIndexRange : public Zilch::ReferenceType
  {
  public:
    typedef MultiConvexMeshIndexRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<MultiConvexMeshIndexRange> GetAll();
    
    int GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[64];
    
  protected:
    MultiConvexMeshIndexRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(MultiConvexMeshIndexRange);
  };
  
  class MultiConvexMeshSubMeshRange : public Zilch::ReferenceType
  {
  public:
    typedef MultiConvexMeshSubMeshRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<MultiConvexMeshSubMeshRange> GetAll();
    
    Zilch::HandleOf<SubConvexMesh> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[64];
    
  protected:
    MultiConvexMeshSubMeshRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(MultiConvexMeshSubMeshRange);
  };
  
  // Used to filter objects during cast operations.
  class BaseCastFilter : public Zilch::ReferenceType
  {
  public:
    typedef BaseCastFilter ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetIgnoreStatic();
    
    void SetIgnoreStatic(bool value);
    
    bool GetIgnoreDynamic();
    
    void SetIgnoreDynamic(bool value);
    
    bool GetIgnoreKinematic();
    
    void SetIgnoreKinematic(bool value);
    
    bool GetIgnoreGhost();
    
    void SetIgnoreGhost(bool value);
    
    bool GetIgnoreChildren();
    
    void SetIgnoreChildren(bool value);
    
    unsigned char mValue[24];
    
  protected:
    BaseCastFilter(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(BaseCastFilter);
  };
  
  // Filter for casting operations in physics. Allows basic filtering such as static or dynamic objects, advanced filters such as collision groups, and custom filters via an event callback.
  class CastFilter : public BaseCastFilter
  {
  public:
    typedef CastFilter ZilchSelf;
    typedef BaseCastFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Cog> GetIgnoreCog();
    
    void SetIgnoreCog(Cog* value);
    
    Zilch::HandleOf<CollisionGroup> GetCollisionGroup();
    
    void SetCollisionGroup(CollisionGroup* value);
    
    Zilch::HandleOf<Object> GetCallbackObject();
    
    void SetCallbackObject(Object* value);
    
    Zilch::String GetCallbackEventName();
    
    void SetCallbackEventName(const Zilch::String& value);
    
    unsigned char mValue[24];
    
  protected:
    CastFilter(Zilch::NoType none) : BaseCastFilter(none) {}
    ZilchNoCopy(CastFilter);
  };
  
  // A result from a cast operation on a PhysicsSpace.
  class CastResult : public Zilch::ReferenceType
  {
  public:
    typedef CastResult ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Cog> GetObjectHit();
    
    Zilch::HandleOf<Collider> GetCollider();
    
    Zilch::Real3 GetWorldPosition();
    
    Zilch::Real3 GetNormal();
    
    float GetDistance();
    
    // Returns the local-space position that the object was hit. The point index is used to get the first or last point of intersection. Invalid on volume casts.
    Zilch::Real3 GetLocalPosition(int pointIndex);
    
    unsigned char mValue[56];
    
  protected:
    CastResult(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CastResult);
  };
  
  class CastResults : public Zilch::ReferenceType
  {
  public:
    typedef CastResults ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<CastResultsArrayRange> All();
    
    bool Empty();
    
    void Clear();
    
    unsigned char mValue[56];
    
  protected:
    CastResults(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(CastResults);
  };
  
  // Cast result from performing a sweep test.
  class SweepResult : public Zilch::ReferenceType
  {
  public:
    typedef SweepResult ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetTime();
    
    Zilch::HandleOf<Collider> GetOtherCollider();
    
    Zilch::HandleOf<Cog> GetOtherObject();
    
    float GetPenetration();
    
    Zilch::Real3 GetWorldPoint();
    
    Zilch::Real3 GetWorldNormalTowardsSelf();
    
    Zilch::Real3 GetWorldNormalTowardsOther();
    
    unsigned char mValue[48];
    
  protected:
    SweepResult(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SweepResult);
  };
  
  // A controller for a high speed physics based car. The car is controlled with a steer, gas, and brake scalar. The car will raycast wheel positions to try to keep the wheels on the ground and then apply friction and normal forces to propel the car.
  class PhysicsCar : public Component
  {
  public:
    typedef PhysicsCar ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetActive();
    
    void SetActive(bool value);
    
    bool GetDebugDraw();
    
    void SetDebugDraw(bool value);
    
    float GetMaxSpeed();
    
    void SetMaxSpeed(float value);
    
    float GetMaxTorque();
    
    void SetMaxTorque(float value);
    
    float GetGripScalar();
    
    void SetGripScalar(float value);
    
    bool GetAntiLockBrakes();
    
    void SetAntiLockBrakes(bool value);
    
    bool GetTorqueGovernor();
    
    void SetTorqueGovernor(bool value);
    
    float GetWheelFrictionSideRollCoef();
    
    void SetWheelFrictionSideRollCoef(float value);
    
    float GetWheelFrictionFrontRollCoef();
    
    void SetWheelFrictionFrontRollCoef(float value);
    
    float GetSteer();
    
    void SetSteer(float value);
    
    float GetGas();
    
    void SetGas(float value);
    
    float GetBrake();
    
    void SetBrake(float value);
    
    Zilch::HandleOf<CarWheelArray> GetWheelCogs();
    
    // The number of wheels currently in contact with an object.
    int NumberOfWheelsInContact();
    
    unsigned char mValue[232];
    
  protected:
    PhysicsCar(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(PhysicsCar);
  };
  
  class CarWheelRef : public Object
  {
  public:
    typedef CarWheelRef ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    CarWheelRef(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(CarWheelRef);
  };
  
  // An array interface to the cog paths of wheels that this car uses. This array is read-only.
  class CarWheelArray : public SafeId32Object
  {
  public:
    typedef CarWheelArray ZilchSelf;
    typedef SafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Get the cog for a wheel by index.
    Zilch::HandleOf<Cog> Get(int index);
    
    int GetCount();
    
    unsigned char mValue[8];
    
  protected:
    CarWheelArray(Zilch::NoType none) : SafeId32Object(none) {}
    ZilchNoCopy(CarWheelArray);
  };
  
  // A wheel for a high speed physics based car. Each wheel contains properties to describe how to interact with the world (eg. spring forces, friction, etc...).
  class PhysicsCarWheel : public Component
  {
  public:
    typedef PhysicsCarWheel ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetActive();
    
    void SetActive(bool value);
    
    Zilch::HandleOf<CogPath> GetPhysicsCarPath();
    
    void SetPhysicsCarPath(CogPath* value);
    
    float GetSpringMinLength();
    
    void SetSpringMinLength(float value);
    
    float GetSpringStartLength();
    
    void SetSpringStartLength(float value);
    
    float GetSpringMaxLength();
    
    void SetSpringMaxLength(float value);
    
    float GetSpringRestLength();
    
    void SetSpringRestLength(float value);
    
    float GetDriveFactor();
    
    void SetDriveFactor(float value);
    
    float GetSteerFactor();
    
    void SetSteerFactor(float value);
    
    float GetRadius();
    
    void SetRadius(float value);
    
    float GetFrequencyHz();
    
    void SetFrequencyHz(float value);
    
    float GetDampingCompressionRatio();
    
    void SetDampingCompressionRatio(float value);
    
    float GetDampingRelaxationRatio();
    
    void SetDampingRelaxationRatio(float value);
    
    float GetMaxSpringForce();
    
    void SetMaxSpringForce(float value);
    
    float GetMaxBrakeStrength();
    
    void SetMaxBrakeStrength(float value);
    
    bool GetIsDriveWheel();
    
    void SetIsDriveWheel(bool value);
    
    bool GetIs2DWheel();
    
    void SetIs2DWheel(bool value);
    
    float GetForwardStaticFriction();
    
    void SetForwardStaticFriction(float value);
    
    float GetForwardDynamicFriction();
    
    void SetForwardDynamicFriction(float value);
    
    float GetSideStaticFriction();
    
    void SetSideStaticFriction(float value);
    
    float GetSideDynamicFriction();
    
    void SetSideDynamicFriction(float value);
    
    float GetGripScalar();
    
    void SetGripScalar(float value);
    
    float GetMaxSpringCompressionDistance();
    
    void SetMaxSpringCompressionDistance(float value);
    
    float GetMaxSpringRelaxationDistance();
    
    void SetMaxSpringRelaxationDistance(float value);
    
    Zilch::Real3 GetWheelLocalStartPosition();
    
    void SetWheelLocalStartPosition(const Zilch::Real3& value);
    
    Zilch::Quaternion GetPreRotation();
    
    void SetPreRotation(const Zilch::Quaternion& value);
    
    Zilch::Quaternion GetWorldWheelBasis();
    
    void SetWorldWheelBasis(const Zilch::Quaternion& value);
    
    bool GetIsInContact();
    
    bool GetIsSliding();
    
    float GetRotation();
    
    float GetRotationalVelocity();
    
    float GetGrip();
    
    float GetNormalImpulse();
    
    float GetForwardImpulse();
    
    float GetSideImpulse();
    
    float GetSpringLength();
    
    Zilch::HandleOf<Cog> GetContactedObject();
    
    Zilch::Real3 GetContactPoint();
    
    Zilch::Real3 GetContactNormal();
    
    Zilch::Real3 GetWorldAxleAxis();
    
    Zilch::Real3 GetWorldForwardAxis();
    
    Zilch::Real3 GetWorldSpringAxis();
    
    Zilch::Real3 GetWorldLinearVelocity();
    
    Zilch::Real3 GetWorldAngularVelocity();
    
    unsigned char mValue[368];
    
  protected:
    PhysicsCarWheel(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(PhysicsCarWheel);
  };
  
  // Allows a user to send out collision events that do not originate from the physics system. This includes determining when to send start/persisted/end events. This is primarily intended for use with a swept character controller where you never actually come into contact with objects. The objects you would have hit can be added to this so that the same logic can be used for swept and non-swept collision.
  class CustomCollisionEventTracker : public Component
  {
  public:
    typedef CustomCollisionEventTracker ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Add a collision for this frame between ourself and the passed in collider.
    void AddCollision(Collider* otherCollider, const Zilch::Real3& worldPoint, const Zilch::Real3& worldNormalTowardsOther);
    
    // Send out all of the events that have been queued up. This includes determining what should be started/persisted/ended events. These events are sent with the prefix that is passed in, e.g. if you pass in 'Collision' then CollisionStarted, CollisionPersisted, and CollisionEnded will be the event names.
    void SendEvents(const Zilch::String& eventPrefix);
    
    unsigned char mValue[80];
    
  protected:
    CustomCollisionEventTracker(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(CustomCollisionEventTracker);
  };
  
  // A helper class to create joints of various configurations. Each joint is configured from two points. Any other specific joint properties are calculated from these two points.
  class JointCreator : public Zilch::ReferenceType
  {
  public:
    typedef JointCreator ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Create a joint (by component name) attached to the two given cogs.
    Zilch::HandleOf<Cog> Create(Cog* objectA, Cog* objectB, const Zilch::String& jointName);
    
    // Create a joint (by component name) attached to the two given cogs. Both world points on the joint are set to the same world point value.
    Zilch::HandleOf<Cog> CreateWorldPoints(Cog* objectA, Cog* objectB, const Zilch::String& jointName, const Zilch::Real3& bothWorldPoints);
    
    // Create a joint (by component name) attached to the two given cogs.
    Zilch::HandleOf<Cog> CreateWorldPoints(Cog* objectA, Cog* objectB, const Zilch::String& jointName, const Zilch::Real3& worldPointA, const Zilch::Real3& worldPointB);
    
    // Create a joint (by component name) attached to the two given cogs.
    Zilch::HandleOf<Cog> CreateLocalPoints(Cog* objectA, Cog* objectB, const Zilch::String& jointName, const Zilch::Real3& localPointA, const Zilch::Real3& localPointB);
    
    // Create a joint (by archetype) attached to the two given cogs.
    Zilch::HandleOf<Cog> Create(Cog* objectA, Cog* objectB, Archetype* jointArchetype);
    
    // Create a joint (by archetype) attached to the two given cogs. Both world points on the joint are set to the same world point value.
    Zilch::HandleOf<Cog> CreateWorldPoints(Cog* objectA, Cog* objectB, Archetype* jointArchetype, const Zilch::Real3& bothWorldPoints);
    
    // Create a joint (by archetype) attached to the two given cogs.
    Zilch::HandleOf<Cog> CreateWorldPoints(Cog* objectA, Cog* objectB, Archetype* jointArchetype, const Zilch::Real3& worldPointA, const Zilch::Real3& worldPointB);
    
    // Create a joint (by archetype) attached to the two given cogs.
    Zilch::HandleOf<Cog> CreateLocalPoints(Cog* objectA, Cog* objectB, Archetype* jointArchetype, const Zilch::Real3& localPointA, const Zilch::Real3& localPointB);
    
    // Add a JointLimit to the given joint cog.
    Zilch::HandleOf<JointLimit> AddJointLimit(Cog* joint);
    
    // Add a JointMotor to the given joint cog.
    Zilch::HandleOf<JointMotor> AddJointMotor(Cog* joint);
    
    // Add a JointSpring to the given joint cog.
    Zilch::HandleOf<JointSpring> AddJointSpring(Cog* joint);
    
    bool GetOverrideLength();
    
    void SetOverrideLength(bool value);
    
    bool GetUseCenter();
    
    void SetUseCenter(bool value);
    
    bool GetAutoSnaps();
    
    void SetAutoSnaps(bool value);
    
    bool GetAttachToWorld();
    
    void SetAttachToWorld(bool value);
    
    bool GetAttachToCommonParent();
    
    void SetAttachToCommonParent(bool value);
    
    unsigned char mValue[24];
    
  protected:
    JointCreator(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(JointCreator);
  };
  
  // Controls an object's movement using joints. This allows creating a physics based character controller that reacts to physics (joints, forces, collisions, etc...). The motor controls relative velocity with respect to a target object frame.
  class DynamicMotor : public Component
  {
  public:
    typedef DynamicMotor ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Attempts to move the body in the given direction.
    void MoveInDirection(const Zilch::Real3& direction, const Zilch::Real3& up);
    
    // Compute relative velocity with respect to the world. Used to signify that an absolute world speed is desired.
    void SetReferenceFrameToWorld();
    
    // Compute the relative velocity with respect to a target object. Used to control movement on moving platforms.
    void SetReferenceFrameToObject(Cog* object);
    
    bool GetActive();
    
    void SetActive(bool value);
    
    float GetMaxMoveImpulse();
    
    void SetMaxMoveImpulse(float value);
    
    unsigned char mValue[40];
    
  protected:
    DynamicMotor(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(DynamicMotor);
  };
  
  // Provides the interface for casting through PhysicsSpaces.
  class PhysicsRaycastProvider : public RaycastProvider
  {
  public:
    typedef PhysicsRaycastProvider ZilchSelf;
    typedef RaycastProvider ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetDynamicColliders();
    
    void SetDynamicColliders(bool value);
    
    bool GetSelectGhosts();
    
    void SetSelectGhosts(bool value);
    
    bool GetStaticColliders();
    
    void SetStaticColliders(bool value);
    
    bool GetMultiSelectStatic();
    
    void SetMultiSelectStatic(bool value);
    
    bool GetMultiSelectKinematic();
    
    void SetMultiSelectKinematic(bool value);
    
    unsigned char mValue[8];
    
  protected:
    PhysicsRaycastProvider(Zilch::NoType none) : RaycastProvider(none) {}
    ZilchNoCopy(PhysicsRaycastProvider);
  };
  
  // Information about one point of contact in a collision. This is useful for evaluating info about the collision after it happened such as where the objects hit. WARNING: Do not hold onto this after an event is sent out.
  class ContactPoint : public Zilch::ReferenceType
  {
  public:
    typedef ContactPoint ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetLocalPoint();
    
    Zilch::Real3 GetOtherLocalPoint();
    
    Zilch::Real3 GetWorldPoint();
    
    Zilch::Real3 GetWorldNormalTowardsOther();
    
    float GetNormalImpulse();
    
    float GetFrictionImpulse();
    
    Zilch::Real3 GetComplexImpulse();
    
    float GetPenetration();
    
    float GetRelativeVelocity();
    
    unsigned char mValue[24];
    
  protected:
    ContactPoint(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ContactPoint);
  };
  
  // A bi-directional graph edge between a collider and a contact. Exposes some internals to Contact which currently can't be exposed.
  class ContactGraphEdge : public Zilch::ReferenceType
  {
  public:
    typedef ContactGraphEdge ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Cog> GetObject();
    
    Zilch::HandleOf<Cog> GetOtherObject();
    
    bool GetIsGhost();
    
    int GetContactPointCount();
    
    Zilch::HandleOf<ContactPointRange> GetContactPoints();
    
    Zilch::HandleOf<ContactPoint> GetFirstPoint();
    
    unsigned char mValue[16];
    
  protected:
    ContactGraphEdge(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ContactGraphEdge);
  };
  
  // A bi-directional graph edge between a collider and a joint. Exposes convenience functions for iterating over the graph.
  class JointGraphEdge : public Zilch::ReferenceType
  {
  public:
    typedef JointGraphEdge ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Cog> GetObject();
    
    Zilch::HandleOf<Cog> GetOtherObject();
    
    bool GetValid();
    
    Zilch::HandleOf<Joint> GetJoint();
    
    Zilch::HandleOf<Cog> GetOwner();
    
    unsigned char mValue[16];
    
  protected:
    JointGraphEdge(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(JointGraphEdge);
  };
  
  class EventRange : public Zilch::ReferenceType
  {
  public:
    typedef EventRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<EventRange> GetAll();
    
    Zilch::HandleOf<Event> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[16];
    
  protected:
    EventRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(EventRange);
  };
  
  class NetUserRange : public Zilch::ReferenceType
  {
  public:
    typedef NetUserRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<NetUserRange> GetAll();
    
    Zilch::HandleOf<Cog> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[16];
    
  protected:
    NetUserRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(NetUserRange);
  };
  
  class NetHostRange : public Zilch::ReferenceType
  {
  public:
    typedef NetHostRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<NetHostRange> GetAll();
    
    Zilch::HandleOf<NetHost> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[16];
    
  protected:
    NetHostRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(NetHostRange);
  };
  
  class WebServerHeaderRange : public Zilch::ReferenceType
  {
  public:
    typedef WebServerHeaderRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<WebServerHeaderRange> GetAll();
    
    Zilch::String GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[16];
    
  protected:
    WebServerHeaderRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(WebServerHeaderRange);
  };
  
  class TcpSocketBind : public Zilch::Enum
  {
  public:
    typedef TcpSocketBind ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static TcpSocketBind GetAny();
    
    static TcpSocketBind GetLoopback();
    
    TcpSocketBind();
  };
  
  // Network user add response.
  class NetUserAddResponse : public Zilch::Enum
  {
  public:
    typedef NetUserAddResponse ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static NetUserAddResponse GetAccept();
    
    static NetUserAddResponse GetDeny();
    
    NetUserAddResponse();
  };
  
  // Network specification.
  class Network : public Zilch::Enum
  {
  public:
    typedef Network ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static Network GetLAN();
    
    static Network GetInternet();
    
    Network();
  };
  
  // Network refresh result.
  class NetRefreshResult : public Zilch::Enum
  {
  public:
    typedef NetRefreshResult ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static NetRefreshResult GetNoResponse();
    
    static NetRefreshResult GetIndirectBasicHostInfo();
    
    static NetRefreshResult GetDirectBasicHostInfo();
    
    static NetRefreshResult GetExtraHostInfo();
    
    NetRefreshResult();
  };
  
  class NetRole : public Zilch::Enum
  {
  public:
    typedef NetRole ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static NetRole GetClient();
    
    static NetRole GetServer();
    
    static NetRole GetUnspecified();
    
    static NetRole GetOffline();
    
    static NetRole GetMasterServer();
    
    NetRole();
  };
  
  class Authority : public Zilch::Enum
  {
  public:
    typedef Authority ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static Authority GetClient();
    
    static Authority GetServer();
    
    Authority();
  };
  
  class AuthorityMode : public Zilch::Enum
  {
  public:
    typedef AuthorityMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static AuthorityMode GetDynamic();
    
    static AuthorityMode GetFixed();
    
    AuthorityMode();
  };
  
  class DetectionMode : public Zilch::Enum
  {
  public:
    typedef DetectionMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static DetectionMode GetAssume();
    
    static DetectionMode GetManual();
    
    static DetectionMode GetAutomatic();
    
    static DetectionMode GetManumatic();
    
    DetectionMode();
  };
  
  class ReliabilityMode : public Zilch::Enum
  {
  public:
    typedef ReliabilityMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static ReliabilityMode GetUnreliable();
    
    static ReliabilityMode GetReliable();
    
    ReliabilityMode();
  };
  
  class SerializationMode : public Zilch::Enum
  {
  public:
    typedef SerializationMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static SerializationMode GetAll();
    
    static SerializationMode GetChanged();
    
    SerializationMode();
  };
  
  class RouteMode : public Zilch::Enum
  {
  public:
    typedef RouteMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static RouteMode GetExclude();
    
    static RouteMode GetInclude();
    
    RouteMode();
  };
  
  class ReplicationPhase : public Zilch::Enum
  {
  public:
    typedef ReplicationPhase ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static ReplicationPhase GetInitialization();
    
    static ReplicationPhase GetUninitialization();
    
    static ReplicationPhase GetChange();
    
    ReplicationPhase();
  };
  
  class ConvergenceState : public Zilch::Enum
  {
  public:
    typedef ConvergenceState ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static ConvergenceState GetNone();
    
    static ConvergenceState GetActive();
    
    static ConvergenceState GetResting();
    
    ConvergenceState();
  };
  
  // Use Archetype "ResourceId:Name" String as ReplicaType? Otherwise we will use ResourceId u64 as ReplicaType (much more efficient). This impacts bandwidth performance when first spawning/cloning new NetObject types to remote peers.
  class BasicNetType : public Zilch::Enum
  {
  public:
    typedef BasicNetType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static BasicNetType GetOther();
    
    static BasicNetType GetByte();
    
    static BasicNetType GetBoolean();
    
    static BasicNetType GetBoolean2();
    
    static BasicNetType GetBoolean3();
    
    static BasicNetType GetBoolean4();
    
    static BasicNetType GetInteger();
    
    static BasicNetType GetInteger2();
    
    static BasicNetType GetInteger3();
    
    static BasicNetType GetInteger4();
    
    static BasicNetType GetReal();
    
    static BasicNetType GetReal2();
    
    static BasicNetType GetReal3();
    
    static BasicNetType GetReal4();
    
    static BasicNetType GetQuaternion();
    
    static BasicNetType GetReal2x2();
    
    static BasicNetType GetReal3x3();
    
    static BasicNetType GetReal4x4();
    
    static BasicNetType GetDoubleInteger();
    
    static BasicNetType GetDoubleReal();
    
    static BasicNetType GetString();
    
    BasicNetType();
  };
  
  class TransportProtocol : public Zilch::Enum
  {
  public:
    typedef TransportProtocol ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static TransportProtocol GetUnspecified();
    
    static TransportProtocol GetTcp();
    
    static TransportProtocol GetUdp();
    
    TransportProtocol();
  };
  
  class ConnectResponseMode : public Zilch::Enum
  {
  public:
    typedef ConnectResponseMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static ConnectResponseMode GetAccept();
    
    static ConnectResponseMode GetDeny();
    
    static ConnectResponseMode GetCustom();
    
    ConnectResponseMode();
  };
  
  class TransmissionDirection : public Zilch::Enum
  {
  public:
    typedef TransmissionDirection ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static TransmissionDirection GetUnspecified();
    
    static TransmissionDirection GetIncoming();
    
    static TransmissionDirection GetOutgoing();
    
    TransmissionDirection();
  };
  
  class LinkStatus : public Zilch::Enum
  {
  public:
    typedef LinkStatus ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static LinkStatus GetUnspecified();
    
    static LinkStatus GetDisconnected();
    
    static LinkStatus GetAttemptingConnection();
    
    static LinkStatus GetConnected();
    
    LinkStatus();
  };
  
  class LinkState : public Zilch::Enum
  {
  public:
    typedef LinkState ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static LinkState GetUnspecified();
    
    static LinkState GetDisconnected();
    
    static LinkState GetSentDisconnectNotice();
    
    static LinkState GetReceivedDisconnectNotice();
    
    static LinkState GetSentNegativeConnectResponse();
    
    static LinkState GetReceivedNegativeConnectResponse();
    
    static LinkState GetSentConnectRequest();
    
    static LinkState GetReceivedConnectRequest();
    
    static LinkState GetConnected();
    
    LinkState();
  };
  
  class ConnectResponse : public Zilch::Enum
  {
  public:
    typedef ConnectResponse ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static ConnectResponse GetAccept();
    
    static ConnectResponse GetDeny();
    
    static ConnectResponse GetDenyFull();
    
    static ConnectResponse GetDenyTimeout();
    
    ConnectResponse();
  };
  
  class DisconnectReason : public Zilch::Enum
  {
  public:
    typedef DisconnectReason ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static DisconnectReason GetRequest();
    
    static DisconnectReason GetTimeout();
    
    static DisconnectReason GetLatency();
    
    DisconnectReason();
  };
  
  class UserConnectResponse : public Zilch::Enum
  {
  public:
    typedef UserConnectResponse ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static UserConnectResponse GetPending();
    
    static UserConnectResponse GetAccept();
    
    static UserConnectResponse GetDeny();
    
    UserConnectResponse();
  };
  
  class TransferMode : public Zilch::Enum
  {
  public:
    typedef TransferMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static TransferMode GetImmediate();
    
    static TransferMode GetSequenced();
    
    static TransferMode GetOrdered();
    
    TransferMode();
  };
  
  class Receipt : public Zilch::Enum
  {
  public:
    typedef Receipt ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static Receipt GetACK();
    
    static Receipt GetNAK();
    
    static Receipt GetMAYBE();
    
    static Receipt GetEXPIRED();
    
    Receipt();
  };
  
  class WebServerRequestMethod : public Zilch::Enum
  {
  public:
    typedef WebServerRequestMethod ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static WebServerRequestMethod GetOptions();
    
    static WebServerRequestMethod GetGet();
    
    static WebServerRequestMethod GetHead();
    
    static WebServerRequestMethod GetPost();
    
    static WebServerRequestMethod GetPut();
    
    static WebServerRequestMethod GetDelete();
    
    static WebServerRequestMethod GetTrace();
    
    static WebServerRequestMethod GetConnect();
    
    static WebServerRequestMethod GetOther();
    
    WebServerRequestMethod();
  };
  
  class WebResponseCode : public Zilch::Enum
  {
  public:
    typedef WebResponseCode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static WebResponseCode GetInvalid();
    
    static WebResponseCode GetNoServerResponse();
    
    static WebResponseCode GetContinue();
    
    static WebResponseCode GetSwitchingProtocols();
    
    static WebResponseCode GetOK();
    
    static WebResponseCode GetCreated();
    
    static WebResponseCode GetAccepted();
    
    static WebResponseCode GetNonauthoritativeInformation();
    
    static WebResponseCode GetNoContent();
    
    static WebResponseCode GetResetContent();
    
    static WebResponseCode GetPartialContent();
    
    static WebResponseCode GetMovedPermanently();
    
    static WebResponseCode GetObjectMovedTemporarily();
    
    static WebResponseCode GetSeeOther();
    
    static WebResponseCode GetNotModified();
    
    static WebResponseCode GetTemporaryRedirect();
    
    static WebResponseCode GetPermanentRedirect();
    
    static WebResponseCode GetBadRequest();
    
    static WebResponseCode GetAccessDenied();
    
    static WebResponseCode GetForbidden();
    
    static WebResponseCode GetNotFound();
    
    static WebResponseCode GetHTTPVerbNotAllowed();
    
    static WebResponseCode GetClientBrowserRejectsMIME();
    
    static WebResponseCode GetProxyAuthenticationRequired();
    
    static WebResponseCode GetPreconditionFailed();
    
    static WebResponseCode GetRequestEntityTooLarge();
    
    static WebResponseCode GetRequestURITooLarge();
    
    static WebResponseCode GetUnsupportedMediaType();
    
    static WebResponseCode GetRequestedRangeNotSatisfiable();
    
    static WebResponseCode GetExecutionFailed();
    
    static WebResponseCode GetLockedError();
    
    static WebResponseCode GetInternalServerError();
    
    static WebResponseCode GetUnimplementedHeaderValueUsed();
    
    static WebResponseCode GetGatewayProxyReceivedInvalid();
    
    static WebResponseCode GetServiceUnavailable();
    
    static WebResponseCode GetGatewayTimedOut();
    
    static WebResponseCode GetHTTPVersionNotSupported();
    
    WebResponseCode();
  };
  
  class ZeroMetaArrayNetPropertyInfos : public MetaArray
  {
  public:
    typedef ZeroMetaArrayNetPropertyInfos ZilchSelf;
    typedef MetaArray ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ZeroMetaArrayNetPropertyInfos(Zilch::NoType none) : MetaArray(none) {}
    ZilchNoCopy(ZeroMetaArrayNetPropertyInfos);
  };
  
  class NetPropertyInfos : public Zilch::ReferenceType
  {
  public:
    typedef NetPropertyInfos ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[32];
    
  protected:
    NetPropertyInfos(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(NetPropertyInfos);
  };
  
  class ConnectionEvent : public Event
  {
  public:
    typedef ConnectionEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetHost();
    
    void SetHost(const Zilch::String& value);
    
    int GetPort();
    
    void SetPort(int value);
    
    int GetIndex();
    
    void SetIndex(int value);
    
    bool GetIncoming();
    
    void SetIncoming(bool value);
    
    unsigned char mValue[24];
    
  protected:
    ConnectionEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ConnectionEvent);
  };
  
  class ReceivedDataEvent : public ConnectionEvent
  {
  public:
    typedef ReceivedDataEvent ZilchSelf;
    typedef ConnectionEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetBuffer();
    
    void SetBuffer(const Zilch::String& value);
    
    unsigned char mValue[40];
    
  protected:
    ReceivedDataEvent(Zilch::NoType none) : ConnectionEvent(none) {}
    ZilchNoCopy(ReceivedDataEvent);
  };
  
  // This event can be sent over the network.
  class SendableEvent : public Event
  {
  public:
    typedef SendableEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    SendableEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(SendableEvent);
  };
  
  class WebResponseEvent : public Event
  {
  public:
    typedef WebResponseEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<AsyncWebRequest> GetAsyncWebRequest();
    
    void SetAsyncWebRequest(AsyncWebRequest* value);
    
    WebResponseCode GetResponseCode();
    
    void SetResponseCode(const WebResponseCode& value);
    
    Zilch::String GetData();
    
    void SetData(const Zilch::String& value);
    
    int GetHeaderCount();
    
    Zilch::String GetHeader(int __0);
    
    long long GetTotalDownloaded();
    
    long long GetTotalExpected();
    
    float GetProgress();
    
    ProgressType GetProgressType();
    
    Zilch::String GetError();
    
    unsigned char mValue[144];
    
  protected:
    WebResponseEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(WebResponseEvent);
  };
  
  class WebServerRequestEvent : public Event
  {
  public:
    typedef WebServerRequestEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<WebServer> GetWebServer();
    
    WebServerRequestMethod GetMethod();
    
    Zilch::String GetMethodString();
    
    Zilch::String GetOriginalUri();
    
    Zilch::String GetDecodedUri();
    
    Zilch::String GetPostData();
    
    Zilch::String GetData();
    
    bool HasHeader(const Zilch::String& __0);
    
    Zilch::String GetHeaderValue(const Zilch::String& __0);
    
    Zilch::HandleOf<WebServerHeaderRange> GetHeaderNames();
    
    void Respond(const WebResponseCode& __0, const Zilch::String& __1, const Zilch::String& __2);
    
    void Respond(const Zilch::String& __0, const Zilch::String& __1, const Zilch::String& __2);
    
    void Respond(const Zilch::String& __0);
    
    unsigned char mValue[128];
    
  protected:
    WebServerRequestEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(WebServerRequestEvent);
  };
  
  // Dispatched when the net peer host is acquiring project-specific host information.
  class AcquireNetHostInfo : public Event
  {
  public:
    typedef AcquireNetHostInfo ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<EventBundle> GetReturnHostInfo();
    
    void SetReturnHostInfo(EventBundle* value);
    
    unsigned char mValue[80];
    
  protected:
    AcquireNetHostInfo(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(AcquireNetHostInfo);
  };
  
  // Dispatched when a host discovery operation update occurs.
  class NetHostUpdate : public Event
  {
  public:
    typedef NetHostUpdate ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    NetRefreshResult GetRefreshResult();
    
    float GetResponseTime();
    
    Network GetNetwork();
    
    Zilch::HandleOf<NetHost> GetHost();
    
    unsigned char mValue[24];
    
  protected:
    NetHostUpdate(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetHostUpdate);
  };
  
  // Dispatched when a host discovery operation update occurs.
  class NetHostListUpdate : public Event
  {
  public:
    typedef NetHostListUpdate ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Network GetNetwork();
    
    unsigned char mValue[8];
    
  protected:
    NetHostListUpdate(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetHostListUpdate);
  };
  
  // Dispatched after successfully opening the net peer.
  class NetPeerOpened : public Event
  {
  public:
    typedef NetPeerOpened ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    NetPeerOpened(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetPeerOpened);
  };
  
  // Dispatched before gracefully closing the net peer.
  class NetPeerClosed : public Event
  {
  public:
    typedef NetPeerClosed ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    NetPeerClosed(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetPeerClosed);
  };
  
  // Dispatched after fully joining or hosting a network game.
  class NetGameStarted : public Event
  {
  public:
    typedef NetGameStarted ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<GameSession> GetGameSession();
    
    unsigned char mValue[8];
    
  protected:
    NetGameStarted(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetGameStarted);
  };
  
  // Dispatched after sending a connect request.
  class NetPeerSentConnectRequest : public Event
  {
  public:
    typedef NetPeerSentConnectRequest ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<IpAddress> GetTheirIpAddress();
    
    Zilch::HandleOf<EventBundle> GetOurRequestBundle();
    
    int GetOurPendingUserAddRequestCount();
    
    unsigned char mValue[224];
    
  protected:
    NetPeerSentConnectRequest(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetPeerSentConnectRequest);
  };
  
  // Dispatched after receiving a connect request. If accepted, their net peer ID is assigned immediately after this. Return true to accept the connect request, else false.
  class NetPeerReceivedConnectRequest : public Event
  {
  public:
    typedef NetPeerReceivedConnectRequest ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<IpAddress> GetTheirIpAddress();
    
    Zilch::HandleOf<EventBundle> GetTheirRequestBundle();
    
    int GetTheirPendingUserAddRequestCount();
    
    Zilch::HandleOf<IpAddress> GetOurIpAddress();
    
    bool GetReturnOurConnectResponse();
    
    void SetReturnOurConnectResponse(bool value);
    
    Zilch::HandleOf<EventBundle> GetReturnOurResponseBundle();
    
    void SetReturnOurResponseBundle(EventBundle* value);
    
    unsigned char mValue[448];
    
  protected:
    NetPeerReceivedConnectRequest(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetPeerReceivedConnectRequest);
  };
  
  // Dispatched after sending a connect response. If denied, their net peer ID is released and link is destroyed immediately after this.
  class NetPeerSentConnectResponse : public Event
  {
  public:
    typedef NetPeerSentConnectResponse ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetTheirNetPeerId();
    
    Zilch::HandleOf<IpAddress> GetTheirIpAddress();
    
    Zilch::HandleOf<EventBundle> GetTheirRequestBundle();
    
    int GetTheirPendingUserAddRequestCount();
    
    Zilch::HandleOf<IpAddress> GetOurIpAddress();
    
    ConnectResponse GetOurConnectResponse();
    
    Zilch::HandleOf<EventBundle> GetOurResponseBundle();
    
    unsigned char mValue[456];
    
  protected:
    NetPeerSentConnectResponse(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetPeerSentConnectResponse);
  };
  
  // Dispatched after receiving a connect response. If accepted, our net peer ID is set immediately before this and a connect confirmation is sent after this. If denied, our net peer ID is cleared and link is destroyed immediately after this.
  class NetPeerReceivedConnectResponse : public Event
  {
  public:
    typedef NetPeerReceivedConnectResponse ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<IpAddress> GetTheirIpAddress();
    
    Zilch::HandleOf<EventBundle> GetOurRequestBundle();
    
    int GetOurPendingUserAddRequestCount();
    
    Zilch::HandleOf<IpAddress> GetOurIpAddress();
    
    ConnectResponse GetTheirConnectResponse();
    
    Zilch::HandleOf<EventBundle> GetTheirResponseBundle();
    
    int GetOurNetPeerId();
    
    unsigned char mValue[456];
    
  protected:
    NetPeerReceivedConnectResponse(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetPeerReceivedConnectResponse);
  };
  
  // Dispatched after sending or receiving a connect confirmation.
  class NetLinkConnected : public Event
  {
  public:
    typedef NetLinkConnected ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetTheirNetPeerId();
    
    Zilch::HandleOf<IpAddress> GetTheirIpAddress();
    
    TransmissionDirection GetDirection();
    
    unsigned char mValue[152];
    
  protected:
    NetLinkConnected(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetLinkConnected);
  };
  
  // Dispatched after sending or receiving a disconnect notice. Their net peer ID is released and link is destroyed immediately after this.
  class NetLinkDisconnected : public Event
  {
  public:
    typedef NetLinkDisconnected ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetTheirNetPeerId();
    
    Zilch::HandleOf<IpAddress> GetTheirIpAddress();
    
    DisconnectReason GetDisconnectReason();
    
    Zilch::HandleOf<EventBundle> GetRequestBundle();
    
    TransmissionDirection GetDirection();
    
    unsigned char mValue[240];
    
  protected:
    NetLinkDisconnected(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetLinkDisconnected);
  };
  
  // Dispatched after fully loading and synchronizing a level in a net space.
  class NetLevelStarted : public Event
  {
  public:
    typedef NetLevelStarted ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<GameSession> GetGameSession();
    
    Zilch::HandleOf<Space> GetSpace();
    
    Zilch::String GetLevelName();
    
    unsigned char mValue[24];
    
  protected:
    NetLevelStarted(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetLevelStarted);
  };
  
  // Dispatched after sending a net user add request.
  class NetPeerSentUserAddRequest : public Event
  {
  public:
    typedef NetPeerSentUserAddRequest ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetTheirNetPeerId();
    
    Zilch::HandleOf<IpAddress> GetTheirIpAddress();
    
    Zilch::HandleOf<EventBundle> GetOurRequestBundle();
    
    unsigned char mValue[224];
    
  protected:
    NetPeerSentUserAddRequest(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetPeerSentUserAddRequest);
  };
  
  // Dispatched after receiving a net user add request.
  class NetPeerReceivedUserAddRequest : public Event
  {
  public:
    typedef NetPeerReceivedUserAddRequest ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetTheirNetPeerId();
    
    Zilch::HandleOf<IpAddress> GetTheirIpAddress();
    
    Zilch::HandleOf<EventBundle> GetTheirRequestBundle();
    
    bool GetReturnOurAddResponse();
    
    void SetReturnOurAddResponse(bool value);
    
    Zilch::HandleOf<EventBundle> GetReturnOurResponseBundle();
    
    void SetReturnOurResponseBundle(EventBundle* value);
    
    Zilch::HandleOf<Cog> GetReturnTheirNetUser();
    
    void SetReturnTheirNetUser(Cog* value);
    
    int GetTheirNetUserId();
    
    unsigned char mValue[328];
    
  protected:
    NetPeerReceivedUserAddRequest(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetPeerReceivedUserAddRequest);
  };
  
  // Dispatched after sending a net user add response.
  class NetPeerSentUserAddResponse : public Event
  {
  public:
    typedef NetPeerSentUserAddResponse ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetTheirNetPeerId();
    
    Zilch::HandleOf<IpAddress> GetTheirIpAddress();
    
    Zilch::HandleOf<EventBundle> GetTheirRequestBundle();
    
    NetUserAddResponse GetOurAddResponse();
    
    Zilch::HandleOf<EventBundle> GetOurResponseBundle();
    
    int GetTheirNetUserId();
    
    Zilch::HandleOf<Cog> GetTheirNetUser();
    
    unsigned char mValue[328];
    
  protected:
    NetPeerSentUserAddResponse(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetPeerSentUserAddResponse);
  };
  
  // Dispatched after receiving a net user add response.
  class NetPeerReceivedUserAddResponse : public Event
  {
  public:
    typedef NetPeerReceivedUserAddResponse ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetTheirNetPeerId();
    
    Zilch::HandleOf<IpAddress> GetTheirIpAddress();
    
    Zilch::HandleOf<EventBundle> GetOurRequestBundle();
    
    NetUserAddResponse GetTheirAddResponse();
    
    Zilch::HandleOf<EventBundle> GetTheirResponseBundle();
    
    int GetOurNetUserId();
    
    unsigned char mValue[320];
    
  protected:
    NetPeerReceivedUserAddResponse(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetPeerReceivedUserAddResponse);
  };
  
  // Dispatched after the net user loses network ownership of a net object.
  class NetUserLostObjectOwnership : public Event
  {
  public:
    typedef NetUserLostObjectOwnership ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Cog> GetLostObject();
    
    Zilch::HandleOf<Cog> GetCurrentNetUserOwner();
    
    unsigned char mValue[16];
    
  protected:
    NetUserLostObjectOwnership(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetUserLostObjectOwnership);
  };
  
  // Dispatched after the net user acquires network ownership of a net object.
  class NetUserAcquiredObjectOwnership : public Event
  {
  public:
    typedef NetUserAcquiredObjectOwnership ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Cog> GetAcquiredObject();
    
    Zilch::HandleOf<Cog> GetPreviousNetUserOwner();
    
    unsigned char mValue[16];
    
  protected:
    NetUserAcquiredObjectOwnership(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetUserAcquiredObjectOwnership);
  };
  
  // Dispatched while adding C++ component net properties to a NetObject.
  class RegisterCppNetProperties : public Event
  {
  public:
    typedef RegisterCppNetProperties ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    RegisterCppNetProperties(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(RegisterCppNetProperties);
  };
  
  // Dispatched after the net object is brought online.
  class NetObjectOnline : public Event
  {
  public:
    typedef NetObjectOnline ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<GameSession> GetGameSession();
    
    Zilch::HandleOf<Space> GetSpace();
    
    Zilch::HandleOf<Cog> GetObject();
    
    bool GetIsStartOfLifespan();
    
    unsigned char mValue[32];
    
  protected:
    NetObjectOnline(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetObjectOnline);
  };
  
  // Dispatched before the net object is taken offline.
  class NetObjectOffline : public Event
  {
  public:
    typedef NetObjectOffline ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<GameSession> GetGameSession();
    
    Zilch::HandleOf<Space> GetSpace();
    
    Zilch::HandleOf<Cog> GetObject();
    
    bool GetIsEndOfLifespan();
    
    unsigned char mValue[32];
    
  protected:
    NetObjectOffline(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetObjectOffline);
  };
  
  // Dispatched after the net object changes network ownership.
  class NetUserOwnerChanged : public Event
  {
  public:
    typedef NetUserOwnerChanged ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Cog> GetPreviousNetUserOwner();
    
    Zilch::HandleOf<Cog> GetCurrentNetUserOwner();
    
    unsigned char mValue[16];
    
  protected:
    NetUserOwnerChanged(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetUserOwnerChanged);
  };
  
  // Dispatched after an outgoing/incoming net channel property change is detected during a particular replication phase.
  class NetChannelPropertyChange : public Event
  {
  public:
    typedef NetChannelPropertyChange ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetTimestamp();
    
    ReplicationPhase GetReplicationPhase();
    
    TransmissionDirection GetDirection();
    
    Zilch::HandleOf<Cog> GetObject();
    
    Zilch::String GetChannelName();
    
    Zilch::String GetComponentName();
    
    Zilch::String GetPropertyName();
    
    unsigned char mValue[48];
    
  protected:
    NetChannelPropertyChange(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetChannelPropertyChange);
  };
  
  // Dispatched after a dispatched net event is sent.
  class NetEventSent : public Event
  {
  public:
    typedef NetEventSent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetTheirNetPeerId();
    
    Zilch::HandleOf<Event> GetNetEvent();
    
    Zilch::HandleOf<Cog> GetDestination();
    
    unsigned char mValue[24];
    
  protected:
    NetEventSent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetEventSent);
  };
  
  // Dispatched before a received net event is dispatched.
  class NetEventReceived : public Event
  {
  public:
    typedef NetEventReceived ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetTheirNetPeerId();
    
    Zilch::HandleOf<Event> GetNetEvent();
    
    Zilch::HandleOf<Cog> GetDestination();
    
    bool GetReturnAllow();
    
    void SetReturnAllow(bool value);
    
    unsigned char mValue[32];
    
  protected:
    NetEventReceived(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetEventReceived);
  };
  
  // Dispatched when a NetHostRecord is discovered, Updated, or Expired.
  class NetHostRecordEvent : public Event
  {
  public:
    typedef NetHostRecordEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<NetHostRecord> GetHostRecord();
    
    unsigned char mValue[8];
    
  protected:
    NetHostRecordEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(NetHostRecordEvent);
  };
  
  class EventBundleMetaComposition : public MetaComposition
  {
  public:
    typedef EventBundleMetaComposition ZilchSelf;
    typedef MetaComposition ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    EventBundleMetaComposition(Zilch::NoType none) : MetaComposition(none) {}
    ZilchNoCopy(EventBundleMetaComposition);
  };
  
  class PropertyFilterMultiPrimitiveTypes : public MetaPropertyFilter
  {
  public:
    typedef PropertyFilterMultiPrimitiveTypes ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PropertyFilterMultiPrimitiveTypes(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(PropertyFilterMultiPrimitiveTypes);
  };
  
  class PropertyFilterFloatingPointTypes : public MetaPropertyFilter
  {
  public:
    typedef PropertyFilterFloatingPointTypes ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PropertyFilterFloatingPointTypes(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(PropertyFilterFloatingPointTypes);
  };
  
  class PropertyFilterArithmeticTypes : public MetaPropertyFilter
  {
  public:
    typedef PropertyFilterArithmeticTypes ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PropertyFilterArithmeticTypes(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(PropertyFilterArithmeticTypes);
  };
  
  class EditInGameFilter : public MetaPropertyFilter
  {
  public:
    typedef EditInGameFilter ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    EditInGameFilter(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(EditInGameFilter);
  };
  
  class MetaNetProperty : public MetaAttribute
  {
  public:
    typedef MetaNetProperty ZilchSelf;
    typedef MetaAttribute ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetNetPropertyConfig();
    
    void SetNetPropertyConfig(const Zilch::String& value);
    
    Zilch::String GetNetChannelConfig();
    
    void SetNetChannelConfig(const Zilch::String& value);
    
    unsigned char mValue[16];
    
  protected:
    MetaNetProperty(Zilch::NoType none) : MetaAttribute(none) {}
    ZilchNoCopy(MetaNetProperty);
  };
  
  class PropertyFilterOther : public MetaPropertyFilter
  {
  public:
    typedef PropertyFilterOther ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PropertyFilterOther(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(PropertyFilterOther);
  };
  
  class PropertyFilterBoolean : public MetaPropertyFilter
  {
  public:
    typedef PropertyFilterBoolean ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PropertyFilterBoolean(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(PropertyFilterBoolean);
  };
  
  class PropertyFilterInteger : public MetaPropertyFilter
  {
  public:
    typedef PropertyFilterInteger ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PropertyFilterInteger(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(PropertyFilterInteger);
  };
  
  class PropertyFilterDoubleInteger : public MetaPropertyFilter
  {
  public:
    typedef PropertyFilterDoubleInteger ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PropertyFilterDoubleInteger(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(PropertyFilterDoubleInteger);
  };
  
  class PropertyFilterInteger2 : public MetaPropertyFilter
  {
  public:
    typedef PropertyFilterInteger2 ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PropertyFilterInteger2(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(PropertyFilterInteger2);
  };
  
  class PropertyFilterInteger3 : public MetaPropertyFilter
  {
  public:
    typedef PropertyFilterInteger3 ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PropertyFilterInteger3(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(PropertyFilterInteger3);
  };
  
  class PropertyFilterInteger4 : public MetaPropertyFilter
  {
  public:
    typedef PropertyFilterInteger4 ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PropertyFilterInteger4(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(PropertyFilterInteger4);
  };
  
  class PropertyFilterReal : public MetaPropertyFilter
  {
  public:
    typedef PropertyFilterReal ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PropertyFilterReal(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(PropertyFilterReal);
  };
  
  class PropertyFilterDoubleReal : public MetaPropertyFilter
  {
  public:
    typedef PropertyFilterDoubleReal ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PropertyFilterDoubleReal(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(PropertyFilterDoubleReal);
  };
  
  class PropertyFilterReal2 : public MetaPropertyFilter
  {
  public:
    typedef PropertyFilterReal2 ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PropertyFilterReal2(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(PropertyFilterReal2);
  };
  
  class PropertyFilterReal3 : public MetaPropertyFilter
  {
  public:
    typedef PropertyFilterReal3 ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PropertyFilterReal3(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(PropertyFilterReal3);
  };
  
  class PropertyFilterReal4 : public MetaPropertyFilter
  {
  public:
    typedef PropertyFilterReal4 ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PropertyFilterReal4(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(PropertyFilterReal4);
  };
  
  class PropertyFilterQuaternion : public MetaPropertyFilter
  {
  public:
    typedef PropertyFilterQuaternion ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PropertyFilterQuaternion(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(PropertyFilterQuaternion);
  };
  
  class PropertyFilterString : public MetaPropertyFilter
  {
  public:
    typedef PropertyFilterString ZilchSelf;
    typedef MetaPropertyFilter ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PropertyFilterString(Zilch::NoType none) : MetaPropertyFilter(none) {}
    ZilchNoCopy(PropertyFilterString);
  };
  
  // Manages all the client/server/peer connections .
  class TcpSocket : public EventObject
  {
  public:
    typedef TcpSocket ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Attempt to connect to a host on the given port.
    void Connect(const Zilch::String& host, int port);
    
    bool Listen(int __0);
    
    // Listen for incoming connections.
    bool Listen(int port, int maxConnections);
    
    // Listen for incoming connections.
    bool Listen(int port, int maxConnections, const TcpSocketBind& bindTo);
    
    // Close all activity (whether listening or connected to a server).
    void Close();
    
    void CloseConnection(int index);
    
    // Send an event to a specific connection index.
    void SendTo(const Zilch::String& eventId, SendableEvent* event, int index);
    
    // Send an event to all connections.
    void SendToAll(const Zilch::String& eventId, SendableEvent* event);
    
    // Send an event to all connections except a particular connection index.
    void SendToAllExcept(const Zilch::String& eventId, SendableEvent* event, int exceptIndex);
    
    // Send an event to all connections and dispatch on self.
    void SendToAllAndSelf(const Zilch::String& eventId, SendableEvent* event);
    
    // Check if we are currently connected to anyone.
    bool IsConnected();
    
    int GetOutgoingConnectionCount();
    
    int GetIncomingConnectionCount();
    
    int GetConnectionCount();
    
    unsigned char mValue[200];
    
  protected:
    TcpSocket(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(TcpSocket);
  };
  
  class SimpleSocket : public Component
  {
  public:
    typedef SimpleSocket ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<TcpSocket> GetSocket();
    
    unsigned char mValue[304];
    
  protected:
    SimpleSocket(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SimpleSocket);
  };
  
  class ConnectionData : public Zilch::ReferenceType
  {
  public:
    typedef ConnectionData ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetHost();
    
    int GetPort();
    
    int GetIndex();
    
    void SetIndex(int value);
    
    bool GetIncoming();
    
    void SetIncoming(bool value);
    
    unsigned char mValue[136];
    
  protected:
    ConnectionData(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ConnectionData);
  };
  
  class WebServer : public ReferenceCountedThreadSafeId32EventObject
  {
  public:
    typedef WebServer ZilchSelf;
    typedef ReferenceCountedThreadSafeId32EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static Zilch::HandleOf<WebServer> Create();
    
    bool Host(int __0);
    
    void Close();
    
    static Zilch::String GetWebResponseCodeString(const WebResponseCode& __0);
    
    static Zilch::String UrlParamEncode(const Zilch::String& __0);
    
    static Zilch::String UrlParamDecode(const Zilch::String& __0);
    
    void MapExtensionToMimeType(const Zilch::String& __0, const Zilch::String& __1);
    
    Zilch::String GetMimeTypeFromExtension(const Zilch::String& __0);
    
    void ClearMimeTypes();
    
    Zilch::String GetPath();
    
    void SetPath(const Zilch::String& value);
    
    unsigned char mValue[256];
    
  protected:
    WebServer(Zilch::NoType none) : ReferenceCountedThreadSafeId32EventObject(none) {}
    ZilchNoCopy(WebServer);
  };
  
  class AsyncWebRequest : public ReferenceCountedThreadSafeId32EventObject
  {
  public:
    typedef AsyncWebRequest ZilchSelf;
    typedef ReferenceCountedThreadSafeId32EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetUrl();
    
    void SetUrl(const Zilch::String& value);
    
    void Run();
    
    void Cancel();
    
    void ClearAll();
    
    void ClearRequestData();
    
    void ClearResponseData();
    
    void AddHeader(const Zilch::String& __0, const Zilch::String& __1);
    
    void AddFile(const Zilch::String& __0, const Zilch::String& __1);
    
    void AddField(const Zilch::String& __0, const Zilch::String& __1);
    
    bool GetIsRunning();
    
    static Zilch::HandleOf<AsyncWebRequest> Create();
    
    bool GetStoreData();
    
    long long GetTotalDownloaded();
    
    long long GetTotalExpected();
    
    float GetProgress();
    
    ProgressType GetProgressType();
    
    Zilch::String GetError();
    
    unsigned char mValue[480];
    
  protected:
    AsyncWebRequest(Zilch::NoType none) : ReferenceCountedThreadSafeId32EventObject(none) {}
    ZilchNoCopy(AsyncWebRequest);
  };
  
  // A component we can use to facilitate web requests.
  class WebRequester : public Component
  {
  public:
    typedef WebRequester ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetUrl();
    
    void SetUrl(const Zilch::String& value);
    
    // Run the web request (we should get data back in a WebResponse event).
    Zilch::HandleOf<AsyncWebRequest> Run();
    
    // Clear headers and post data.
    void Clear();
    
    void CancelActiveRequests();
    
    void AddHeader(const Zilch::String& __0, const Zilch::String& __1);
    
    void AddFile(const Zilch::String& __0, const Zilch::String& __1);
    
    void AddField(const Zilch::String& __0, const Zilch::String& __1);
    
    bool GetCancelOnDestruction();
    
    void SetCancelOnDestruction(bool value);
    
    unsigned char mValue[104];
    
  protected:
    WebRequester(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(WebRequester);
  };
  
  // Bit-packed data stream.
  class BitStream : public Zilch::ReferenceType
  {
  public:
    typedef BitStream ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static int MeasureBoolean();
    
    static int MeasureInteger();
    
    static int MeasureDoubleInteger();
    
    static int MeasureInteger2();
    
    static int MeasureInteger3();
    
    static int MeasureInteger4();
    
    static int MeasureReal();
    
    static int MeasureDoubleReal();
    
    static int MeasureReal2();
    
    static int MeasureReal3();
    
    static int MeasureReal4();
    
    static int MeasureQuaternion();
    
    static int MeasureString();
    
    static int MeasureString(const Zilch::String& __0);
    
    static int MeasureRealHalf();
    
    static int MeasureReal2Half();
    
    static int MeasureReal3Half();
    
    static int MeasureReal4Half();
    
    static int MeasureIntegerQuantized(int __0, int __1);
    
    static int MeasureIntegerQuantized(int __0, int __1, int __2);
    
    static int MeasureDoubleIntegerQuantized(long long __0, long long __1);
    
    static int MeasureDoubleIntegerQuantized(long long __0, long long __1, long long __2);
    
    static int MeasureInteger2Quantized(const Zilch::Integer2& __0, const Zilch::Integer2& __1);
    
    static int MeasureInteger2Quantized(const Zilch::Integer2& __0, const Zilch::Integer2& __1, const Zilch::Integer2& __2);
    
    static int MeasureInteger3Quantized(const Zilch::Integer3& __0, const Zilch::Integer3& __1);
    
    static int MeasureInteger3Quantized(const Zilch::Integer3& __0, const Zilch::Integer3& __1, const Zilch::Integer3& __2);
    
    static int MeasureInteger4Quantized(const Zilch::Integer4& __0, const Zilch::Integer4& __1);
    
    static int MeasureInteger4Quantized(const Zilch::Integer4& __0, const Zilch::Integer4& __1, const Zilch::Integer4& __2);
    
    static int MeasureRealQuantized(float __0, float __1);
    
    static int MeasureRealQuantized(float __0, float __1, float __2);
    
    static int MeasureDoubleRealQuantized(double __0, double __1);
    
    static int MeasureDoubleRealQuantized(double __0, double __1, double __2);
    
    static int MeasureReal2Quantized(const Zilch::Real2& __0, const Zilch::Real2& __1);
    
    static int MeasureReal2Quantized(const Zilch::Real2& __0, const Zilch::Real2& __1, const Zilch::Real2& __2);
    
    static int MeasureReal3Quantized(const Zilch::Real3& __0, const Zilch::Real3& __1);
    
    static int MeasureReal3Quantized(const Zilch::Real3& __0, const Zilch::Real3& __1, const Zilch::Real3& __2);
    
    static int MeasureReal4Quantized(const Zilch::Real4& __0, const Zilch::Real4& __1);
    
    static int MeasureReal4Quantized(const Zilch::Real4& __0, const Zilch::Real4& __1, const Zilch::Real4& __2);
    
    void WriteBoolean(bool __0);
    
    void WriteInteger(int __0);
    
    void WriteDoubleInteger(long long __0);
    
    void WriteInteger2(const Zilch::Integer2& __0);
    
    void WriteInteger3(const Zilch::Integer3& __0);
    
    void WriteInteger4(const Zilch::Integer4& __0);
    
    void WriteReal(float __0);
    
    void WriteDoubleReal(double __0);
    
    void WriteReal2(const Zilch::Real2& __0);
    
    void WriteReal3(const Zilch::Real3& __0);
    
    void WriteReal4(const Zilch::Real4& __0);
    
    void WriteQuaternion(const Zilch::Quaternion& __0);
    
    void WriteString(const Zilch::String& __0);
    
    void WriteRealHalf(float __0);
    
    void WriteReal2Half(const Zilch::Real2& __0);
    
    void WriteReal3Half(const Zilch::Real3& __0);
    
    void WriteReal4Half(const Zilch::Real4& __0);
    
    void WriteIntegerQuantized(int __0, int __1, int __2);
    
    void WriteIntegerQuantized(int __0, int __1, int __2, int __3);
    
    void WriteDoubleIntegerQuantized(long long __0, long long __1, long long __2);
    
    void WriteDoubleIntegerQuantized(long long __0, long long __1, long long __2, long long __3);
    
    void WriteInteger2Quantized(const Zilch::Integer2& __0, const Zilch::Integer2& __1, const Zilch::Integer2& __2);
    
    void WriteInteger2Quantized(const Zilch::Integer2& __0, const Zilch::Integer2& __1, const Zilch::Integer2& __2, const Zilch::Integer2& __3);
    
    void WriteInteger3Quantized(const Zilch::Integer3& __0, const Zilch::Integer3& __1, const Zilch::Integer3& __2);
    
    void WriteInteger3Quantized(const Zilch::Integer3& __0, const Zilch::Integer3& __1, const Zilch::Integer3& __2, const Zilch::Integer3& __3);
    
    void WriteInteger4Quantized(const Zilch::Integer4& __0, const Zilch::Integer4& __1, const Zilch::Integer4& __2);
    
    void WriteInteger4Quantized(const Zilch::Integer4& __0, const Zilch::Integer4& __1, const Zilch::Integer4& __2, const Zilch::Integer4& __3);
    
    void WriteRealQuantized(float __0, float __1, float __2);
    
    void WriteRealQuantized(float __0, float __1, float __2, float __3);
    
    void WriteDoubleRealQuantized(double __0, double __1, double __2);
    
    void WriteDoubleRealQuantized(double __0, double __1, double __2, double __3);
    
    void WriteReal2Quantized(const Zilch::Real2& __0, const Zilch::Real2& __1, const Zilch::Real2& __2);
    
    void WriteReal2Quantized(const Zilch::Real2& __0, const Zilch::Real2& __1, const Zilch::Real2& __2, const Zilch::Real2& __3);
    
    void WriteReal3Quantized(const Zilch::Real3& __0, const Zilch::Real3& __1, const Zilch::Real3& __2);
    
    void WriteReal3Quantized(const Zilch::Real3& __0, const Zilch::Real3& __1, const Zilch::Real3& __2, const Zilch::Real3& __3);
    
    void WriteReal4Quantized(const Zilch::Real4& __0, const Zilch::Real4& __1, const Zilch::Real4& __2);
    
    void WriteReal4Quantized(const Zilch::Real4& __0, const Zilch::Real4& __1, const Zilch::Real4& __2, const Zilch::Real4& __3);
    
    bool CanReadBoolean();
    
    bool CanReadInteger();
    
    bool CanReadDoubleInteger();
    
    bool CanReadInteger2();
    
    bool CanReadInteger3();
    
    bool CanReadInteger4();
    
    bool CanReadReal();
    
    bool CanReadDoubleReal();
    
    bool CanReadReal2();
    
    bool CanReadReal3();
    
    bool CanReadReal4();
    
    bool CanReadQuaternion();
    
    bool CanReadString();
    
    bool CanReadRealHalf();
    
    bool CanReadReal2Half();
    
    bool CanReadReal3Half();
    
    bool CanReadReal4Half();
    
    bool CanReadIntegerQuantized(int __0, int __1);
    
    bool CanReadIntegerQuantized(int __0, int __1, int __2);
    
    bool CanReadDoubleIntegerQuantized(long long __0, long long __1);
    
    bool CanReadDoubleIntegerQuantized(long long __0, long long __1, long long __2);
    
    bool CanReadInteger2Quantized(const Zilch::Integer2& __0, const Zilch::Integer2& __1);
    
    bool CanReadInteger2Quantized(const Zilch::Integer2& __0, const Zilch::Integer2& __1, const Zilch::Integer2& __2);
    
    bool CanReadInteger3Quantized(const Zilch::Integer3& __0, const Zilch::Integer3& __1);
    
    bool CanReadInteger3Quantized(const Zilch::Integer3& __0, const Zilch::Integer3& __1, const Zilch::Integer3& __2);
    
    bool CanReadInteger4Quantized(const Zilch::Integer4& __0, const Zilch::Integer4& __1);
    
    bool CanReadInteger4Quantized(const Zilch::Integer4& __0, const Zilch::Integer4& __1, const Zilch::Integer4& __2);
    
    bool CanReadRealQuantized(float __0, float __1);
    
    bool CanReadRealQuantized(float __0, float __1, float __2);
    
    bool CanReadDoubleRealQuantized(double __0, double __1);
    
    bool CanReadDoubleRealQuantized(double __0, double __1, double __2);
    
    bool CanReadReal2Quantized(const Zilch::Real2& __0, const Zilch::Real2& __1);
    
    bool CanReadReal2Quantized(const Zilch::Real2& __0, const Zilch::Real2& __1, const Zilch::Real2& __2);
    
    bool CanReadReal3Quantized(const Zilch::Real3& __0, const Zilch::Real3& __1);
    
    bool CanReadReal3Quantized(const Zilch::Real3& __0, const Zilch::Real3& __1, const Zilch::Real3& __2);
    
    bool CanReadReal4Quantized(const Zilch::Real4& __0, const Zilch::Real4& __1);
    
    bool CanReadReal4Quantized(const Zilch::Real4& __0, const Zilch::Real4& __1, const Zilch::Real4& __2);
    
    bool ReadBoolean();
    
    int ReadInteger();
    
    long long ReadDoubleInteger();
    
    Zilch::Integer2 ReadInteger2();
    
    Zilch::Integer3 ReadInteger3();
    
    Zilch::Integer4 ReadInteger4();
    
    float ReadReal();
    
    double ReadDoubleReal();
    
    Zilch::Real2 ReadReal2();
    
    Zilch::Real3 ReadReal3();
    
    Zilch::Real4 ReadReal4();
    
    Zilch::Quaternion ReadQuaternion();
    
    Zilch::String ReadString();
    
    float ReadRealHalf();
    
    Zilch::Real2 ReadReal2Half();
    
    Zilch::Real3 ReadReal3Half();
    
    Zilch::Real4 ReadReal4Half();
    
    int ReadIntegerQuantized(int __0, int __1);
    
    int ReadIntegerQuantized(int __0, int __1, int __2);
    
    long long ReadDoubleIntegerQuantized(long long __0, long long __1);
    
    long long ReadDoubleIntegerQuantized(long long __0, long long __1, long long __2);
    
    Zilch::Integer2 ReadInteger2Quantized(const Zilch::Integer2& __0, const Zilch::Integer2& __1);
    
    Zilch::Integer2 ReadInteger2Quantized(const Zilch::Integer2& __0, const Zilch::Integer2& __1, const Zilch::Integer2& __2);
    
    Zilch::Integer3 ReadInteger3Quantized(const Zilch::Integer3& __0, const Zilch::Integer3& __1);
    
    Zilch::Integer3 ReadInteger3Quantized(const Zilch::Integer3& __0, const Zilch::Integer3& __1, const Zilch::Integer3& __2);
    
    Zilch::Integer4 ReadInteger4Quantized(const Zilch::Integer4& __0, const Zilch::Integer4& __1);
    
    Zilch::Integer4 ReadInteger4Quantized(const Zilch::Integer4& __0, const Zilch::Integer4& __1, const Zilch::Integer4& __2);
    
    float ReadRealQuantized(float __0, float __1);
    
    float ReadRealQuantized(float __0, float __1, float __2);
    
    double ReadDoubleRealQuantized(double __0, double __1);
    
    double ReadDoubleRealQuantized(double __0, double __1, double __2);
    
    Zilch::Real2 ReadReal2Quantized(const Zilch::Real2& __0, const Zilch::Real2& __1);
    
    Zilch::Real2 ReadReal2Quantized(const Zilch::Real2& __0, const Zilch::Real2& __1, const Zilch::Real2& __2);
    
    Zilch::Real3 ReadReal3Quantized(const Zilch::Real3& __0, const Zilch::Real3& __1);
    
    Zilch::Real3 ReadReal3Quantized(const Zilch::Real3& __0, const Zilch::Real3& __1, const Zilch::Real3& __2);
    
    Zilch::Real4 ReadReal4Quantized(const Zilch::Real4& __0, const Zilch::Real4& __1);
    
    Zilch::Real4 ReadReal4Quantized(const Zilch::Real4& __0, const Zilch::Real4& __1, const Zilch::Real4& __2);
    
    // Returns the data array capacity in bits.
    int GetBitCapacity();
    
    // Returns the data array capacity in bytes.
    int GetByteCapacity();
    
    // Returns the number of bits written.
    int GetBitsWritten();
    
    // Returns the number of bytes written (Rounded up, ex. 12 bits = 2 bytes)
    int GetBytesWritten();
    
    // Returns the number of bits unwritten.
    int GetBitsUnwritten();
    
    // Returns the number of bytes unwritten (Rounded up, ex. 12 bits = 2 bytes)
    int GetBytesUnwritten();
    
    // Returns the number of bits read.
    int GetBitsRead();
    
    // Returns the number of bytes read (Rounded up, ex. 12 bits = 2 bytes)
    int GetBytesRead();
    
    // Returns the number of bits unread.
    int GetBitsUnread();
    
    // Returns the number of bytes unread (Rounded up, ex. 12 bits = 2 bytes)
    int GetBytesUnread();
    
    // Returns true if the BitStream is empty (0 bits written), else false.
    bool IsEmpty();
    
    void Reserve(int __0);
    
    // Clears all data written and resets the bitstream, optionally freeing reserved memory.
    void Clear(bool freeMemory);
    
    void SetBitsWritten(int __0);
    
    void SetBytesWritten(int __0);
    
    // Clears the number of bits written.
    void ClearBitsWritten();
    
    void Unread(int __0);
    
    void SetBitsRead(int __0);
    
    void SetBytesRead(int __0);
    
    // Clears the number of bits read.
    void ClearBitsRead();
    
    unsigned char mValue[24];
    
  protected:
    BitStream(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(BitStream);
  };
  
  // Event Bundle. Serialized event storage container.
  class EventBundle : public Object
  {
  public:
    typedef EventBundle ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetIsEmpty();
    
    // Adds the event to back of the event bundle. Returns true if successful, else false (an event of that type has already been added).
    bool AddEvent(Event* event);
    
    Zilch::HandleOf<GameSession> GetGameSession();
    
    void SetGameSession(GameSession* value);
    
    // Returns all the events that have been added to the event bundle.
    Zilch::HandleOf<EventRange> GetEvents();
    
    // Removes the event specified from the event bundle. Returns true if successful, else false (an event of that type has already been added).
    bool RemoveEvent(Event* event);
    
    // Removes the event specified from the event bundle. Returns true if successful, else false (an event of that type has already been added).
    bool RemoveEvent(const Zilch::String& __0);
    
    // Clears the event bundle.
    void Clear();
    
    unsigned char mValue[72];
    
  protected:
    EventBundle(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(EventBundle);
  };
  
  // Network Property Info. Configures a network property.
  class NetPropertyInfo : public SafeId32
  {
  public:
    typedef NetPropertyInfo ZilchSelf;
    typedef SafeId32 ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetComponent();
    
    Zilch::String GetProperty();
    
    Zilch::HandleOf<NetChannelConfig> GetNetChannelConfig();
    
    void SetNetChannelConfig(NetChannelConfig* value);
    
    Zilch::HandleOf<NetPropertyConfig> GetNetPropertyConfig();
    
    void SetNetPropertyConfig(NetPropertyConfig* value);
    
    unsigned char mValue[128];
    
  protected:
    NetPropertyInfo(Zilch::NoType none) : SafeId32(none) {}
    ZilchNoCopy(NetPropertyInfo);
  };
  
  // Network Property Configuration. Defines a configuration for the replication of a single property on the network.
  class NetPropertyConfig : public DataResource
  {
  public:
    typedef NetPropertyConfig ZilchSelf;
    typedef DataResource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    BasicNetType GetBasicNetType();
    
    void SetBasicNetType(const BasicNetType& value);
    
    bool GetUseDeltaThreshold();
    
    void SetUseDeltaThreshold(bool value);
    
    int GetDeltaThresholdInteger();
    
    void SetDeltaThresholdInteger(int value);
    
    long long GetDeltaThresholdDoubleInteger();
    
    void SetDeltaThresholdDoubleInteger(long long value);
    
    Zilch::Integer2 GetDeltaThresholdInteger2();
    
    void SetDeltaThresholdInteger2(const Zilch::Integer2& value);
    
    Zilch::Integer3 GetDeltaThresholdInteger3();
    
    void SetDeltaThresholdInteger3(const Zilch::Integer3& value);
    
    Zilch::Integer4 GetDeltaThresholdInteger4();
    
    void SetDeltaThresholdInteger4(const Zilch::Integer4& value);
    
    float GetDeltaThresholdReal();
    
    void SetDeltaThresholdReal(float value);
    
    double GetDeltaThresholdDoubleReal();
    
    void SetDeltaThresholdDoubleReal(double value);
    
    Zilch::Real2 GetDeltaThresholdReal2();
    
    void SetDeltaThresholdReal2(const Zilch::Real2& value);
    
    Zilch::Real3 GetDeltaThresholdReal3();
    
    void SetDeltaThresholdReal3(const Zilch::Real3& value);
    
    Zilch::Real4 GetDeltaThresholdReal4();
    
    void SetDeltaThresholdReal4(const Zilch::Real4& value);
    
    Zilch::Quaternion GetDeltaThresholdQuaternion();
    
    void SetDeltaThresholdQuaternion(const Zilch::Quaternion& value);
    
    SerializationMode GetSerializationMode();
    
    void SetSerializationMode(const SerializationMode& value);
    
    bool GetUseHalfFloats();
    
    void SetUseHalfFloats(bool value);
    
    bool GetUseQuantization();
    
    void SetUseQuantization(bool value);
    
    int GetQuantizationRangeMinInteger();
    
    void SetQuantizationRangeMinInteger(int value);
    
    long long GetQuantizationRangeMinDoubleInteger();
    
    void SetQuantizationRangeMinDoubleInteger(long long value);
    
    Zilch::Integer2 GetQuantizationRangeMinInteger2();
    
    void SetQuantizationRangeMinInteger2(const Zilch::Integer2& value);
    
    Zilch::Integer3 GetQuantizationRangeMinInteger3();
    
    void SetQuantizationRangeMinInteger3(const Zilch::Integer3& value);
    
    Zilch::Integer4 GetQuantizationRangeMinInteger4();
    
    void SetQuantizationRangeMinInteger4(const Zilch::Integer4& value);
    
    float GetQuantizationRangeMinReal();
    
    void SetQuantizationRangeMinReal(float value);
    
    double GetQuantizationRangeMinDoubleReal();
    
    void SetQuantizationRangeMinDoubleReal(double value);
    
    Zilch::Real2 GetQuantizationRangeMinReal2();
    
    void SetQuantizationRangeMinReal2(const Zilch::Real2& value);
    
    Zilch::Real3 GetQuantizationRangeMinReal3();
    
    void SetQuantizationRangeMinReal3(const Zilch::Real3& value);
    
    Zilch::Real4 GetQuantizationRangeMinReal4();
    
    void SetQuantizationRangeMinReal4(const Zilch::Real4& value);
    
    Zilch::Quaternion GetQuantizationRangeMinQuaternion();
    
    void SetQuantizationRangeMinQuaternion(const Zilch::Quaternion& value);
    
    int GetQuantizationRangeMaxInteger();
    
    void SetQuantizationRangeMaxInteger(int value);
    
    long long GetQuantizationRangeMaxDoubleInteger();
    
    void SetQuantizationRangeMaxDoubleInteger(long long value);
    
    Zilch::Integer2 GetQuantizationRangeMaxInteger2();
    
    void SetQuantizationRangeMaxInteger2(const Zilch::Integer2& value);
    
    Zilch::Integer3 GetQuantizationRangeMaxInteger3();
    
    void SetQuantizationRangeMaxInteger3(const Zilch::Integer3& value);
    
    Zilch::Integer4 GetQuantizationRangeMaxInteger4();
    
    void SetQuantizationRangeMaxInteger4(const Zilch::Integer4& value);
    
    float GetQuantizationRangeMaxReal();
    
    void SetQuantizationRangeMaxReal(float value);
    
    double GetQuantizationRangeMaxDoubleReal();
    
    void SetQuantizationRangeMaxDoubleReal(double value);
    
    Zilch::Real2 GetQuantizationRangeMaxReal2();
    
    void SetQuantizationRangeMaxReal2(const Zilch::Real2& value);
    
    Zilch::Real3 GetQuantizationRangeMaxReal3();
    
    void SetQuantizationRangeMaxReal3(const Zilch::Real3& value);
    
    Zilch::Real4 GetQuantizationRangeMaxReal4();
    
    void SetQuantizationRangeMaxReal4(const Zilch::Real4& value);
    
    Zilch::Quaternion GetQuantizationRangeMaxQuaternion();
    
    void SetQuantizationRangeMaxQuaternion(const Zilch::Quaternion& value);
    
    bool GetUseInterpolation();
    
    void SetUseInterpolation(bool value);
    
    CurveType GetInterpolationCurve();
    
    void SetInterpolationCurve(const CurveType& value);
    
    float GetSampleTimeOffset();
    
    void SetSampleTimeOffset(float value);
    
    float GetExtrapolationLimit();
    
    void SetExtrapolationLimit(float value);
    
    bool GetUseConvergence();
    
    void SetUseConvergence(bool value);
    
    bool GetEventOnConvergenceStateChange();
    
    void SetEventOnConvergenceStateChange(bool value);
    
    float GetActiveConvergenceWeight();
    
    void SetActiveConvergenceWeight(float value);
    
    float GetRestingConvergenceDuration();
    
    void SetRestingConvergenceDuration(float value);
    
    int GetConvergenceInterval();
    
    void SetConvergenceInterval(int value);
    
    int GetSnapThresholdInteger();
    
    void SetSnapThresholdInteger(int value);
    
    long long GetSnapThresholdDoubleInteger();
    
    void SetSnapThresholdDoubleInteger(long long value);
    
    Zilch::Integer2 GetSnapThresholdInteger2();
    
    void SetSnapThresholdInteger2(const Zilch::Integer2& value);
    
    Zilch::Integer3 GetSnapThresholdInteger3();
    
    void SetSnapThresholdInteger3(const Zilch::Integer3& value);
    
    Zilch::Integer4 GetSnapThresholdInteger4();
    
    void SetSnapThresholdInteger4(const Zilch::Integer4& value);
    
    float GetSnapThresholdReal();
    
    void SetSnapThresholdReal(float value);
    
    double GetSnapThresholdDoubleReal();
    
    void SetSnapThresholdDoubleReal(double value);
    
    Zilch::Real2 GetSnapThresholdReal2();
    
    void SetSnapThresholdReal2(const Zilch::Real2& value);
    
    Zilch::Real3 GetSnapThresholdReal3();
    
    void SetSnapThresholdReal3(const Zilch::Real3& value);
    
    Zilch::Real4 GetSnapThresholdReal4();
    
    void SetSnapThresholdReal4(const Zilch::Real4& value);
    
    Zilch::Quaternion GetSnapThresholdQuaternion();
    
    void SetSnapThresholdQuaternion(const Zilch::Quaternion& value);
    
    unsigned char mValue[144];
    
  protected:
    NetPropertyConfig(Zilch::NoType none) : DataResource(none) {}
    ZilchNoCopy(NetPropertyConfig);
  };
  
  // Network Property Type. Configures the replication of a single property on the network.
  class NetPropertyType : public SafeId32Object
  {
  public:
    typedef NetPropertyType ZilchSelf;
    typedef SafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetName();
    
    // Resets all configuration settings. (Cannot be modified at game runtime)
    void ResetConfig();
    
    // Sets all configuration settings according to the specified NetPropertyConfig resource. (Cannot be modified at game runtime)
    void SetConfig(NetPropertyConfig* netPropertyConfig);
    
    unsigned char mValue[296];
    
  protected:
    NetPropertyType(Zilch::NoType none) : SafeId32Object(none) {}
    ZilchNoCopy(NetPropertyType);
  };
  
  // Network Property. Manages the replication of a single property on the network.
  class NetProperty : public SafeId32Object
  {
  public:
    typedef NetProperty ZilchSelf;
    typedef SafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetName();
    
    Zilch::HandleOf<NetPropertyType> GetNetPropertyType();
    
    Zilch::HandleOf<NetChannel> GetNetChannel();
    
    float GetLastChangeTimestamp();
    
    float GetLastChangeTimePassed();
    
    unsigned char mValue[448];
    
  protected:
    NetProperty(Zilch::NoType none) : SafeId32Object(none) {}
    ZilchNoCopy(NetProperty);
  };
  
  // Network Channel Configuration. Defines a configuration for the replication of a set of properties on the network.
  class NetChannelConfig : public DataResource
  {
  public:
    typedef NetChannelConfig ZilchSelf;
    typedef DataResource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetDetectOutgoingChanges();
    
    void SetDetectOutgoingChanges(bool value);
    
    bool GetAcceptIncomingChanges();
    
    void SetAcceptIncomingChanges(bool value);
    
    bool GetEventOnOutgoingPropertyChange();
    
    void SetEventOnOutgoingPropertyChange(bool value);
    
    bool GetEventOnIncomingPropertyChange();
    
    void SetEventOnIncomingPropertyChange(bool value);
    
    AuthorityMode GetAuthorityMode();
    
    void SetAuthorityMode(const AuthorityMode& value);
    
    Authority GetAuthorityDefault();
    
    void SetAuthorityDefault(const Authority& value);
    
    bool GetAllowRelay();
    
    void SetAllowRelay(bool value);
    
    bool GetAllowNapping();
    
    void SetAllowNapping(bool value);
    
    int GetAwakeDuration();
    
    void SetAwakeDuration(int value);
    
    DetectionMode GetDetectionMode();
    
    void SetDetectionMode(const DetectionMode& value);
    
    int GetAwakeDetectionInterval();
    
    void SetAwakeDetectionInterval(int value);
    
    int GetNapDetectionInterval();
    
    void SetNapDetectionInterval(int value);
    
    bool GetReplicateOnOnline();
    
    void SetReplicateOnOnline(bool value);
    
    bool GetReplicateOnOffline();
    
    void SetReplicateOnOffline(bool value);
    
    SerializationMode GetSerializationMode();
    
    void SetSerializationMode(const SerializationMode& value);
    
    ReliabilityMode GetReliabilityMode();
    
    void SetReliabilityMode(const ReliabilityMode& value);
    
    TransferMode GetTransferMode();
    
    void SetTransferMode(const TransferMode& value);
    
    bool GetAccurateTimestampOnChange();
    
    void SetAccurateTimestampOnChange(bool value);
    
    unsigned char mValue[56];
    
  protected:
    NetChannelConfig(Zilch::NoType none) : DataResource(none) {}
    ZilchNoCopy(NetChannelConfig);
  };
  
  // Network Channel Type. Configures the replication of a set of properties on the network.
  class NetChannelType : public SafeId32Object
  {
  public:
    typedef NetChannelType ZilchSelf;
    typedef SafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetName();
    
    // Resets all configuration settings.
    void ResetConfig();
    
    // Sets all configuration settings according to the specified NetChannelConfig resource.
    void SetConfig(NetChannelConfig* netChannelConfig);
    
    bool GetDetectOutgoingChanges();
    
    void SetDetectOutgoingChanges(bool value);
    
    bool GetAcceptIncomingChanges();
    
    void SetAcceptIncomingChanges(bool value);
    
    bool GetEventOnOutgoingPropertyChange();
    
    void SetEventOnOutgoingPropertyChange(bool value);
    
    bool GetEventOnIncomingPropertyChange();
    
    void SetEventOnIncomingPropertyChange(bool value);
    
    AuthorityMode GetAuthorityMode();
    
    void SetAuthorityMode(const AuthorityMode& value);
    
    Authority GetAuthorityDefault();
    
    void SetAuthorityDefault(const Authority& value);
    
    bool GetAllowRelay();
    
    void SetAllowRelay(bool value);
    
    bool GetAllowNapping();
    
    void SetAllowNapping(bool value);
    
    int GetAwakeDuration();
    
    void SetAwakeDuration(int value);
    
    DetectionMode GetDetectionMode();
    
    void SetDetectionMode(const DetectionMode& value);
    
    int GetAwakeDetectionInterval();
    
    void SetAwakeDetectionInterval(int value);
    
    int GetNapDetectionInterval();
    
    void SetNapDetectionInterval(int value);
    
    bool GetReplicateOnOnline();
    
    void SetReplicateOnOnline(bool value);
    
    bool GetReplicateOnOffline();
    
    void SetReplicateOnOffline(bool value);
    
    SerializationMode GetSerializationMode();
    
    void SetSerializationMode(const SerializationMode& value);
    
    ReliabilityMode GetReliabilityMode();
    
    void SetReliabilityMode(const ReliabilityMode& value);
    
    TransferMode GetTransferMode();
    
    void SetTransferMode(const TransferMode& value);
    
    bool GetAccurateTimestampOnChange();
    
    void SetAccurateTimestampOnChange(bool value);
    
    unsigned char mValue[160];
    
  protected:
    NetChannelType(Zilch::NoType none) : SafeId32Object(none) {}
    ZilchNoCopy(NetChannelType);
  };
  
  // Network Channel. Manages the replication of a set of properties on the network.
  class NetChannel : public SafeId32Object
  {
  public:
    typedef NetChannel ZilchSelf;
    typedef SafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetName();
    
    Zilch::HandleOf<NetChannelType> GetNetChannelType();
    
    bool GetIsScheduled();
    
    bool GetIsNapping();
    
    // Forces the net channel to stop napping immediately.
    void WakeUp();
    
    // Forces the net channel to start napping immediately.
    void TakeNap();
    
    bool GetChangeFlag();
    
    void SetChangeFlag(bool value);
    
    // Replicates net property changes immediately (only if changes are detected). Will also update nap state as configured. Returns true if changes were replicated, else false.
    bool ReplicateNow();
    
    float GetLastChangeTimestamp();
    
    float GetLastChangeTimePassed();
    
    Authority GetAuthority();
    
    void SetAuthority(const Authority& value);
    
    // [Client/Server] Returns true if the net object has the specified net property, else false.
    bool HasNetProperty(Component* component, const Zilch::String& propertyName);
    
    // [Client/Server] Returns the specified net property, else nullptr.
    Zilch::HandleOf<NetProperty> GetNetProperty(Component* component, const Zilch::String& propertyName);
    
    unsigned char mValue[128];
    
  protected:
    NetChannel(Zilch::NoType none) : SafeId32Object(none) {}
    ZilchNoCopy(NetChannel);
  };
  
  // Describes a network host.
  class NetHost : public SafeId32
  {
  public:
    typedef NetHost ZilchSelf;
    typedef SafeId32 ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetRoundTripTime();
    
    int GetLatency();
    
    Network GetNetwork();
    
    Zilch::HandleOf<IpAddress> GetIpAddress();
    
    Zilch::HandleOf<EventBundle> GetBasicHostInfo();
    
    Zilch::HandleOf<EventBundle> GetExtraHostInfo();
    
    unsigned char mValue[312];
    
  protected:
    NetHost(Zilch::NoType none) : SafeId32(none) {}
    ZilchNoCopy(NetHost);
  };
  
  // NetHostRecord. A record that contains the basic information of a game server. After a certain lifetime records expire on the master server.
  class NetHostRecord : public SafeId32
  {
  public:
    typedef NetHostRecord ZilchSelf;
    typedef SafeId32 ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<IpAddress> GetIpAddress();
    
    Zilch::HandleOf<EventBundle> GetBasicHostInfo();
    
    float GetLifetime();
    
    unsigned char mValue[232];
    
  protected:
    NetHostRecord(Zilch::NoType none) : SafeId32(none) {}
    ZilchNoCopy(NetHostRecord);
  };
  
  // Network Object. Manages the replication of a single object on the network.
  class NetObject : public Component
  {
  public:
    typedef NetObject ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    NetRole GetRole();
    
    bool GetIsClient();
    
    bool GetIsServer();
    
    bool GetIsOffline();
    
    bool GetIsClientOrOffline();
    
    bool GetIsServerOrOffline();
    
    bool GetIsClientOrServer();
    
    bool GetDetectOutgoingChanges();
    
    void SetDetectOutgoingChanges(bool value);
    
    bool GetAcceptIncomingChanges();
    
    void SetAcceptIncomingChanges(bool value);
    
    bool GetAllowNapping();
    
    void SetAllowNapping(bool value);
    
    bool GetAccurateTimestampOnOnline();
    
    void SetAccurateTimestampOnOnline(bool value);
    
    bool GetAccurateTimestampOnChange();
    
    void SetAccurateTimestampOnChange(bool value);
    
    bool GetAccurateTimestampOnOffline();
    
    void SetAccurateTimestampOnOffline(bool value);
    
    float GetOnlineTimestamp();
    
    float GetLastChangeTimestamp();
    
    float GetOfflineTimestamp();
    
    bool GetIsOnline();
    
    int GetNetObjectId();
    
    bool GetIsNapping();
    
    float GetOnlineTimePassed();
    
    float GetLastChangeTimePassed();
    
    float GetOfflineTimePassed();
    
    // [Client/Server] Selects the remote net object on the first opposite-role peer found running in another game session instance on the engine. Will fail if the net object is not online, or not found remotely. Returns true if successful, else false.
    bool SelectRemote();
    
    // [Client/Server] Replicates all net channels' property changes immediately (only where changes are detected). Will also update nap state as configured. Returns true if changes were replicated, else false.
    bool ReplicateNow();
    
    // Forces all net channels on this net object to stop napping immediately.
    void WakeUp();
    
    // Forces all net channels on this net object to start napping immediately.
    void TakeNap();
    
    // [Client] Forgets the online net object locally. [Server] Forgets the online net object locally and remotely for all relevant peers. Effectively removes the net object from the network system without destroying it. Returns true if successful, else false.
    bool Forget();
    
    // [Client/Server] Returns true if the net object has the specified net channel, else false.
    bool HasNetChannel(const Zilch::String& netChannelName);
    
    // [Client/Server] Returns the specified net channel, else nullptr.
    Zilch::HandleOf<NetChannel> GetNetChannel(const Zilch::String& netChannelName);
    
    bool GetIsOwnedByAUser();
    
    bool GetIsNotOwnedByAUser();
    
    // Returns true if the net object is conceptually owned by the specified user, else false.
    bool IsOwnedByUser(Cog* cog);
    
    // Returns true if the net object is conceptually owned by a user added by the specified peer, else false.
    bool IsOwnedByPeer(int netPeerId);
    
    bool GetIsMine();
    
    bool GetIsNotMine();
    
    bool GetIsClientAndMine();
    
    bool GetIsClientButNotMine();
    
    bool GetIsServerAndMine();
    
    bool GetIsServerButNotMine();
    
    bool GetIsOfflineAndMine();
    
    bool GetIsOfflineButNotMine();
    
    Zilch::HandleOf<Cog> GetNetUserOwner();
    
    void SetNetUserOwner(Cog* value);
    
    Zilch::HandleOf<CogPath> GetNetUserOwnerPath();
    
    int GetNetUserOwnerUserId();
    
    int GetNetUserOwnerPeerId();
    
    // [Server/Offline] Sets the owning network user on this object and up the tree on each parent recursively (pre-order traversal).
    void SetNetUserOwnerUp(Cog* cog);
    
    // [Server/Offline] Sets the owning network user on this object and down the tree on all children recursively (pre-order traversal).
    void SetNetUserOwnerDown(Cog* cog);
    
    // Dispatches the net event on the net object for the local peer.
    void DispatchLocal(const Zilch::String& eventId, Event* event);
    
    // Dispatches the net event on the net object for the remote peer. In Offline mode, this calls DispatchLocal only.
    void DispatchRemote(const Zilch::String& eventId, Event* event, int netPeerId);
    
    // Dispatches the net event on the net object for all remote peers. In Offline mode, this calls DispatchLocal only.
    void DispatchBroadcast(const Zilch::String& eventId, Event* event);
    
    // Dispatches the net event on the net object for the local peer and for the remote peer. In Offline mode, this calls DispatchLocal only.
    void DispatchLocalAndRemote(const Zilch::String& eventId, Event* event, int netPeerId);
    
    // Dispatches the net event on the net object for the local peer and for all remote peers. In Offline mode, this calls DispatchLocal only.
    void DispatchLocalAndBroadcast(const Zilch::String& eventId, Event* event);
    
    Zilch::HandleOf<NetChannelConfig> GetAutomaticChannel();
    
    void SetAutomaticChannel(NetChannelConfig* value);
    
    Zilch::HandleOf<NetPropertyInfos> GetNetPropertyInfos();
    
    void SetNetPropertyInfos(NetPropertyInfos* value);
    
    unsigned char mValue[288];
    
  protected:
    NetObject(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(NetObject);
  };
  
  // Network Space. Manages the replication of a single space on the network.
  class NetSpace : public NetObject
  {
  public:
    typedef NetSpace ZilchSelf;
    typedef NetObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetNetObjectCount();
    
    int GetNetUserCount();
    
    unsigned char mValue[120];
    
  protected:
    NetSpace(Zilch::NoType none) : NetObject(none) {}
    ZilchNoCopy(NetSpace);
  };
  
  // Network User. Manages the replication of a single negotiated user on the network.
  class NetUser : public NetObject
  {
  public:
    typedef NetUser ZilchSelf;
    typedef NetObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetNetUserId();
    
    int GetNetPeerId();
    
    bool GetAddedByMyPeer();
    
    // Returns true if the user was added by the specified peer, else false.
    bool AddedByPeer(int netPeerId);
    
    // Finds a net object with the given name owned by this user in the specified space, else nullptr.
    Zilch::HandleOf<Cog> FindOwnedNetObjectByNameInSpace(const Zilch::String& name, Space* space);
    
    // Finds a net object with the given name owned by this user in any space, else nullptr.
    Zilch::HandleOf<Cog> FindOwnedNetObjectByName(const Zilch::String& name);
    
    Zilch::HandleOf<CogHashSetRange> GetOwnedNetObjects();
    
    int GetOwnedNetObjectCount();
    
    // [Server/Offline] Releases ownership of all net objects owned by this user in all spaces.
    void ReleaseOwnedNetObjects();
    
    unsigned char mValue[208];
    
  protected:
    NetUser(Zilch::NoType none) : NetObject(none) {}
    ZilchNoCopy(NetUser);
  };
  
  // Network Peer. Acts as a host on the network. Manages network object state and event replication.
  class NetPeer : public NetObject
  {
  public:
    typedef NetPeer ZilchSelf;
    typedef NetObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetLanDiscoverable();
    
    void SetLanDiscoverable(bool value);
    
    bool GetInternetDiscoverable();
    
    void SetInternetDiscoverable(bool value);
    
    int GetHostPortRangeStart();
    
    void SetHostPortRangeStart(int value);
    
    int GetHostPortRangeEnd();
    
    void SetHostPortRangeEnd(int value);
    
    float GetHostPingInterval();
    
    void SetHostPingInterval(float value);
    
    float GetInternetHostPublishInterval();
    
    void SetInternetHostPublishInterval(float value);
    
    float GetInternetHostRecordLifetime();
    
    void SetInternetHostRecordLifetime(float value);
    
    int GetInternetSameIpHostRecordLimit();
    
    void SetInternetSameIpHostRecordLimit(int value);
    
    // Subscribes to the master server located at the specified IP address. All internet host discovery, record publishing, connection facilitation (NAT punch-through) requests are performed on these master server subscriptions in the order they were subscribed.
    void SubscribeToMasterServer(IpAddress* ipAddress);
    
    // Unsubscribes from the master server located at the specified IP address (if subscribed).
    void UnsubscribeFromMasterServer(IpAddress* ipAddress);
    
    // Returns the first equivalent host found in the given network's host list, else nullptr.
    Zilch::HandleOf<NetHost> GetHostByIndex(const Network& network, int index);
    
    Zilch::HandleOf<NetHost> GetHostByAddress(const Network& network, IpAddress* ipAddress);
    
    Zilch::HandleOf<NetHost> GetHostByAddress(IpAddress* ipAddress);
    
    // Returns the given network's host list.
    Zilch::HandleOf<NetHostRange> GetHostList(const Network& network);
    
    // Discovers the given network's host list. Listen to the NetHost event interface to handle the results. Returns true if the discovery was successfully started, else false.
    bool DiscoverHostList(const Network& network, bool removeStaleHosts);
    
    // Clears the given network's host list.
    void ClearHostList(const Network& network);
    
    void ClearHostLists();
    
    // Refreshes the specified host in the given network's host list. Allowing discovery will enable the host to be discovered if it is not an already known host. Listen to the NetHost event interface to handle the results. Returns true if the host was found and the refresh successfully started, else false (the host could not be found).
    bool RefreshHost(const Network& network, IpAddress* ipAddress, bool getExtraHostInfo, bool allowDiscovery, bool removeStaleHosts);
    
    // Refreshes all hosts in the given network's host list. Allowing discovery will enable new hosts to be discovered in the process of refreshing. Listen to the NetHost event interface to handle the results. Returns true if the refresh was successfully started, else false.
    bool RefreshHostList(const Network& network, bool getExtraHostInfo, bool allowDiscovery, bool removeStaleHosts);
    
    // Cancels all host discovery and refresh requests currently in progress (the operations will be considered unsuccessful). Listen to the NetHost event interface to handle the results.
    void CancelHostRequests();
    
    Zilch::String GetInfo();
    
    bool GetIsOpen();
    
    // Opens the peer with the specified network role, port, and retry settings. For the given number of retries, if binding is unsuccessful, the port number is incremented and binding is attempted again. Specify port 0 to indicate any available port should be used. Returns true if successful, else false.
    bool Open(const NetRole& role, int port, int retries);
    
    // Opens the peer with the specified network role and port settings. Specify port 0 to indicate any available port should be used. Returns true if successful, else false.
    bool Open(const NetRole& role, int port);
    
    // Opens the peer with the specified network role on any available port. Returns true if successful, else false.
    bool Open(const NetRole& role);
    
    // Opens the peer as a client with the specified network port and retry settings. For the given number of retries, if binding is unsuccessful, the port number is incremented and binding is attempted again. Specify port 0 to indicate any available port should be used. Returns true if successful, else false.
    bool OpenClient(int port, int retries);
    
    // Opens the peer as a client with the specified network port. Specify port 0 to indicate any available port should be used. Returns true if successful, else false.
    bool OpenClient(int port);
    
    // Opens the peer as a client on any available port. Returns true if successful, else false.
    bool OpenClient();
    
    // Opens the peer as a server with the specified network port. Specify port 0 to indicate any available port should be used. Returns true if successful, else false.
    bool OpenServer(int port);
    
    // Opens the peer as a server on any available port. Returns true if successful, else false.
    bool OpenServer();
    
    // Opens the peer in offline mode. In offline mode, the peer will act as a pass-through and simulate all applicable network events locally. Always succeeds and returns true.
    bool OpenOffline();
    
    // Closes the peer (safe to call multiple times).
    void Close();
    
    int GetNetPeerId();
    
    Zilch::HandleOf<IpAddress> GetIpv4Address();
    
    Zilch::String GetIpv4Host();
    
    int GetIpv4Port();
    
    int GetNetObjectCount();
    
    int GetNetUserCount();
    
    int GetNetSpaceCount();
    
    float GetFrameFillWarning();
    
    void SetFrameFillWarning(float value);
    
    float GetFrameFillSkip();
    
    void SetFrameFillSkip(float value);
    
    int GetLinkCount();
    
    // [Client] Initiates a connect attempt with the remote peer (delayed until end of frame). Listen to the NetLink event interface to handle the results. Returns true if a connect request was successfully initiated, else false.
    bool ConnectLink(IpAddress* ipAddress, EventBundle* requestBundle);
    
    // [Client] Initiates a connect attempt with the remote peer (delayed until end of frame). Listen to the NetLink event interface to handle the results. Returns true if a connect request was successfully initiated, else false.
    bool ConnectLink(IpAddress* ipAddress, Event* requestEvent);
    
    // [Client] Initiates a connect attempt with the remote peer (delayed until end of frame). Listen to the NetLink event interface to handle the results. Returns true if a connect request was successfully initiated, else false.
    bool ConnectLink(IpAddress* ipAddress);
    
    // [Client/Server] Disconnects by request from the remote peer. Listen to the NetLink event interface to handle the results. Returns true if a disconnect notice was successfully initiated, else false.
    bool DisconnectLink(IpAddress* ipAddress, EventBundle* requestBundle);
    
    // [Client/Server] Disconnects by request from the remote peer. Listen to the NetLink event interface to handle the results. Returns true if a disconnect notice was successfully initiated, else false.
    bool DisconnectLink(IpAddress* ipAddress, Event* requestEvent);
    
    // [Client/Server] Disconnects by request from the remote peer. Listen to the NetLink event interface to handle the results. Returns true if a disconnect notice was successfully initiated, else false.
    bool DisconnectLink(IpAddress* ipAddress);
    
    // [Client/Server] Disconnects by request from the remote peer. Listen to the NetLink event interface to handle the results. Returns true if a disconnect notice was successfully initiated, else false.
    bool DisconnectLink(int netPeerId, EventBundle* requestBundle);
    
    // [Client/Server] Disconnects by request from the remote peer. Listen to the NetLink event interface to handle the results. Returns true if a disconnect notice was successfully initiated, else false.
    bool DisconnectLink(int netPeerId, Event* requestEvent);
    
    // [Client/Server] Disconnects by request from the remote peer. Listen to the NetLink event interface to handle the results. Returns true if a disconnect notice was successfully initiated, else false.
    bool DisconnectLink(int netPeerId);
    
    // [Client/Server] Disconnects by request from all remote peers. Listen to the NetLink event interface to handle the results. Returns the number of links disconnected.
    int DisconnectAllLinks(EventBundle* requestBundle);
    
    // [Client/Server] Disconnects by request from all remote peers. Listen to the NetLink event interface to handle the results. Returns the number of links disconnected.
    int DisconnectAllLinks(Event* requestEvent);
    
    // [Client/Server] Disconnects by request from all remote peers. Listen to the NetLink event interface to handle the results. Returns the number of links disconnected.
    int DisconnectAllLinks();
    
    // [Client/Server] Returns the direction in which the link was created (which peer initiated the connection), else TransmissionDirection::Unspecified.
    TransmissionDirection GetLinkCreationDirection(int netPeerId);
    
    // [Client/Server] Returns the link's overall status, else LinkStatus::Unspecified.
    LinkStatus GetLinkStatus(int netPeerId);
    
    // [Client/Server] Returns the link's specific state, else LinkState::Unspecified.
    LinkState GetLinkState(int netPeerId);
    
    // [Client/Server] Returns the remote peer's IP address (as seen from our perspective), else IpAddress(). For outgoing links this is the same IP address specified in our connect call. This IP address will never change for the lifetime of this link.
    Zilch::HandleOf<IpAddress> GetLinkIpAddress(int netPeerId);
    
    // [Client/Server] Returns our peer's IP address (as seen from their perspective), else IpAddress(). For incoming links this is the same IP address specified in their connect call. (Available if the link is connected or incoming and attempting connection) It is absolutely possible that this does not match our local IP address.
    Zilch::HandleOf<IpAddress> GetOurIpAddressFromLink(int netPeerId);
    
    // [Client/Server] Returns the link's IP address protocol version, else InternetProtocol::Unspecified. This IP address protocol will never change for the lifetime of this link.
    InternetProtocol GetLinkInternetProtocol(int netPeerId);
    
    // Returns the remote peer's unique network identifier, else 0. [Server] This will be non-zero if the client is connected, else zero. [Client] This will always be zero.
    int GetLinkNetPeerId(IpAddress* ipAddress);
    
    // Initiates a network user add request to add a new user belonging to our local peer (delayed until end of frame). Listen to the NetUser event interface to handle the results. Returns true if the request was successfully initiated, else false.
    bool AddUser(EventBundle* requestBundle);
    
    // Initiates a network user add request to add a new user belonging to our local peer (delayed until end of frame). Listen to the NetUser event interface to handle the results. Returns true if the request was successfully initiated, else false.
    bool AddUser(Event* requestEvent);
    
    // Initiates a network user add request to add a new user belonging to our local peer (delayed until end of frame). Listen to the NetUser event interface to handle the results. Returns true if the request was successfully initiated, else false.
    bool AddUser();
    
    // Returns the specified network user, else nullptr.
    Zilch::HandleOf<Cog> GetUser(int netUserId);
    
    Zilch::HandleOf<NetUserRange> GetUsersAddedByMyPeer();
    
    // Returns the network users added by the specified peer.
    Zilch::HandleOf<NetUserRange> GetUsersAddedByPeer(int netPeerId);
    
    Zilch::HandleOf<NetUserRange> GetUsers();
    
    int GetUserCount();
    
    bool RemoveUser(Cog* cog, EventBundle* requestBundle);
    
    bool RemoveUser(Cog* cog, Event* requestEvent);
    
    bool RemoveUser(Cog* cog);
    
    float GetInternetHostListTimeout();
    
    void SetInternetHostListTimeout(float value);
    
    float GetBasicHostInfoTimeout();
    
    void SetBasicHostInfoTimeout(float value);
    
    float GetExtraHostInfoTimeout();
    
    void SetExtraHostInfoTimeout(float value);
    
    // Returns the live net space specified if it is known locally, else nullptr.
    Zilch::HandleOf<Space> GetNetSpace(int netObjectId);
    
    // Returns the live net object specified if it is known locally, else nullptr.
    Zilch::HandleOf<Cog> GetNetObject(int netObjectId);
    
    unsigned char mValue[3904];
    
  protected:
    NetPeer(Zilch::NoType none) : NetObject(none) {}
    ZilchNoCopy(NetPeer);
  };
  
  class SoundInstanceRange : public Zilch::ReferenceType
  {
  public:
    typedef SoundInstanceRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<SoundInstanceRange> GetAll();
    
    Zilch::HandleOf<SoundInstance> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[16];
    
  protected:
    SoundInstanceRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SoundInstanceRange);
  };
  
  class NodeInfoListRange : public Zilch::ReferenceType
  {
  public:
    typedef NodeInfoListRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<NodeInfoListRange> GetAll();
    
    Zilch::HandleOf<NodePrintInfo> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[16];
    
  protected:
    NodeInfoListRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(NodeInfoListRange);
  };
  
  // The type of curve used for attenuating volume by SoundAttenuators.
  class FalloffCurveType : public Zilch::Enum
  {
  public:
    typedef FalloffCurveType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static FalloffCurveType GetLinear();
    
    static FalloffCurveType GetSquared();
    
    static FalloffCurveType GetSine();
    
    static FalloffCurveType GetSquareRoot();
    
    static FalloffCurveType GetLog();
    
    static FalloffCurveType GetCustom();
    
    FalloffCurveType();
  };
  
  // Whether a SoundCue should play once or loop continuously.
  class SoundPlayMode : public Zilch::Enum
  {
  public:
    typedef SoundPlayMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static SoundPlayMode GetSingle();
    
    static SoundPlayMode GetLooping();
    
    SoundPlayMode();
  };
  
  // Whether a SoundCue should pick a Sound to play randomly or sequentially.
  class SoundSelectMode : public Zilch::Enum
  {
  public:
    typedef SoundSelectMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static SoundSelectMode GetRandom();
    
    static SoundSelectMode GetSequential();
    
    SoundSelectMode();
  };
  
  // Types of sound waves that can be used by SoundNodes.
  class SynthWaveType : public Zilch::Enum
  {
  public:
    typedef SynthWaveType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static SynthWaveType GetSineWave();
    
    static SynthWaveType GetSquareWave();
    
    static SynthWaveType GetSawWave();
    
    static SynthWaveType GetTriangleWave();
    
    static SynthWaveType GetNoise();
    
    SynthWaveType();
  };
  
  // The possible settings for the number of channels used by the audio system when creating audio.
  class AudioMixTypes : public Zilch::Enum
  {
  public:
    typedef AudioMixTypes ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static AudioMixTypes GetAutoDetect();
    
    static AudioMixTypes GetMono();
    
    static AudioMixTypes GetStereo();
    
    static AudioMixTypes GetQuad();
    
    static AudioMixTypes GetFiveOne();
    
    static AudioMixTypes GetSevenOne();
    
    AudioMixTypes();
  };
  
  // The latency setting used by the audio system.
  class AudioLatency : public Zilch::Enum
  {
  public:
    typedef AudioLatency ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static AudioLatency GetLow();
    
    static AudioLatency GetHigh();
    
    AudioLatency();
  };
  
  // Types of windows (volume envelopes) that can be used for individual grains generated by the GranularSynthNode .
  class GranularSynthWindows : public Zilch::Enum
  {
  public:
    typedef GranularSynthWindows ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static GranularSynthWindows GetLinear();
    
    static GranularSynthWindows GetParabolic();
    
    static GranularSynthWindows GetRaisedCosine();
    
    static GranularSynthWindows GetTrapezoid();
    
    GranularSynthWindows();
  };
  
  class ZeroMetaArraySounds : public MetaArray
  {
  public:
    typedef ZeroMetaArraySounds ZilchSelf;
    typedef MetaArray ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ZeroMetaArraySounds(Zilch::NoType none) : MetaArray(none) {}
    ZilchNoCopy(ZeroMetaArraySounds);
  };
  
  class Sounds : public Zilch::ReferenceType
  {
  public:
    typedef Sounds ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[32];
    
  protected:
    Sounds(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Sounds);
  };
  
  class ZeroMetaArraySoundTags : public MetaArray
  {
  public:
    typedef ZeroMetaArraySoundTags ZilchSelf;
    typedef MetaArray ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ZeroMetaArraySoundTags(Zilch::NoType none) : MetaArray(none) {}
    ZilchNoCopy(ZeroMetaArraySoundTags);
  };
  
  class SoundTags : public Zilch::ReferenceType
  {
  public:
    typedef SoundTags ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[32];
    
  protected:
    SoundTags(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SoundTags);
  };
  
  // Sent for various SoundInstance-related events.
  class SoundInstanceEvent : public Event
  {
  public:
    typedef SoundInstanceEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<SoundInstance> GetSoundInstance();
    
    unsigned char mValue[56];
    
  protected:
    SoundInstanceEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(SoundInstanceEvent);
  };
  
  // Sent for various audio-related events.
  class SoundEvent : public Event
  {
  public:
    typedef SoundEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    SoundEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(SoundEvent);
  };
  
  // Sent when a MIDI message is received from a connected device.
  class MidiEvent : public Event
  {
  public:
    typedef MidiEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetChannel();
    
    void SetChannel(float value);
    
    float GetMIDINumber();
    
    void SetMIDINumber(float value);
    
    float GetValue();
    
    void SetValue(float value);
    
    unsigned char mValue[16];
    
  protected:
    MidiEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(MidiEvent);
  };
  
  class AudioFloatDataEvent : public Event
  {
  public:
    typedef AudioFloatDataEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetChannels();
    
    void SetChannels(int value);
    
    Zilch::HandleOf<Zilch::ArrayReal> GetAudioData();
    
    void SetAudioData(Zilch::ArrayReal* value);
    
    unsigned char mValue[64];
    
  protected:
    AudioFloatDataEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(AudioFloatDataEvent);
  };
  
  class CustomAudioNodeEvent : public Event
  {
  public:
    typedef CustomAudioNodeEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetSamplesNeeded();
    
    void SetSamplesNeeded(int value);
    
    unsigned char mValue[8];
    
  protected:
    CustomAudioNodeEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(CustomAudioNodeEvent);
  };
  
  class AudioByteDataEvent : public Event
  {
  public:
    typedef AudioByteDataEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Zilch::ArrayByte> GetAudioData();
    
    void SetAudioData(Zilch::ArrayByte* value);
    
    unsigned char mValue[56];
    
  protected:
    AudioByteDataEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(AudioByteDataEvent);
  };
  
  class Audio : public System
  {
  public:
    typedef Audio ZilchSelf;
    typedef System ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetSystemVolume();
    
    void SetSystemVolume(float value);
    
    float GetPeakOutputLevel();
    
    float GetRMSOutputLevel();
    
    float GetPeakInputLevel();
    
    Zilch::HandleOf<NodeInfoListRange> GetNodeGraphInfo();
    
    AudioLatency GetLatencySetting();
    
    void SetLatencySetting(const AudioLatency& value);
    
    bool GetDispatchMicrophoneUncompressedFloatData();
    
    void SetDispatchMicrophoneUncompressedFloatData(bool value);
    
    bool GetDispatchMicrophoneCompressedByteData();
    
    void SetDispatchMicrophoneCompressedByteData(bool value);
    
    int GetOutputChannels();
    
    bool GetMuteAllAudio();
    
    void SetMuteAllAudio(bool value);
    
    static Zilch::HandleOf<VolumeNode> VolumeNode();
    
    static Zilch::HandleOf<PanningNode> PanningNode();
    
    static Zilch::HandleOf<PitchNode> PitchNode();
    
    static Zilch::HandleOf<LowPassNode> LowPassNode();
    
    static Zilch::HandleOf<HighPassNode> HighPassNode();
    
    static Zilch::HandleOf<BandPassNode> BandPassNode();
    
    static Zilch::HandleOf<EqualizerNode> EqualizerNode();
    
    static Zilch::HandleOf<ReverbNode> ReverbNode();
    
    static Zilch::HandleOf<DelayNode> DelayNode();
    
    static Zilch::HandleOf<CustomAudioNode> CustomAudioNode();
    
    static Zilch::HandleOf<SoundBuffer> SoundBuffer();
    
    static Zilch::HandleOf<FlangerNode> FlangerNode();
    
    static Zilch::HandleOf<ChorusNode> ChorusNode();
    
    static Zilch::HandleOf<CompressorNode> CompressorNode();
    
    static Zilch::HandleOf<ExpanderNode> ExpanderNode();
    
    static Zilch::HandleOf<GeneratedWaveNode> GeneratedWaveNode();
    
    static Zilch::HandleOf<RecordingNode> RecordingNode();
    
    static Zilch::HandleOf<AddNoiseNode> AddNoiseNode();
    
    static Zilch::HandleOf<AdditiveSynthNode> AdditiveSynthNode();
    
    static Zilch::HandleOf<GranularSynthNode> GranularSynthNode();
    
    static Zilch::HandleOf<ModulationNode> ModulationNode();
    
    static Zilch::HandleOf<MicrophoneInputNode> MicrophoneInputNode();
    
    static Zilch::HandleOf<SaveAudioNode> SaveAudioNode();
    
    unsigned char mValue[1400];
    
  protected:
    Audio(Zilch::NoType none) : System(none) {}
    ZilchNoCopy(Audio);
  };
  
  class SoundNode : public ReferenceCountedEventObject
  {
  public:
    typedef SoundNode ZilchSelf;
    typedef ReferenceCountedEventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Adds the passed in node to this node's inputs.
    void AddInputNode(SoundNode* node);
    
    // Inserts the passed in node after this node in the signal path, placing it between this node and any nodes which were connected to this node's output.
    void InsertNodeAfter(SoundNode* node);
    
    // Inserts the passed in node before this node in the signal path, placing it between this node and any nodes which were connected to this node as inputs.
    void InsertNodeBefore(SoundNode* node);
    
    // Replaces this node in the graph with the node passed in as a parameter. This node will be deleted when it is no longer referenced.
    void ReplaceWith(SoundNode* node);
    
    // Removes the node passed in as a parameter from this node's inputs.
    void RemoveInputNode(SoundNode* node);
    
    // Removes the connections between this node and all of its input nodes.
    void RemoveAllInputs();
    
    // Removes the connections between this node and all of its output nodes, disconnecting this node from the graph. If this node has no inputs it will be deleted when no longer referenced.
    void RemoveAllOutputs();
    
    // Removes this node from the graph by disconnecting it from all inputs and outputs and attaching the input nodes to the output nodes, keeping the rest of the graph intact. This node will be deleted when it is no longer referenced.
    void RemoveAndAttachInputsToOutputs();
    
    bool GetAutoCollapse();
    
    void SetAutoCollapse(bool value);
    
    bool GetHasInputs();
    
    bool GetHasOutputs();
    
    int GetInputCount();
    
    int GetOutputCount();
    
    float GetBypassPercent();
    
    void SetBypassPercent(float value);
    
    float GetBypassValue();
    
    void SetBypassValue(float value);
    
    unsigned char mValue[264];
    
  protected:
    SoundNode(Zilch::NoType none) : ReferenceCountedEventObject(none) {}
    ZilchNoCopy(SoundNode);
  };
  
  class SimpleCollapseNode : public SoundNode
  {
  public:
    typedef SimpleCollapseNode ZilchSelf;
    typedef SoundNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    SimpleCollapseNode(Zilch::NoType none) : SoundNode(none) {}
    ZilchNoCopy(SimpleCollapseNode);
  };
  
  class SoundAsset : public ReferenceCountedObject
  {
  public:
    typedef SoundAsset ZilchSelf;
    typedef ReferenceCountedObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[32];
    
  protected:
    SoundAsset(Zilch::NoType none) : ReferenceCountedObject(none) {}
    ZilchNoCopy(SoundAsset);
  };
  
  // Uses the object's position to "hear" all SoundEmitters in the SoundSpace.
  class SoundListener : public Component
  {
  public:
    typedef SoundListener ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetActive();
    
    void SetActive(bool value);
    
    Zilch::HandleOf<SoundNode> GetSoundNode();
    
    float GetAttenuationScale();
    
    void SetAttenuationScale(float value);
    
    unsigned char mValue[128];
    
  protected:
    SoundListener(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SoundListener);
  };
  
  class ListenerNode : public SoundNode
  {
  public:
    typedef ListenerNode ZilchSelf;
    typedef SoundNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[128];
    
  protected:
    ListenerNode(Zilch::NoType none) : SoundNode(none) {}
    ZilchNoCopy(ListenerNode);
  };
  
  class AudioSettings : public Component
  {
  public:
    typedef AudioSettings ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetSystemVolume();
    
    void SetSystemVolume(float value);
    
    bool GetMuteAllAudio();
    
    void SetMuteAllAudio(bool value);
    
    bool GetUseRandomSeed();
    
    void SetUseRandomSeed(bool value);
    
    int GetSeed();
    
    void SetSeed(int value);
    
    AudioMixTypes GetMixType();
    
    void SetMixType(const AudioMixTypes& value);
    
    float GetMinVolumeThreshold();
    
    void SetMinVolumeThreshold(float value);
    
    AudioLatency GetLatencySetting();
    
    void SetLatencySetting(const AudioLatency& value);
    
    unsigned char mValue[24];
    
  protected:
    AudioSettings(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(AudioSettings);
  };
  
  // Sound functionality associated with a Space.
  class SoundSpace : public Component
  {
  public:
    typedef SoundSpace ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetPauseWithTimeSpace();
    
    void SetPauseWithTimeSpace(bool value);
    
    bool GetPitchWithTimeSpace();
    
    void SetPitchWithTimeSpace(bool value);
    
    bool GetPaused();
    
    void SetPaused(bool value);
    
    float GetVolume();
    
    void SetVolume(float value);
    
    bool GetMuteAudio();
    
    void SetMuteAudio(bool value);
    
    float GetDecibels();
    
    void SetDecibels(float value);
    
    float GetPitch();
    
    void SetPitch(float value);
    
    float GetSemitones();
    
    void SetSemitones(float value);
    
    Zilch::HandleOf<SoundNode> GetInputNode();
    
    Zilch::HandleOf<SoundNode> GetOutputNode();
    
    Zilch::HandleOf<SoundNode> GetSoundNodeInput();
    
    Zilch::HandleOf<SoundNode> GetSoundNodeOutput();
    
    // Interpolates the SoundSpace's Pitch property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolatePitch(float pitch, float time);
    
    // Interpolates the SoundSpace's Semitones property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolateSemitones(float pitch, float time);
    
    // Interpolates the SoundSpace's Volume property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolateVolume(float value, float interpolationTime);
    
    // Interpolates the SoundSpace's Decibels property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolateDecibels(float decibels, float interpolationTime);
    
    // Plays the passed-in SoundCue non-positionally and returns the resulting SoundInstance.
    Zilch::HandleOf<SoundInstance> PlayCue(SoundCue* cue);
    
    // Plays the passed-in SoundCue non-positionally and returns the resulting SoundInstance, which starts off paused.
    Zilch::HandleOf<SoundInstance> PlayCuePaused(SoundCue* cue);
    
    unsigned char mValue[240];
    
  protected:
    SoundSpace(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SoundSpace);
  };
  
  class SoundAttenuatorDisplay : public MetaDisplay
  {
  public:
    typedef SoundAttenuatorDisplay ZilchSelf;
    typedef MetaDisplay ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    SoundAttenuatorDisplay(Zilch::NoType none) : MetaDisplay(none) {}
    ZilchNoCopy(SoundAttenuatorDisplay);
  };
  
  // Decreases a positional sound's volume as the SoundEmitter gets further away from a SoundListener.
  class SoundAttenuator : public DataResource
  {
  public:
    typedef SoundAttenuator ZilchSelf;
    typedef DataResource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetStartDistance();
    
    void SetStartDistance(float value);
    
    float GetStopDistance();
    
    void SetStopDistance(float value);
    
    float GetMinAttenuatedVolume();
    
    void SetMinAttenuatedVolume(float value);
    
    bool GetUseLowPassFilter();
    
    void SetUseLowPassFilter(bool value);
    
    float GetLowPassStartDistance();
    
    void SetLowPassStartDistance(float value);
    
    float GetLowPassCutoffFreq();
    
    void SetLowPassCutoffFreq(float value);
    
    FalloffCurveType GetFalloffCurveType();
    
    void SetFalloffCurveType(const FalloffCurveType& value);
    
    Zilch::HandleOf<SampleCurve> GetFalloffCurve();
    
    void SetFalloffCurve(SampleCurve* value);
    
    unsigned char mValue[104];
    
  protected:
    SoundAttenuator(Zilch::NoType none) : DataResource(none) {}
    ZilchNoCopy(SoundAttenuator);
  };
  
  class AttenuatorNode : public SimpleCollapseNode
  {
  public:
    typedef AttenuatorNode ZilchSelf;
    typedef SimpleCollapseNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[192];
    
  protected:
    AttenuatorNode(Zilch::NoType none) : SimpleCollapseNode(none) {}
    ZilchNoCopy(AttenuatorNode);
  };
  
  class SoundEmitterDisplay : public MetaDisplay
  {
  public:
    typedef SoundEmitterDisplay ZilchSelf;
    typedef MetaDisplay ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    SoundEmitterDisplay(Zilch::NoType none) : MetaDisplay(none) {}
    ZilchNoCopy(SoundEmitterDisplay);
  };
  
  // Allows 3D positioning of sounds relative to SoundListeners.
  class SoundEmitter : public Component
  {
  public:
    typedef SoundEmitter ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetVolume();
    
    void SetVolume(float value);
    
    float GetDecibels();
    
    void SetDecibels(float value);
    
    float GetPitch();
    
    void SetPitch(float value);
    
    float GetSemitones();
    
    void SetSemitones(float value);
    
    bool GetDirectional();
    
    void SetDirectional(bool value);
    
    float GetEmitAngle();
    
    void SetEmitAngle(float value);
    
    float GetRearVolume();
    
    void SetRearVolume(float value);
    
    Zilch::HandleOf<SoundAttenuator> GetAttenuator();
    
    void SetAttenuator(SoundAttenuator* value);
    
    bool GetPaused();
    
    void SetPaused(bool value);
    
    // Plays the SoundCue passed into the function and returns the resulting SoundInstance.
    Zilch::HandleOf<SoundInstance> PlayCue(SoundCue* cue);
    
    // Plays the SoundCue passed into the function and returns the resulting SoundInstance, which starts off paused.
    Zilch::HandleOf<SoundInstance> PlayCuePaused(SoundCue* cue);
    
    bool GetIsPlaying();
    
    // Interpolates the Pitch property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolatePitch(float pitch, float interpolationTime);
    
    // Interpolates the Semitones property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolateSemitones(float pitch, float interpolationTime);
    
    // Interpolates the Volume property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolateVolume(float volume, float interpolationTime);
    
    // Interpolates the Decibels property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolateDecibels(float decibels, float interpolationTime);
    
    Zilch::HandleOf<SoundNode> GetInputNode();
    
    Zilch::HandleOf<SoundNode> GetOutputNode();
    
    Zilch::HandleOf<SoundNode> GetSoundNodeInput();
    
    Zilch::HandleOf<SoundNode> GetSoundNodeOutput();
    
    unsigned char mValue[448];
    
  protected:
    SoundEmitter(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SoundEmitter);
  };
  
  class EmitterNode : public SoundNode
  {
  public:
    typedef EmitterNode ZilchSelf;
    typedef SoundNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[232];
    
  protected:
    EmitterNode(Zilch::NoType none) : SoundNode(none) {}
    ZilchNoCopy(EmitterNode);
  };
  
  // The object associated with a currently playing sound.
  class SoundInstance : public SimpleCollapseNode
  {
  public:
    typedef SoundInstance ZilchSelf;
    typedef SimpleCollapseNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetVolume();
    
    void SetVolume(float value);
    
    float GetDecibels();
    
    void SetDecibels(float value);
    
    float GetPitch();
    
    void SetPitch(float value);
    
    float GetSemitones();
    
    void SetSemitones(float value);
    
    bool GetIsPlaying();
    
    Zilch::HandleOf<SoundNode> GetSoundNode();
    
    // Interpolates the SoundInstance's Pitch property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolatePitch(float pitch, float interpolationTime);
    
    // Interpolates the SoundInstance's Semitones property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolateSemitones(float pitchSemitones, float interpolationTime);
    
    // Interpolates the SoundInstance's Volume property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolateVolume(float volume, float interpolationTime);
    
    // Interpolates the SoundInstance's Decibels property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolateDecibels(float decibels, float interpolationTime);
    
    bool GetPaused();
    
    void SetPaused(bool value);
    
    // Stops the playback of this SoundInstance. It cannot be re-started.
    void Stop();
    
    bool GetLooping();
    
    void SetLooping(bool value);
    
    float GetTime();
    
    void SetTime(float value);
    
    float GetFileLength();
    
    float GetEndTime();
    
    void SetEndTime(float value);
    
    float GetLoopStartTime();
    
    void SetLoopStartTime(float value);
    
    float GetLoopEndTime();
    
    void SetLoopEndTime(float value);
    
    float GetLoopTailTime();
    
    void SetLoopTailTime(float value);
    
    bool GetCrossFadeLoopTail();
    
    void SetCrossFadeLoopTail(bool value);
    
    float GetCustomEventTime();
    
    void SetCustomEventTime(float value);
    
    Zilch::String GetSoundName();
    
    unsigned char mValue[696];
    
  protected:
    SoundInstance(Zilch::NoType none) : SimpleCollapseNode(none) {}
    ZilchNoCopy(SoundInstance);
  };
  
  class SoundEntryDisplay : public MetaDisplay
  {
  public:
    typedef SoundEntryDisplay ZilchSelf;
    typedef MetaDisplay ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    SoundEntryDisplay(Zilch::NoType none) : MetaDisplay(none) {}
    ZilchNoCopy(SoundEntryDisplay);
  };
  
  // Stores Sounds and associated properties to be used by a SoundCue.
  class SoundEntry : public Object
  {
  public:
    typedef SoundEntry ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Sound> GetSound();
    
    void SetSound(Sound* value);
    
    float GetWeight();
    
    void SetWeight(float value);
    
    float GetStartTime();
    
    void SetStartTime(float value);
    
    float GetEndTime();
    
    void SetEndTime(float value);
    
    float GetLoopStartTime();
    
    void SetLoopStartTime(float value);
    
    float GetLoopEndTime();
    
    void SetLoopEndTime(float value);
    
    float GetLoopTailLength();
    
    void SetLoopTailLength(float value);
    
    bool GetCrossFadeLoopTail();
    
    void SetCrossFadeLoopTail(bool value);
    
    // Preview this sound with no SoundCue settings.
    void Preview();
    
    // Stop previewing this sound.
    void StopPreview();
    
    unsigned char mValue[88];
    
  protected:
    SoundEntry(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(SoundEntry);
  };
  
  class SoundTagEntryDisplay : public MetaDisplay
  {
  public:
    typedef SoundTagEntryDisplay ZilchSelf;
    typedef MetaDisplay ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    SoundTagEntryDisplay(Zilch::NoType none) : MetaDisplay(none) {}
    ZilchNoCopy(SoundTagEntryDisplay);
  };
  
  // Stores a SoundTag which will be applied to all SoundInstances created by this SoundCue.
  class SoundTagEntry : public Object
  {
  public:
    typedef SoundTagEntry ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<SoundTag> GetSoundTag();
    
    void SetSoundTag(SoundTag* value);
    
    unsigned char mValue[56];
    
  protected:
    SoundTagEntry(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(SoundTagEntry);
  };
  
  class SoundCueDisplay : public MetaDisplay
  {
  public:
    typedef SoundCueDisplay ZilchSelf;
    typedef MetaDisplay ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    SoundCueDisplay(Zilch::NoType none) : MetaDisplay(none) {}
    ZilchNoCopy(SoundCueDisplay);
  };
  
  // Settings and Sounds for playing audio files.
  class SoundCue : public DataResource
  {
  public:
    typedef SoundCue ZilchSelf;
    typedef DataResource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    SoundPlayMode GetPlayMode();
    
    void SetPlayMode(const SoundPlayMode& value);
    
    SoundSelectMode GetSelectMode();
    
    void SetSelectMode(const SoundSelectMode& value);
    
    float GetVolume();
    
    void SetVolume(float value);
    
    float GetDecibels();
    
    void SetDecibels(float value);
    
    bool GetUseDecibelVariation();
    
    void SetUseDecibelVariation(bool value);
    
    float GetVolumeVariation();
    
    void SetVolumeVariation(float value);
    
    float GetDecibelVariation();
    
    void SetDecibelVariation(float value);
    
    float GetPitch();
    
    void SetPitch(float value);
    
    float GetSemitones();
    
    void SetSemitones(float value);
    
    bool GetUseSemitoneVariation();
    
    void SetUseSemitoneVariation(bool value);
    
    float GetPitchVariation();
    
    void SetPitchVariation(float value);
    
    float GetSemitoneVariation();
    
    void SetSemitoneVariation(float value);
    
    Zilch::HandleOf<SoundAttenuator> GetAttenuator();
    
    void SetAttenuator(SoundAttenuator* value);
    
    bool GetShowMusicOptions();
    
    void SetShowMusicOptions(bool value);
    
    float GetBeatsPerMinute();
    
    void SetBeatsPerMinute(float value);
    
    float GetTimeSigBeats();
    
    void SetTimeSigBeats(float value);
    
    float GetTimeSigValue();
    
    void SetTimeSigValue(float value);
    
    void Preview();
    
    void StopPreview();
    
    Zilch::HandleOf<Sounds> GetSounds();
    
    void SetSounds(Sounds* value);
    
    Zilch::HandleOf<SoundTags> GetSoundTags();
    
    void SetSoundTags(SoundTags* value);
    
    // Adds a new SoundTagEntry to this SoundCue.
    void AddSoundTagEntry(SoundTag* soundTag);
    
    // Adds a new SoundEntry to this SoundCue.
    void AddSoundEntry(Sound* sound, float weight);
    
    // Plays this SoundCue using a specified SoundNode as the output and returns the resulting SoundInstance.
    Zilch::HandleOf<SoundInstance> PlayCueOnNode(SoundNode* outputNode, bool startPaused);
    
    unsigned char mValue[176];
    
  protected:
    SoundCue(Zilch::NoType none) : DataResource(none) {}
    ZilchNoCopy(SoundCue);
  };
  
  class SoundDisplay : public MetaDisplay
  {
  public:
    typedef SoundDisplay ZilchSelf;
    typedef MetaDisplay ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    SoundDisplay(Zilch::NoType none) : MetaDisplay(none) {}
    ZilchNoCopy(SoundDisplay);
  };
  
  // The resource for a single audio file.
  class Sound : public Resource
  {
  public:
    typedef Sound ZilchSelf;
    typedef Resource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetLength();
    
    int GetChannels();
    
    unsigned char mValue[64];
    
  protected:
    Sound(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(Sound);
  };
  
  // Plays a specified SoundCue, either when created or when the Play method is called.
  class SimpleSound : public Component
  {
  public:
    typedef SimpleSound ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<SoundCue> GetCue();
    
    void SetCue(SoundCue* value);
    
    bool GetStartPlaying();
    
    void SetStartPlaying(bool value);
    
    bool GetPositional();
    
    void SetPositional(bool value);
    
    bool GetIsPlaying();
    
    bool GetPaused();
    
    void SetPaused(bool value);
    
    // Begins playing the SoundCue chosen in the Cue property and returns the resulting SoundInstance. If already playing it will be stopped and re-started.
    Zilch::HandleOf<SoundInstance> Play();
    
    // Stops a currently playing SoundInstance if it exists.
    void Stop();
    
    unsigned char mValue[128];
    
  protected:
    SimpleSound(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SimpleSound);
  };
  
  // Used with a CustomAudioNode to play audio data directly.
  class SoundBuffer : public ReferenceCountedObject
  {
  public:
    typedef SoundBuffer ZilchSelf;
    typedef ReferenceCountedObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetSampleCount();
    
    // Adds a new audio sample to the end of the buffer.
    void AddSampleToBuffer(float sample);
    
    // Returns the sample at a specific index from the beginning of the buffer.
    float GetSampleAtIndex(int index);
    
    // Removes all data from the buffer and resets it.
    void Reset();
    
    void AddMicUncompressedData(Zilch::ArrayReal* __0);
    
    unsigned char mValue[32];
    
  protected:
    SoundBuffer(Zilch::NoType none) : ReferenceCountedObject(none) {}
    ZilchNoCopy(SoundBuffer);
  };
  
  // Uses a SoundBuffer to send audio data directly to the audio engine.
  class CustomAudioNode : public SoundNode
  {
  public:
    typedef CustomAudioNode ZilchSelf;
    typedef SoundNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetChannels();
    
    void SetChannels(int value);
    
    int GetMinimumBufferSize();
    
    int GetSystemSampleRate();
    
    // Sends a buffer of audio samples to the audio system for output.
    void SendBuffer(SoundBuffer* buffer);
    
    // Sends a partial buffer of audio samples to the audio system for output.
    void SendPartialBuffer(SoundBuffer* buffer, int startAtIndex, int howManySamples);
    
    void SendMicUncompressedData(Zilch::ArrayReal* __0);
    
    void SendMicCompressedData(Zilch::ArrayByte* __0);
    
    unsigned char mValue[56];
    
  protected:
    CustomAudioNode(Zilch::NoType none) : SoundNode(none) {}
    ZilchNoCopy(CustomAudioNode);
  };
  
  // Plays audio using the specified type of generated wave.
  class GeneratedWaveNode : public SoundNode
  {
  public:
    typedef GeneratedWaveNode ZilchSelf;
    typedef SoundNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    SynthWaveType GetWaveType();
    
    void SetWaveType(const SynthWaveType& value);
    
    float GetWaveFrequency();
    
    void SetWaveFrequency(float value);
    
    float GetVolume();
    
    void SetVolume(float value);
    
    float GetDecibels();
    
    void SetDecibels(float value);
    
    float GetSquareWavePulseValue();
    
    void SetSquareWavePulseValue(float value);
    
    // Starts playing the generated audio.
    void Play();
    
    // Stops playing the generated audio.
    void Stop();
    
    // Interpolates the Volume property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolateVolume(float volume, float interpolationTime);
    
    // Interpolates the Decibels property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolateDecibels(float decibels, float interpolationTime);
    
    // Interpolates the WaveFrequency property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter. This method will have no effect if the Noise type is chosen.
    void InterpolateWaveFrequency(float frequency, float time);
    
    unsigned char mValue[4240];
    
  protected:
    GeneratedWaveNode(Zilch::NoType none) : SoundNode(none) {}
    ZilchNoCopy(GeneratedWaveNode);
  };
  
  // Changes the volume of audio generated by its input SoundNodes.
  class VolumeNode : public SimpleCollapseNode
  {
  public:
    typedef VolumeNode ZilchSelf;
    typedef SimpleCollapseNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetVolume();
    
    void SetVolume(float value);
    
    // Interpolates the Volume property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolateVolume(float volume, float interpolationTime);
    
    float GetDecibels();
    
    void SetDecibels(float value);
    
    // Interpolates the Decibels property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolateDecibels(float volumeDB, float interpolationTime);
    
    unsigned char mValue[64];
    
  protected:
    VolumeNode(Zilch::NoType none) : SimpleCollapseNode(none) {}
    ZilchNoCopy(VolumeNode);
  };
  
  // Changes the pitch and speed of audio generated by its input SoundNodes.
  class PitchNode : public SimpleCollapseNode
  {
  public:
    typedef PitchNode ZilchSelf;
    typedef SimpleCollapseNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetPitch();
    
    void SetPitch(float value);
    
    float GetSemitones();
    
    void SetSemitones(float value);
    
    // Interpolates the Pitch property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolatePitch(float pitchRatio, float interpolationTime);
    
    // Interpolates the Semitones property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolateSemitones(float pitchSemitones, float interpolationTime);
    
    unsigned char mValue[192];
    
  protected:
    PitchNode(Zilch::NoType none) : SimpleCollapseNode(none) {}
    ZilchNoCopy(PitchNode);
  };
  
  // Applies a low pass filter to audio generated by its input SoundNodes (removes high frequencies)
  class LowPassNode : public SimpleCollapseNode
  {
  public:
    typedef LowPassNode ZilchSelf;
    typedef SimpleCollapseNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetCutoffFrequency();
    
    void SetCutoffFrequency(float value);
    
    unsigned char mValue[48];
    
  protected:
    LowPassNode(Zilch::NoType none) : SimpleCollapseNode(none) {}
    ZilchNoCopy(LowPassNode);
  };
  
  // Applies a high pass filter to audio generated by its input SoundNodes (removes low frequencies)
  class HighPassNode : public SimpleCollapseNode
  {
  public:
    typedef HighPassNode ZilchSelf;
    typedef SimpleCollapseNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetCutoffFrequency();
    
    void SetCutoffFrequency(float value);
    
    unsigned char mValue[48];
    
  protected:
    HighPassNode(Zilch::NoType none) : SimpleCollapseNode(none) {}
    ZilchNoCopy(HighPassNode);
  };
  
  // Applies a band pass filter to audio generated by its input SoundNodes (removes low and high frequencies)
  class BandPassNode : public SimpleCollapseNode
  {
  public:
    typedef BandPassNode ZilchSelf;
    typedef SimpleCollapseNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetCentralFrequency();
    
    void SetCentralFrequency(float value);
    
    float GetQualityFactor();
    
    void SetQualityFactor(float value);
    
    unsigned char mValue[56];
    
  protected:
    BandPassNode(Zilch::NoType none) : SimpleCollapseNode(none) {}
    ZilchNoCopy(BandPassNode);
  };
  
  // Applied volume changes to specific frequency bands in the audio generated by its input SoundNodes.
  class EqualizerNode : public SimpleCollapseNode
  {
  public:
    typedef EqualizerNode ZilchSelf;
    typedef SimpleCollapseNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetLowPassGain();
    
    void SetLowPassGain(float value);
    
    float GetHighPassGain();
    
    void SetHighPassGain(float value);
    
    float GetBand1Gain();
    
    void SetBand1Gain(float value);
    
    float GetBand2Gain();
    
    void SetBand2Gain(float value);
    
    float GetBand3Gain();
    
    void SetBand3Gain(float value);
    
    // Sets the volume adjustment of all bands (the parameters in order are low pass, band 1, band 2, band 3, high pass) over the number of seconds passed in as the final parameter.
    void InterpolateAllBands(float lowPass, float band1, float band2, float band3, float highPass, float timeToInterpolate);
    
    unsigned char mValue[80];
    
  protected:
    EqualizerNode(Zilch::NoType none) : SimpleCollapseNode(none) {}
    ZilchNoCopy(EqualizerNode);
  };
  
  // Applies a simple reverb filter to audio generated by its input SoundNodes.
  class ReverbNode : public SimpleCollapseNode
  {
  public:
    typedef ReverbNode ZilchSelf;
    typedef SimpleCollapseNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetLength();
    
    void SetLength(float value);
    
    float GetWetPercent();
    
    void SetWetPercent(float value);
    
    float GetWetValue();
    
    void SetWetValue(float value);
    
    // DEPRECATED The InterpolateWetValue method should be used instead.
    void InterpolateWetPercent(float percent, float time);
    
    // Interpolates the WetValue property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolateWetValue(float value, float time);
    
    unsigned char mValue[64];
    
  protected:
    ReverbNode(Zilch::NoType none) : SimpleCollapseNode(none) {}
    ZilchNoCopy(ReverbNode);
  };
  
  // Applies a delay filter to audio generated by its input SoundNodes.
  class DelayNode : public SimpleCollapseNode
  {
  public:
    typedef DelayNode ZilchSelf;
    typedef SimpleCollapseNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetDelay();
    
    void SetDelay(float value);
    
    float GetFeedbackPercent();
    
    void SetFeedbackPercent(float value);
    
    float GetFeedbackValue();
    
    void SetFeedbackValue(float value);
    
    float GetWetPercent();
    
    void SetWetPercent(float value);
    
    float GetWetValue();
    
    void SetWetValue(float value);
    
    // DEPRECATED The InterpolateWetValue method should be used instead.
    void InterpolateWetPercent(float wetPercent, float time);
    
    // Interpolates the WetValue property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolateWetValue(float wetPercent, float time);
    
    unsigned char mValue[64];
    
  protected:
    DelayNode(Zilch::NoType none) : SimpleCollapseNode(none) {}
    ZilchNoCopy(DelayNode);
  };
  
  // Applies a flanger filter to audio generated by its input SoundNodes.
  class FlangerNode : public SimpleCollapseNode
  {
  public:
    typedef FlangerNode ZilchSelf;
    typedef SimpleCollapseNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetMaxDelayMillisec();
    
    void SetMaxDelayMillisec(float value);
    
    float GetModulationFrequency();
    
    void SetModulationFrequency(float value);
    
    float GetFeedbackPercent();
    
    void SetFeedbackPercent(float value);
    
    float GetFeedbackValue();
    
    void SetFeedbackValue(float value);
    
    unsigned char mValue[64];
    
  protected:
    FlangerNode(Zilch::NoType none) : SimpleCollapseNode(none) {}
    ZilchNoCopy(FlangerNode);
  };
  
  // Applies a chorus filter to audio generated by its input SoundNodes.
  class ChorusNode : public SimpleCollapseNode
  {
  public:
    typedef ChorusNode ZilchSelf;
    typedef SimpleCollapseNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetMaxDelayMillisec();
    
    void SetMaxDelayMillisec(float value);
    
    float GetMinDelayMillisec();
    
    void SetMinDelayMillisec(float value);
    
    float GetModulationFrequency();
    
    void SetModulationFrequency(float value);
    
    float GetFeedbackPercent();
    
    void SetFeedbackPercent(float value);
    
    float GetFeedbackValue();
    
    void SetFeedbackValue(float value);
    
    float GetOffsetMillisec();
    
    void SetOffsetMillisec(float value);
    
    unsigned char mValue[80];
    
  protected:
    ChorusNode(Zilch::NoType none) : SimpleCollapseNode(none) {}
    ZilchNoCopy(ChorusNode);
  };
  
  // Records audio generated by its input SoundNodes into a WAV file.
  class RecordingNode : public SimpleCollapseNode
  {
  public:
    typedef RecordingNode ZilchSelf;
    typedef SimpleCollapseNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetFileName();
    
    void SetFileName(const Zilch::String& value);
    
    // Starts writing all audio input to a file.
    void StartRecording();
    
    // Stops writing data and closes the file.
    void StopRecording();
    
    bool GetPaused();
    
    void SetPaused(bool value);
    
    bool GetStreamToDisk();
    
    void SetStreamToDisk(bool value);
    
    unsigned char mValue[136];
    
  protected:
    RecordingNode(Zilch::NoType none) : SimpleCollapseNode(none) {}
    ZilchNoCopy(RecordingNode);
  };
  
  class CompressorNode : public SimpleCollapseNode
  {
  public:
    typedef CompressorNode ZilchSelf;
    typedef SimpleCollapseNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetInputGainDecibels();
    
    void SetInputGainDecibels(float value);
    
    float GetThresholdDecibels();
    
    void SetThresholdDecibels(float value);
    
    float GetAttackMillisec();
    
    void SetAttackMillisec(float value);
    
    float GetReleaseMillisec();
    
    void SetReleaseMillisec(float value);
    
    float GetRatio();
    
    void SetRatio(float value);
    
    float GetOutputGainDecibels();
    
    void SetOutputGainDecibels(float value);
    
    float GetKneeWidth();
    
    void SetKneeWidth(float value);
    
    unsigned char mValue[432];
    
  protected:
    CompressorNode(Zilch::NoType none) : SimpleCollapseNode(none) {}
    ZilchNoCopy(CompressorNode);
  };
  
  class ExpanderNode : public SimpleCollapseNode
  {
  public:
    typedef ExpanderNode ZilchSelf;
    typedef SimpleCollapseNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetInputGainDecibels();
    
    void SetInputGainDecibels(float value);
    
    float GetThresholdDecibels();
    
    void SetThresholdDecibels(float value);
    
    float GetAttackMillisec();
    
    void SetAttackMillisec(float value);
    
    float GetReleaseMillisec();
    
    void SetReleaseMillisec(float value);
    
    float GetRatio();
    
    void SetRatio(float value);
    
    float GetOutputGainDecibels();
    
    void SetOutputGainDecibels(float value);
    
    float GetKneeWidth();
    
    void SetKneeWidth(float value);
    
    unsigned char mValue[432];
    
  protected:
    ExpanderNode(Zilch::NoType none) : SimpleCollapseNode(none) {}
    ZilchNoCopy(ExpanderNode);
  };
  
  // Controls settings on all tagged SoundInstances.
  class SoundTag : public DataResource
  {
  public:
    typedef SoundTag ZilchSelf;
    typedef DataResource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetVolume();
    
    void SetVolume(float value);
    
    float GetDecibels();
    
    void SetDecibels(float value);
    
    bool GetUseEqualizer();
    
    void SetUseEqualizer(bool value);
    
    float GetEQLowPassGain();
    
    void SetEQLowPassGain(float value);
    
    float GetEQBand1Gain();
    
    void SetEQBand1Gain(float value);
    
    float GetEQBand2Gain();
    
    void SetEQBand2Gain(float value);
    
    float GetEQBand3Gain();
    
    void SetEQBand3Gain(float value);
    
    float GetEQHighPassGain();
    
    void SetEQHighPassGain(float value);
    
    bool GetUseCompressor();
    
    void SetUseCompressor(bool value);
    
    float GetCompressorThreshold();
    
    void SetCompressorThreshold(float value);
    
    float GetCompressorAttack();
    
    void SetCompressorAttack(float value);
    
    float GetCompressorRelease();
    
    void SetCompressorRelease(float value);
    
    float GetCompressorRatio();
    
    void SetCompressorRatio(float value);
    
    float GetCompressorKneeWidth();
    
    void SetCompressorKneeWidth(float value);
    
    float GetInstanceLimit();
    
    void SetInstanceLimit(float value);
    
    int GetInstanceCount();
    
    bool GetPaused();
    
    void SetPaused(bool value);
    
    Zilch::HandleOf<SoundInstanceRange> GetInstances();
    
    // Adds a new SoundInstance to this SoundTag.
    void TagSound(SoundInstance* instance);
    
    // Removes a SoundInstance from this SoundTag.
    void UnTagSound(SoundInstance* instance);
    
    // Stops all currently tagged SoundInstances.
    void StopSounds();
    
    // Interpolates the SoundTag's Volume property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolateVolume(float value, float interpolationTime);
    
    // Interpolates the SoundTag's Decibels property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolateDecibels(float decibels, float interpolationTime);
    
    // Sets all equalizer band gain values at once. The parameters are in order from the lowest band to the highest. The last parameter is the number of seconds to interpolate the values over.
    void EQSetAllBands(float lowPass, float band1, float band2, float band3, float highPass, float timeToInterpolate);
    
    Zilch::HandleOf<SoundTag> GetTagForDucking();
    
    void SetTagForDucking(SoundTag* value);
    
    unsigned char mValue[160];
    
  protected:
    SoundTag(Zilch::NoType none) : DataResource(none) {}
    ZilchNoCopy(SoundTag);
  };
  
  // Changes the left and right channel volumes of its input SoundNode's audio separately.
  class PanningNode : public SimpleCollapseNode
  {
  public:
    typedef PanningNode ZilchSelf;
    typedef SimpleCollapseNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetSumToMono();
    
    void SetSumToMono(bool value);
    
    float GetLeftVolume();
    
    void SetLeftVolume(float value);
    
    float GetRightVolume();
    
    void SetRightVolume(float value);
    
    // Interpolates the LeftVolume property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolateLeftVolume(float volume, float time);
    
    // Interpolates the RightVolume property from its current value to the value passed in as the first parameter, over the number of seconds passed in as the second parameter.
    void InterpolateRightVolume(float volume, float time);
    
    // Interpolates both left and right volume properties at once. The first parameter is the value to change the LeftVolume to, the second is the RightVolume, and the third is the number of seconds to use for the interpolation.
    void InterpolateVolumes(float leftVolume, float rightVolume, float time);
    
    unsigned char mValue[136];
    
  protected:
    PanningNode(Zilch::NoType none) : SimpleCollapseNode(none) {}
    ZilchNoCopy(PanningNode);
  };
  
  // Adds random noise (static) to audio generated by its input SoundNodes.
  class AddNoiseNode : public SimpleCollapseNode
  {
  public:
    typedef AddNoiseNode ZilchSelf;
    typedef SimpleCollapseNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetAdditiveGain();
    
    void SetAdditiveGain(float value);
    
    float GetMultiplicativeGain();
    
    void SetMultiplicativeGain(float value);
    
    float GetAdditiveCutoff();
    
    void SetAdditiveCutoff(float value);
    
    float GetMultiplicativeCutoff();
    
    void SetMultiplicativeCutoff(float value);
    
    unsigned char mValue[56];
    
  protected:
    AddNoiseNode(Zilch::NoType none) : SimpleCollapseNode(none) {}
    ZilchNoCopy(AddNoiseNode);
  };
  
  // Used to control harmonics of notes played by the AdditiveSynthNode.
  class AdsrEnvelope : public Zilch::ValueType
  {
  public:
    typedef AdsrEnvelope ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetDelayTime();
    
    void SetDelayTime(float value);
    
    float GetAttackTime();
    
    void SetAttackTime(float value);
    
    float GetDecayTime();
    
    void SetDecayTime(float value);
    
    float GetSustainTime();
    
    void SetSustainTime(float value);
    
    float GetSustainLevel();
    
    void SetSustainLevel(float value);
    
    float GetReleaseTime();
    
    void SetReleaseTime(float value);
    
    unsigned char mValue[24];
    AdsrEnvelope();
  };
  
  // Generates audio using additive synthesis.
  class AdditiveSynthNode : public SoundNode
  {
  public:
    typedef AdditiveSynthNode ZilchSelf;
    typedef SoundNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Adds a new harmonic to the additive synth notes. The first value is the multiplier that will be applied to the base frequency, the second is the volume of this harmonic, and the third (the AdsrEnvelope object) contains the envelope-related values.
    void AddHarmonic(float frequencyMultiplier, float volume, const AdsrEnvelope& envelope, const SynthWaveType& type);
    
    // Removes all current harmonics. You must add at least one harmonic before playing a note.
    void RemoveAllHarmonics();
    
    // Starts playing a new note. The first parameter is the MIDI note value (range is 0 to 127), and the second is the volume modification that should be applied to this note (a value of 1.0 does not change the volume, while 0.0 would be silence).
    void NoteOn(float midiNote, float volume);
    
    // Stops playing all current notes at the specified MIDI value.
    void NoteOff(float midiNote);
    
    // Stops playing all current notes.
    void StopAllNotes();
    
    unsigned char mValue[80];
    
  protected:
    AdditiveSynthNode(Zilch::NoType none) : SoundNode(none) {}
    ZilchNoCopy(AdditiveSynthNode);
  };
  
  class GranularSynthNode : public SoundNode
  {
  public:
    typedef GranularSynthNode ZilchSelf;
    typedef SoundNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Sets the Sound resource that will be used for the grains, along with an optional start and stop time. If the stopTime is 0.0, all audio from the Sound will be used.
    void SetSound(Sound* sound, float startTime, float stopTime);
    
    // Starts playing new grains.
    void Play();
    
    // Stops playing new grains but continues to play current ones.
    void Stop();
    
    float GetGrainVolume();
    
    void SetGrainVolume(float value);
    
    float GetGrainVolumeVariance();
    
    void SetGrainVolumeVariance(float value);
    
    int GetGrainDelay();
    
    void SetGrainDelay(int value);
    
    int GetGrainDelayVariance();
    
    void SetGrainDelayVariance(int value);
    
    int GetGrainLength();
    
    void SetGrainLength(int value);
    
    int GetGrainLengthVariance();
    
    void SetGrainLengthVariance(int value);
    
    float GetGrainResampleRate();
    
    void SetGrainResampleRate(float value);
    
    float GetGrainResampleRateVariance();
    
    void SetGrainResampleRateVariance(float value);
    
    float GetBufferScanRate();
    
    void SetBufferScanRate(float value);
    
    float GetGrainPanningValue();
    
    void SetGrainPanningValue(float value);
    
    float GetGrainPanningVariance();
    
    void SetGrainPanningVariance(float value);
    
    float GetRandomLocationValue();
    
    void SetRandomLocationValue(float value);
    
    GranularSynthWindows GetWindowType();
    
    void SetWindowType(const GranularSynthWindows& value);
    
    int GetWindowAttack();
    
    void SetWindowAttack(int value);
    
    int GetWindowRelease();
    
    void SetWindowRelease(int value);
    
    unsigned char mValue[224];
    
  protected:
    GranularSynthNode(Zilch::NoType none) : SoundNode(none) {}
    ZilchNoCopy(GranularSynthNode);
  };
  
  // Applies either ring or amplitude modulation to audio generated by its input SoundNodes.
  class ModulationNode : public SimpleCollapseNode
  {
  public:
    typedef ModulationNode ZilchSelf;
    typedef SimpleCollapseNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetUseAmplitudeModulation();
    
    void SetUseAmplitudeModulation(bool value);
    
    float GetFrequency();
    
    void SetFrequency(float value);
    
    float GetWetPercent();
    
    void SetWetPercent(float value);
    
    float GetWetValue();
    
    void SetWetValue(float value);
    
    unsigned char mValue[64];
    
  protected:
    ModulationNode(Zilch::NoType none) : SimpleCollapseNode(none) {}
    ZilchNoCopy(ModulationNode);
  };
  
  // Receives input from a microphone and passes the audio data to its output SoundNodes.
  class MicrophoneInputNode : public SoundNode
  {
  public:
    typedef MicrophoneInputNode ZilchSelf;
    typedef SoundNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetVolume();
    
    void SetVolume(float value);
    
    bool GetActive();
    
    void SetActive(bool value);
    
    unsigned char mValue[64];
    
  protected:
    MicrophoneInputNode(Zilch::NoType none) : SoundNode(none) {}
    ZilchNoCopy(MicrophoneInputNode);
  };
  
  // Saves audio from its input SoundNodes and then plays it. All audio from inputs is passed to outputs.
  class SaveAudioNode : public SimpleCollapseNode
  {
  public:
    typedef SaveAudioNode ZilchSelf;
    typedef SimpleCollapseNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetSaveAudio();
    
    void SetSaveAudio(bool value);
    
    // Plays the saved audio.
    void PlaySavedAudio();
    
    // Stops playing the saved audio.
    void StopPlaying();
    
    // Removes all currently saved audio.
    void ClearSavedAudio();
    
    unsigned char mValue[48];
    
  protected:
    SaveAudioNode(Zilch::NoType none) : SimpleCollapseNode(none) {}
    ZilchNoCopy(SaveAudioNode);
  };
  
  class SoundTagDisplay : public MetaDisplay
  {
  public:
    typedef SoundTagDisplay ZilchSelf;
    typedef MetaDisplay ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    SoundTagDisplay(Zilch::NoType none) : MetaDisplay(none) {}
    ZilchNoCopy(SoundTagDisplay);
  };
  
  class TagObject : public ReferenceCountedObject
  {
  public:
    typedef TagObject ZilchSelf;
    typedef ReferenceCountedObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[640];
    
  protected:
    TagObject(Zilch::NoType none) : ReferenceCountedObject(none) {}
    ZilchNoCopy(TagObject);
  };
  
  class NodePrintInfo : public Zilch::ReferenceType
  {
  public:
    typedef NodePrintInfo ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<NodeInfoListRange> GetConnections();
    
    Zilch::Real2 GetPosition();
    
    void SetPosition(const Zilch::Real2& value);
    
    Zilch::String GetName();
    
    void SetName(const Zilch::String& value);
    
    bool GetHasOutput();
    
    void SetHasOutput(bool value);
    
    int GetID();
    
    void SetID(int value);
    
    unsigned char mValue[152];
    
  protected:
    NodePrintInfo(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(NodePrintInfo);
  };
  
  class OutputNode : public SoundNode
  {
  public:
    typedef OutputNode ZilchSelf;
    typedef SoundNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    OutputNode(Zilch::NoType none) : SoundNode(none) {}
    ZilchNoCopy(OutputNode);
  };
  
  class CombineNode : public SimpleCollapseNode
  {
  public:
    typedef CombineNode ZilchSelf;
    typedef SimpleCollapseNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    CombineNode(Zilch::NoType none) : SimpleCollapseNode(none) {}
    ZilchNoCopy(CombineNode);
  };
  
  class CombineAndPauseNode : public SimpleCollapseNode
  {
  public:
    typedef CombineAndPauseNode ZilchSelf;
    typedef SimpleCollapseNode ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[64];
    
  protected:
    CombineAndPauseNode(Zilch::NoType none) : SimpleCollapseNode(none) {}
    ZilchNoCopy(CombineAndPauseNode);
  };
  
  class DecompressedSoundAsset : public SoundAsset
  {
  public:
    typedef DecompressedSoundAsset ZilchSelf;
    typedef SoundAsset ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[208];
    
  protected:
    DecompressedSoundAsset(Zilch::NoType none) : SoundAsset(none) {}
    ZilchNoCopy(DecompressedSoundAsset);
  };
  
  class StreamingSoundAsset : public SoundAsset
  {
  public:
    typedef StreamingSoundAsset ZilchSelf;
    typedef SoundAsset ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[176];
    
  protected:
    StreamingSoundAsset(Zilch::NoType none) : SoundAsset(none) {}
    ZilchNoCopy(StreamingSoundAsset);
  };
  
  class ContextMenuEntryChildrenRange : public Zilch::ReferenceType
  {
  public:
    typedef ContextMenuEntryChildrenRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<ContextMenuEntryChildrenRange> GetAll();
    
    Zilch::HandleOf<ContextMenuEntry> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[16];
    
  protected:
    ContextMenuEntryChildrenRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(ContextMenuEntryChildrenRange);
  };
  
  class VerticalAlignment : public Zilch::Enum
  {
  public:
    typedef VerticalAlignment ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static VerticalAlignment GetTop();
    
    static VerticalAlignment GetBottom();
    
    static VerticalAlignment GetCenter();
    
    VerticalAlignment();
  };
  
  class HorizontalAlignment : public Zilch::Enum
  {
  public:
    typedef HorizontalAlignment ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static HorizontalAlignment GetLeft();
    
    static HorizontalAlignment GetRight();
    
    static HorizontalAlignment GetCenter();
    
    HorizontalAlignment();
  };
  
  class IndicatorSide : public Zilch::Enum
  {
  public:
    typedef IndicatorSide ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static IndicatorSide GetLeft();
    
    static IndicatorSide GetTop();
    
    static IndicatorSide GetRight();
    
    static IndicatorSide GetBottom();
    
    IndicatorSide();
  };
  
  class ToolTipColorScheme : public Zilch::Enum
  {
  public:
    typedef ToolTipColorScheme ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static ToolTipColorScheme GetDefault();
    
    static ToolTipColorScheme GetGray();
    
    static ToolTipColorScheme GetRed();
    
    static ToolTipColorScheme GetYellow();
    
    static ToolTipColorScheme GetGreen();
    
    static ToolTipColorScheme GetOrange();
    
    ToolTipColorScheme();
  };
  
  class FocusEvent : public Event
  {
  public:
    typedef FocusEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    FocusEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(FocusEvent);
  };
  
  // Mouse events for actions concerning the mouse.
  class MouseEvent : public Event
  {
  public:
    typedef MouseEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    MouseButtons GetButton();
    
    void SetButton(const MouseButtons& value);
    
    bool GetButtonDown();
    
    void SetButtonDown(bool value);
    
    Zilch::Real2 GetPosition();
    
    void SetPosition(const Zilch::Real2& value);
    
    Zilch::Real2 GetMovement();
    
    void SetMovement(const Zilch::Real2& value);
    
    Zilch::Real2 GetScroll();
    
    void SetScroll(const Zilch::Real2& value);
    
    bool GetShiftPressed();
    
    void SetShiftPressed(bool value);
    
    bool GetAltPressed();
    
    void SetAltPressed(bool value);
    
    bool GetCtrlPressed();
    
    void SetCtrlPressed(bool value);
    
    Zilch::HandleOf<Mouse> GetMouse();
    
    bool IsButtonDown(const MouseButtons& __0);
    
    bool IsButtonUp(const MouseButtons& button);
    
    bool GetHandledEvent();
    
    void SetHandledEvent(bool value);
    
    unsigned char mValue[72];
    
  protected:
    MouseEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(MouseEvent);
  };
  
  class CommandEvent : public ObjectEvent
  {
  public:
    typedef CommandEvent ZilchSelf;
    typedef ObjectEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Space> GetSpace();
    
    unsigned char mValue[8];
    
  protected:
    CommandEvent(Zilch::NoType none) : ObjectEvent(none) {}
    ZilchNoCopy(CommandEvent);
  };
  
  class CommandUpdateEvent : public ObjectEvent
  {
  public:
    typedef CommandUpdateEvent ZilchSelf;
    typedef ObjectEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    CommandUpdateEvent(Zilch::NoType none) : ObjectEvent(none) {}
    ZilchNoCopy(CommandUpdateEvent);
  };
  
  class CommandCaptureContextEvent : public Event
  {
  public:
    typedef CommandCaptureContextEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    CommandCaptureContextEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(CommandCaptureContextEvent);
  };
  
  class HighlightBorderEvent : public Event
  {
  public:
    typedef HighlightBorderEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[32];
    
  protected:
    HighlightBorderEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(HighlightBorderEvent);
  };
  
  class TabModifiedEvent : public Event
  {
  public:
    typedef TabModifiedEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    TabModifiedEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(TabModifiedEvent);
  };
  
  class TabRenamedEvent : public Event
  {
  public:
    typedef TabRenamedEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    TabRenamedEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(TabRenamedEvent);
  };
  
  class QueryModifiedSaveEvent : public Event
  {
  public:
    typedef QueryModifiedSaveEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[24];
    
  protected:
    QueryModifiedSaveEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(QueryModifiedSaveEvent);
  };
  
  // Basic event that can be "handled" to override default engine behavior.
  class HandleableEvent : public Event
  {
  public:
    typedef HandleableEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetHandled();
    
    void SetHandled(bool value);
    
    unsigned char mValue[8];
    
  protected:
    HandleableEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(HandleableEvent);
  };
  
  class WindowTabEvent : public HandleableEvent
  {
  public:
    typedef WindowTabEvent ZilchSelf;
    typedef HandleableEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[96];
    
  protected:
    WindowTabEvent(Zilch::NoType none) : HandleableEvent(none) {}
    ZilchNoCopy(WindowTabEvent);
  };
  
  class MainWindowTransformEvent : public Event
  {
  public:
    typedef MainWindowTransformEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<OsWindow> GetTargetWindow();
    
    Zilch::Real2 GetOldScreenPosition();
    
    Zilch::Real2 GetNewScreenPosition();
    
    Zilch::Real2 GetOldScreenSize();
    
    Zilch::Real2 GetNewScreenSize();
    
    unsigned char mValue[40];
    
  protected:
    MainWindowTransformEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(MainWindowTransformEvent);
  };
  
  class MouseDragEvent : public MouseEvent
  {
  public:
    typedef MouseDragEvent ZilchSelf;
    typedef MouseEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    MouseDragEvent(Zilch::NoType none) : MouseEvent(none) {}
    ZilchNoCopy(MouseDragEvent);
  };
  
  class ModalConfirmEvent : public Event
  {
  public:
    typedef ModalConfirmEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[24];
    
  protected:
    ModalConfirmEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ModalConfirmEvent);
  };
  
  class ModalButtonEvent : public Event
  {
  public:
    typedef ModalButtonEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[24];
    
  protected:
    ModalButtonEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ModalButtonEvent);
  };
  
  class SearchViewEvent : public Event
  {
  public:
    typedef SearchViewEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    SearchViewEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(SearchViewEvent);
  };
  
  class AlternateSearchCompletedEvent : public Event
  {
  public:
    typedef AlternateSearchCompletedEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    AlternateSearchCompletedEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(AlternateSearchCompletedEvent);
  };
  
  class TagEvent : public Event
  {
  public:
    typedef TagEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    TagEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(TagEvent);
  };
  
  class ContextMenuEvent : public Event
  {
  public:
    typedef ContextMenuEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[64];
    
  protected:
    ContextMenuEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ContextMenuEvent);
  };
  
  class LayoutArea : public Zilch::ValueType
  {
  public:
    typedef LayoutArea ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[28];
    LayoutArea();
  };
  
  class Layout : public Zilch::ReferenceType
  {
  public:
    typedef Layout ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real2 Measure(Composite* p0, const LayoutArea& p1);
    
    Zilch::Real2 DoLayout(Composite* p0, const LayoutArea& p1);
    
    Thickness GetPadding();
    
    void SetPadding(const Thickness& value);
    
    unsigned char mValue[32];
    
  protected:
    Layout(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Layout);
  };
  
  class FillLayout : public Layout
  {
  public:
    typedef FillLayout ZilchSelf;
    typedef Layout ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    FillLayout(Zilch::NoType none) : Layout(none) {}
    ZilchNoCopy(FillLayout);
  };
  
  class StackLayout : public Layout
  {
  public:
    typedef StackLayout ZilchSelf;
    typedef Layout ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    StackLayout(Zilch::NoType none) : Layout(none) {}
    ZilchNoCopy(StackLayout);
  };
  
  class EdgeDockLayout : public Layout
  {
  public:
    typedef EdgeDockLayout ZilchSelf;
    typedef Layout ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    EdgeDockLayout(Zilch::NoType none) : Layout(none) {}
    ZilchNoCopy(EdgeDockLayout);
  };
  
  class DockLayout : public Layout
  {
  public:
    typedef DockLayout ZilchSelf;
    typedef Layout ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    DockLayout(Zilch::NoType none) : Layout(none) {}
    ZilchNoCopy(DockLayout);
  };
  
  class RatioLayout : public Layout
  {
  public:
    typedef RatioLayout ZilchSelf;
    typedef Layout ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    RatioLayout(Zilch::NoType none) : Layout(none) {}
    ZilchNoCopy(RatioLayout);
  };
  
  class GridLayout : public Layout
  {
  public:
    typedef GridLayout ZilchSelf;
    typedef Layout ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[48];
    
  protected:
    GridLayout(Zilch::NoType none) : Layout(none) {}
    ZilchNoCopy(GridLayout);
  };
  
  class SizePolicies : public Zilch::ValueType
  {
  public:
    typedef SizePolicies ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    SizePolicies();
  };
  
  class Widget : public EventObject
  {
  public:
    typedef Widget ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[248];
    
  protected:
    Widget(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(Widget);
  };
  
  class Composite : public Widget
  {
  public:
    typedef Composite ZilchSelf;
    typedef Widget ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    Composite(Zilch::NoType none) : Widget(none) {}
    ZilchNoCopy(Composite);
  };
  
  class MultiDock : public Composite
  {
  public:
    typedef MultiDock ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[328];
    
  protected:
    MultiDock(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(MultiDock);
  };
  
  class RootWidget : public Composite
  {
  public:
    typedef RootWidget ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<OsWindow> GetOsWindow();
    
    unsigned char mValue[384];
    
  protected:
    RootWidget(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(RootWidget);
  };
  
  class MainWindow : public RootWidget
  {
  public:
    typedef MainWindow ZilchSelf;
    typedef RootWidget ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[136];
    
  protected:
    MainWindow(Zilch::NoType none) : RootWidget(none) {}
    ZilchNoCopy(MainWindow);
  };
  
  class MouseManipulation : public Widget
  {
  public:
    typedef MouseManipulation ZilchSelf;
    typedef Widget ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[80];
    
  protected:
    MouseManipulation(Zilch::NoType none) : Widget(none) {}
    ZilchNoCopy(MouseManipulation);
  };
  
  class BaseScrollArea : public Composite
  {
  public:
    typedef BaseScrollArea ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[80];
    
  protected:
    BaseScrollArea(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(BaseScrollArea);
  };
  
  class ScrollArea : public BaseScrollArea
  {
  public:
    typedef ScrollArea ZilchSelf;
    typedef BaseScrollArea ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[24];
    
  protected:
    ScrollArea(Zilch::NoType none) : BaseScrollArea(none) {}
    ZilchNoCopy(ScrollArea);
  };
  
  class ButtonBase : public Composite
  {
  public:
    typedef ButtonBase ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[160];
    
  protected:
    ButtonBase(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(ButtonBase);
  };
  
  class TextButton : public ButtonBase
  {
  public:
    typedef TextButton ZilchSelf;
    typedef ButtonBase ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[64];
    
  protected:
    TextButton(Zilch::NoType none) : ButtonBase(none) {}
    ZilchNoCopy(TextButton);
  };
  
  class IconButton : public ButtonBase
  {
  public:
    typedef IconButton ZilchSelf;
    typedef ButtonBase ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    IconButton(Zilch::NoType none) : ButtonBase(none) {}
    ZilchNoCopy(IconButton);
  };
  
  class ToggleIconButton : public IconButton
  {
  public:
    typedef ToggleIconButton ZilchSelf;
    typedef IconButton ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[32];
    
  protected:
    ToggleIconButton(Zilch::NoType none) : IconButton(none) {}
    ZilchNoCopy(ToggleIconButton);
  };
  
  class ListBox : public Composite
  {
  public:
    typedef ListBox ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[216];
    
  protected:
    ListBox(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(ListBox);
  };
  
  class ComboBox : public Composite
  {
  public:
    typedef ComboBox ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[112];
    
  protected:
    ComboBox(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(ComboBox);
  };
  
  class StringComboBox : public ComboBox
  {
  public:
    typedef StringComboBox ZilchSelf;
    typedef ComboBox ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    StringComboBox(Zilch::NoType none) : ComboBox(none) {}
    ZilchNoCopy(StringComboBox);
  };
  
  class ToolTip : public Composite
  {
  public:
    typedef ToolTip ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[184];
    
  protected:
    ToolTip(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(ToolTip);
  };
  
  class TextureView : public Widget
  {
  public:
    typedef TextureView ZilchSelf;
    typedef Widget ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[96];
    
  protected:
    TextureView(Zilch::NoType none) : Widget(none) {}
    ZilchNoCopy(TextureView);
  };
  
  class EditText : public Widget
  {
  public:
    typedef EditText ZilchSelf;
    typedef Widget ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[64];
    
  protected:
    EditText(Zilch::NoType none) : Widget(none) {}
    ZilchNoCopy(EditText);
  };
  
  class TextBox : public Composite
  {
  public:
    typedef TextBox ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[56];
    
  protected:
    TextBox(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(TextBox);
  };
  
  class SearchView : public Composite
  {
  public:
    typedef SearchView ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[192];
    
  protected:
    SearchView(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(SearchView);
  };
  
  class SearchViewElement : public Composite
  {
  public:
    typedef SearchViewElement ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    SearchViewElement(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(SearchViewElement);
  };
  
  class Label : public Composite
  {
  public:
    typedef Label ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[24];
    
  protected:
    Label(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(Label);
  };
  
  class ProgressBar : public Composite
  {
  public:
    typedef ProgressBar ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[48];
    
  protected:
    ProgressBar(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(ProgressBar);
  };
  
  class Slider : public Composite
  {
  public:
    typedef Slider ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[72];
    
  protected:
    Slider(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(Slider);
  };
  
  class SelectorButton : public Composite
  {
  public:
    typedef SelectorButton ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[112];
    
  protected:
    SelectorButton(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(SelectorButton);
  };
  
  class ImageWidget : public Widget
  {
  public:
    typedef ImageWidget ZilchSelf;
    typedef Widget ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    ImageWidget(Zilch::NoType none) : Widget(none) {}
    ZilchNoCopy(ImageWidget);
  };
  
  class CheckBox : public Composite
  {
  public:
    typedef CheckBox ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    CheckBox(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(CheckBox);
  };
  
  class TextCheckBox : public Composite
  {
  public:
    typedef TextCheckBox ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    TextCheckBox(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(TextCheckBox);
  };
  
  class WidgetManager : public EventObject
  {
  public:
    typedef WidgetManager ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[104];
    
  protected:
    WidgetManager(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(WidgetManager);
  };
  
  class CommandExecuter : public Object
  {
  public:
    typedef CommandExecuter ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    CommandExecuter(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(CommandExecuter);
  };
  
  class CommandManager : public EventObject
  {
  public:
    typedef CommandManager ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[192];
    
  protected:
    CommandManager(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(CommandManager);
  };
  
  class MetaScriptTagAttribute : public MetaAttribute
  {
  public:
    typedef MetaScriptTagAttribute ZilchSelf;
    typedef MetaAttribute ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetTags();
    
    void SetTags(const Zilch::String& value);
    
    unsigned char mValue[64];
    
  protected:
    MetaScriptTagAttribute(Zilch::NoType none) : MetaAttribute(none) {}
    ZilchNoCopy(MetaScriptTagAttribute);
  };
  
  class MetaScriptShortcutAttribute : public MetaAttribute
  {
  public:
    typedef MetaScriptShortcutAttribute ZilchSelf;
    typedef MetaAttribute ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetKey();
    
    void SetKey(const Zilch::String& value);
    
    bool GetCtrl();
    
    void SetCtrl(bool value);
    
    bool GetAlt();
    
    void SetAlt(bool value);
    
    bool GetShift();
    
    void SetShift(bool value);
    
    unsigned char mValue[16];
    
  protected:
    MetaScriptShortcutAttribute(Zilch::NoType none) : MetaAttribute(none) {}
    ZilchNoCopy(MetaScriptShortcutAttribute);
  };
  
  class Spacer : public Widget
  {
  public:
    typedef Spacer ZilchSelf;
    typedef Widget ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    Spacer(Zilch::NoType none) : Widget(none) {}
    ZilchNoCopy(Spacer);
  };
  
  class Splitter : public Composite
  {
  public:
    typedef Splitter ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[56];
    
  protected:
    Splitter(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(Splitter);
  };
  
  class TabArea : public Composite
  {
  public:
    typedef TabArea ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[72];
    
  protected:
    TabArea(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(TabArea);
  };
  
  class Window : public Composite
  {
  public:
    typedef Window ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[152];
    
  protected:
    Window(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(Window);
  };
  
  class Viewport : public Composite
  {
  public:
    typedef Viewport ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[112];
    
  protected:
    Viewport(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(Viewport);
  };
  
  class ContextMenuEntry : public SafeId32EventObject
  {
  public:
    typedef ContextMenuEntry ZilchSelf;
    typedef SafeId32EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<ContextMenuEntry> AddEntry(const Zilch::String& __0, bool __1);
    
    Zilch::HandleOf<ContextMenuEntry> AddDivider();
    
    Zilch::HandleOf<ContextMenuEntry> AddCommandByName(const Zilch::String& commandName);
    
    // Remove the entry with the provided name from this menu entries children.
    void RemoveEntry(const Zilch::String& name);
    
    // Returns the children entry with the provided name if it exists and null otherwise.
    Zilch::HandleOf<ContextMenuEntry> GetEntry(const Zilch::String& name);
    
    Zilch::HandleOf<ContextMenuEntryChildrenRange> Entries();
    
    Zilch::String GetName();
    
    void SetName(const Zilch::String& value);
    
    Zilch::String GetIcon();
    
    void SetIcon(const Zilch::String& value);
    
    unsigned char mValue[120];
    
  protected:
    ContextMenuEntry(Zilch::NoType none) : SafeId32EventObject(none) {}
    ZilchNoCopy(ContextMenuEntry);
  };
  
  class ContextMenuEntryDivider : public ContextMenuEntry
  {
  public:
    typedef ContextMenuEntryDivider ZilchSelf;
    typedef ContextMenuEntry ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ContextMenuEntryDivider(Zilch::NoType none) : ContextMenuEntry(none) {}
    ZilchNoCopy(ContextMenuEntryDivider);
  };
  
  class ContextMenuEntryCommand : public ContextMenuEntry
  {
  public:
    typedef ContextMenuEntryCommand ZilchSelf;
    typedef ContextMenuEntry ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetCommandName();
    
    void SetCommandName(const Zilch::String& value);
    
    unsigned char mValue[16];
    
  protected:
    ContextMenuEntryCommand(Zilch::NoType none) : ContextMenuEntry(none) {}
    ZilchNoCopy(ContextMenuEntryCommand);
  };
  
  class ContextMenuEntryMenu : public ContextMenuEntry
  {
  public:
    typedef ContextMenuEntryMenu ZilchSelf;
    typedef ContextMenuEntry ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetMenuName();
    
    void SetMenuName(const Zilch::String& value);
    
    unsigned char mValue[8];
    
  protected:
    ContextMenuEntryMenu(Zilch::NoType none) : ContextMenuEntry(none) {}
    ZilchNoCopy(ContextMenuEntryMenu);
  };
  
  class MenuBarItem : public Composite
  {
  public:
    typedef MenuBarItem ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[88];
    
  protected:
    MenuBarItem(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(MenuBarItem);
  };
  
  class MenuBar : public Composite
  {
  public:
    typedef MenuBar ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[96];
    
  protected:
    MenuBar(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(MenuBar);
  };
  
  class MultiManager : public EventObject
  {
  public:
    typedef MultiManager ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[136];
    
  protected:
    MultiManager(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(MultiManager);
  };
  
  class Modal : public Composite
  {
  public:
    typedef Modal ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[32];
    
  protected:
    Modal(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(Modal);
  };
  
  class Text : public Widget
  {
  public:
    typedef Text ZilchSelf;
    typedef Widget ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[48];
    
  protected:
    Text(Zilch::NoType none) : Widget(none) {}
    ZilchNoCopy(Text);
  };
  
  class MultiLineText : public Composite
  {
  public:
    typedef MultiLineText ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[56];
    
  protected:
    MultiLineText(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(MultiLineText);
  };
  
  class OrientationBases : public Zilch::Enum
  {
  public:
    typedef OrientationBases ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static OrientationBases GetForwardZUpY();
    
    static OrientationBases GetForwardNegativeZUpY();
    
    static OrientationBases GetForwardXUpY();
    
    static OrientationBases GetForwardXUpZ();
    
    static OrientationBases GetForwardYUpZ();
    
    static OrientationBases GetCustom();
    
    OrientationBases();
  };
  
  class SplineAnimatorMode : public Zilch::Enum
  {
  public:
    typedef SplineAnimatorMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static SplineAnimatorMode GetExact();
    
    static SplineAnimatorMode GetSpring();
    
    SplineAnimatorMode();
  };
  
  class PathFinderStatus : public Zilch::Enum
  {
  public:
    typedef PathFinderStatus ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static PathFinderStatus GetPending();
    
    static PathFinderStatus GetSucceeded();
    
    static PathFinderStatus GetFailed();
    
    static PathFinderStatus GetCancelled();
    
    PathFinderStatus();
  };
  
  class IndexedHalfEdgeMeshVertexArrayRange : public Zilch::ReferenceType
  {
  public:
    typedef IndexedHalfEdgeMeshVertexArrayRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<IndexedHalfEdgeMeshVertexArrayRange> GetAll();
    
    Zilch::Real3 GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[64];
    
  protected:
    IndexedHalfEdgeMeshVertexArrayRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(IndexedHalfEdgeMeshVertexArrayRange);
  };
  
  class IndexedHalfEdgeMeshEdgeArrayRange : public Zilch::ReferenceType
  {
  public:
    typedef IndexedHalfEdgeMeshEdgeArrayRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<IndexedHalfEdgeMeshEdgeArrayRange> GetAll();
    
    Zilch::HandleOf<IndexedHalfEdge> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[64];
    
  protected:
    IndexedHalfEdgeMeshEdgeArrayRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(IndexedHalfEdgeMeshEdgeArrayRange);
  };
  
  class IndexedHalfEdgeFaceEdgeIndexArrayRange : public Zilch::ReferenceType
  {
  public:
    typedef IndexedHalfEdgeFaceEdgeIndexArrayRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<IndexedHalfEdgeFaceEdgeIndexArrayRange> GetAll();
    
    int GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[64];
    
  protected:
    IndexedHalfEdgeFaceEdgeIndexArrayRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(IndexedHalfEdgeFaceEdgeIndexArrayRange);
  };
  
  class IndexedHalfEdgeMeshFaceArrayRange : public Zilch::ReferenceType
  {
  public:
    typedef IndexedHalfEdgeMeshFaceArrayRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<IndexedHalfEdgeMeshFaceArrayRange> GetAll();
    
    Zilch::HandleOf<IndexedHalfEdgeFace> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[64];
    
  protected:
    IndexedHalfEdgeMeshFaceArrayRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(IndexedHalfEdgeMeshFaceArrayRange);
  };
  
  class MouseFileDropEvent : public MouseEvent
  {
  public:
    typedef MouseFileDropEvent ZilchSelf;
    typedef MouseEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Zilch::ArrayString> GetFiles();
    
    void SetFiles(Zilch::ArrayString* value);
    
    unsigned char mValue[56];
    
  protected:
    MouseFileDropEvent(Zilch::NoType none) : MouseEvent(none) {}
    ZilchNoCopy(MouseFileDropEvent);
  };
  
  // All mouse events that are forwarded to reactive components or the space use this event to add extra data.
  class ViewportMouseEvent : public MouseEvent
  {
  public:
    typedef ViewportMouseEvent ZilchSelf;
    typedef MouseEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Ray GetWorldRay();
    
    void SetWorldRay(const Ray& value);
    
    Zilch::Real3 GetRayStart();
    
    void SetRayStart(const Zilch::Real3& value);
    
    Zilch::Real3 GetRayDirection();
    
    void SetRayDirection(const Zilch::Real3& value);
    
    Zilch::Real3 GetHitPosition();
    
    void SetHitPosition(const Zilch::Real3& value);
    
    Zilch::Real3 GetHitNormal();
    
    void SetHitNormal(const Zilch::Real3& value);
    
    Zilch::Real2 GetHitUv();
    
    void SetHitUv(const Zilch::Real2& value);
    
    float GetHitDistance();
    
    void SetHitDistance(float value);
    
    Zilch::HandleOf<Cog> GetHitObject();
    
    Zilch::HandleOf<CameraViewport> GetCameraViewport();
    
    // The world mouse position on the z plane at depth.
    Zilch::Real3 ToWorldZPlane(float worldDepth);
    
    // The world mouse position on the view plane at view depth.
    Zilch::Real3 ToWorldViewPlane(float viewDepth);
    
    // The world mouse position on any arbitrary plane.
    Zilch::Real3 ToWorldPlane(const Zilch::Real3& worldPlaneNormal, const Zilch::Real3& worldPlanePosition);
    
    unsigned char mValue[160];
    
  protected:
    ViewportMouseEvent(Zilch::NoType none) : MouseEvent(none) {}
    ZilchNoCopy(ViewportMouseEvent);
  };
  
  class ReactiveViewport : public Viewport
  {
  public:
    typedef ReactiveViewport ZilchSelf;
    typedef Viewport ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[152];
    
  protected:
    ReactiveViewport(Zilch::NoType none) : Viewport(none) {}
    ZilchNoCopy(ReactiveViewport);
  };
  
  class GameWidget : public Composite
  {
  public:
    typedef GameWidget ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[64];
    
  protected:
    GameWidget(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(GameWidget);
  };
  
  class TileMapSource : public Resource
  {
  public:
    typedef TileMapSource ZilchSelf;
    typedef Resource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[48];
    
  protected:
    TileMapSource(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(TileMapSource);
  };
  
  // Reactive component allows the object to react to mouse events. Uses the collision volume of the collider on this composition for picking.
  class Reactive : public Component
  {
  public:
    typedef Reactive ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetActive();
    
    void SetActive(bool value);
    
    unsigned char mValue[8];
    
  protected:
    Reactive(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Reactive);
  };
  
  class ReactiveSpace : public Component
  {
  public:
    typedef ReactiveSpace ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Cog> GetOver();
    
    Zilch::HandleOf<Raycaster> GetRaycaster();
    
    void SetRaycaster(Raycaster* value);
    
    unsigned char mValue[56];
    
  protected:
    ReactiveSpace(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ReactiveSpace);
  };
  
  class MouseCapture : public Component
  {
  public:
    typedef MouseCapture ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Starts the mouse manipulation. All mouse events will now only go to the owner of this Component. Returns whether or not the manipulation can be started.
    bool Capture(ViewportMouseEvent* e);
    
    // Releases the mouse manipulation.
    void ReleaseCapture();
    
    // Releases the mouse manipulation.
    void ReleaseCapture(ViewportMouseEvent* e);
    
    bool GetIsCaptured();
    
    unsigned char mValue[328];
    
  protected:
    MouseCapture(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(MouseCapture);
  };
  
  // Defines a new basis for a desired right, up, and forward vector. Provides a bunch of helper functions to change between these spaces and to perform simple look-at behavior.
  class Orientation : public Component
  {
  public:
    typedef Orientation ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Debug draws the current orientation bases in world space.
    void DebugDrawBases();
    
    OrientationBases GetDefaultOrientationBases();
    
    void SetDefaultOrientationBases(const OrientationBases& value);
    
    Zilch::Quaternion GetLocalOrientationBasis();
    
    void SetLocalOrientationBasis(const Zilch::Quaternion& value);
    
    Zilch::Real3 GetOrientationRight();
    
    Zilch::Real3 GetOrientationUp();
    
    Zilch::Real3 GetOrientationForward();
    
    Zilch::Real3 GetLocalRight();
    
    Zilch::Real3 GetLocalUp();
    
    Zilch::Real3 GetLocalForward();
    
    Zilch::Real3 GetWorldRight();
    
    Zilch::Real3 GetWorldUp();
    
    Zilch::Real3 GetWorldForward();
    
    Zilch::Quaternion GetLocalToWorldRotation();
    
    Zilch::Quaternion GetLocalToOrientationRotation();
    
    Zilch::Quaternion GetOrientationToLocalRotation();
    
    Zilch::Quaternion GetOrientationToWorldRotation();
    
    Zilch::Quaternion GetWorldToLocalRotation();
    
    Zilch::Quaternion GetWorldToOrientationRotation();
    
    // Set the transform's local rotation such that the orientation's basis vectors will be aligned with the given rotation (assumed to be a look-at rotation constructed from a right, up, and forward)
    void SetLocalLookAtRotation(const Zilch::Quaternion& localLookAtRotation);
    
    // Set the transform's world rotation such that the orientation's basis vectors will be aligned with the given rotation (assumed to be a look-at rotation constructed from a right, up, and forward)
    void SetWorldLookAtRotation(const Zilch::Quaternion& worldLookAtRotation);
    
    Zilch::Real3 GetGlobalUp();
    
    void SetGlobalUp(const Zilch::Real3& value);
    
    // Sets the forward to look at the given point. Keeps the current world up.
    void LookAtPoint(const Zilch::Real3& lookPoint);
    
    // Sets the forward to look in the given direction. Keeps the current world up.
    void LookAtDirection(const Zilch::Real3& lookDir);
    
    // Get the rotation so that the forward will look at the given point. Keeps the current world up.
    Zilch::Quaternion GetLookAtPointRotation(const Zilch::Real3& lookPoint);
    
    // Gets the forward to look in the given direction. Keeps the current world up.
    Zilch::Quaternion GetLookAtDirectionRotation(const Zilch::Real3& lookDir);
    
    // Same as LookAtPoint but allows the user to specify the up vector.
    void LookAtPointWithUp(const Zilch::Real3& lookPoint, const Zilch::Real3& up);
    
    // Same as LookAtDirection but allows the user to specify the up vector.
    void LookAtDirectionWithUp(const Zilch::Real3& lookDir, const Zilch::Real3& up);
    
    // Same as GetLookAtPointRotation but allows the user to specify the up vector.
    Zilch::Quaternion GetLookAtPointWithUpRotation(const Zilch::Real3& lookPoint, const Zilch::Real3& up);
    
    // Same as GetLookAtDirectionRotation but allows the user to specify the up vector.
    Zilch::Quaternion GetLookAtDirectionWithUpRotation(const Zilch::Real3& lookDir, const Zilch::Real3& up);
    
    float GetAbsoluteAngle();
    
    // Compute the rotation angle between two vectors (in radians)
    float ComputeSignedAngle(const Zilch::Real3& up, const Zilch::Real3& forward, const Zilch::Real3& newVector);
    
    unsigned char mValue[40];
    
  protected:
    Orientation(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Orientation);
  };
  
  class TileMap : public Component
  {
  public:
    typedef TileMap ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<TileMapSource> GetSource();
    
    float GetMeshThickness();
    
    void SetMeshThickness(float value);
    
    unsigned char mValue[320];
    
  protected:
    TileMap(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(TileMap);
  };
  
  // A random object that contains its own unique random state apart from all other instances of this class.
  class RandomContext : public Component
  {
  public:
    typedef RandomContext ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetSeed();
    
    void SetSeed(int value);
    
    bool GetRandomSeed();
    
    void SetRandomSeed(bool value);
    
    int GetMaxInt();
    
    // Returns a random bool value.
    bool Bool();
    
    // Returns a random int in the range of [0, MaxInt].
    int Int();
    
    // Returns a random float in the range [0,1].
    float Float();
    
    // Returns a random real in the range [0,1].
    float Real();
    
    // Returns a random double real in the range [0,1].
    double DoubleReal();
    
    // Generates a unit length Vec2.
    Zilch::Real2 UnitVector2();
    
    // Generates a unit length Real2.
    Zilch::Real2 UnitReal2();
    
    // Randomly generates a Vec2 with its length between min and max.
    Zilch::Real2 Vector2(float minLength, float maxLength);
    
    // Randomly generates a Real2 with its length between min and max.
    Zilch::Real2 Real2(float minLength, float maxLength);
    
    // Generates a unit length Vec3.
    Zilch::Real3 UnitVector3();
    
    // Generates a unit length Real3.
    Zilch::Real3 UnitReal3();
    
    // Randomly generates a Vec3 with its length between min and max.
    Zilch::Real3 Vector3(float minLength, float maxLength);
    
    // Randomly generates a Real3 with its length between min and max.
    Zilch::Real3 Real3(float minLength, float maxLength);
    
    // Random unit length quaternion. This is also a unit quaternion.
    Zilch::Quaternion Quaternion();
    
    // Int in the range [min, max].
    int RangeInclusiveMax(int min, int max);
    
    // Int in the range [min, max)
    int RangeExclusiveMax(int min, int max);
    
    // Int in the range [base - variance, base + variance].
    int IntVariance(int base, int variance);
    
    // A random float in the range [min,max].
    float Range(float min, float max);
    
    double DoubleRange(double __0, double __1);
    
    // Returns a float in the range [base - variance, base + variance].
    float FloatVariance(float base, float variance);
    
    // Returns a real in the range [base - variance, base + variance].
    float RealVariance(float base, float variance);
    
    double DoubleRealVariance(double __0, double __1);
    
    // Randomly rolls a number in the range [1, sides].
    int DieRoll(int sides);
    
    // Takes a given probability that we get a true value.
    bool Probability(float probOfTrue);
    
    // Returns true if the coin flips heads.
    bool CoinFlip();
    
    // Random rotation quaternion. This is the same as calling Quaternion()
    Zilch::Quaternion Rotation();
    
    // Samples a bell curve with standard normal distribution in the range [0,1] This is equivalent to a Gaussian distribution with standard deviation of 1.
    float BellCurve();
    
    // Samples a bell curve with in the range [center - range, center + range] This uses a standard deviation of 1.
    float BellCurveRange(float center, float range);
    
    // Samples a bell curve in the range [center - range, center + range] with the given standard deviation. Around 68% will lie within the 1st standard deviation.
    float BellCurveDistribution(float center, float range, float standardDeviation);
    
    unsigned char mValue[8];
    
  protected:
    RandomContext(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(RandomContext);
  };
  
  // Manages all setup between Camera, Renderer, and viewport UI that is required to define how anything is to be rendered.
  class CameraViewport : public ViewportInterface
  {
  public:
    typedef CameraViewport ZilchSelf;
    typedef ViewportInterface ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetRenderInEditor();
    
    void SetRenderInEditor(bool value);
    
    bool GetRenderInGame();
    
    void SetRenderInGame(bool value);
    
    int GetRenderOrder();
    
    void SetRenderOrder(int value);
    
    Zilch::HandleOf<CogPath> GetCameraPath();
    
    void SetCameraPath(CogPath* value);
    
    Zilch::HandleOf<CogPath> GetRendererPath();
    
    void SetRendererPath(CogPath* value);
    
    Zilch::Integer2 GetResolutionOrAspect();
    
    void SetResolutionOrAspect(const Zilch::Integer2& value);
    
    bool GetRenderToViewport();
    
    void SetRenderToViewport(bool value);
    
    bool GetForwardViewportEvents();
    
    void SetForwardViewportEvents(bool value);
    
    ViewportScaling GetViewportScaling();
    
    void SetViewportScaling(const ViewportScaling& value);
    
    Zilch::Real4 GetMarginColor();
    
    void SetMarginColor(const Zilch::Real4& value);
    
    Zilch::Real2 GetNormalizedSize();
    
    void SetNormalizedSize(const Zilch::Real2& value);
    
    Zilch::Real2 GetNormalizedOffset();
    
    void SetNormalizedOffset(const Zilch::Real2& value);
    
    // Returns whether or not it succeeded in taking focus. Will always fail if RenderToViewport is false.
    bool ViewportTakeFocus();
    
    bool GetViewportHasFocus();
    
    Zilch::Real4x4 GetWorldToView();
    
    Zilch::Real4x4 GetViewToPerspective();
    
    Zilch::Real4x4 GetWorldToPerspective();
    
    Zilch::HandleOf<Texture> GetFinalTexture();
    
    Ray GetMouseWorldRay();
    
    // Convert a screen point to a ray.
    Ray ScreenToWorldRay(const Zilch::Real2& screenPoint);
    
    // Convert the screen point to a position on the z plane at a given depth.
    Zilch::Real3 ScreenToWorldZPlane(const Zilch::Real2& screenPoint, float worldDepth);
    
    // Convert the screen point to a position on the view plane at a given depth.
    Zilch::Real3 ScreenToWorldViewPlane(const Zilch::Real2& screenPoint, float viewDepth);
    
    // Convert the screen point to a position on a given plane.
    Zilch::Real3 ScreenToWorldPlane(const Zilch::Real2& screenPoint, const Zilch::Real3& worldPlaneNormal, const Zilch::Real3& worldPlanePosition);
    
    // Convert a world point to a screen point.
    Zilch::Real2 WorldToScreen(const Zilch::Real3& worldPoint);
    
    // Convert a screen point to a point relative to the viewport.
    Zilch::Real2 ScreenToViewport(const Zilch::Real2& screenPoint);
    
    // Convert a viewport point to a screen point.
    Zilch::Real2 ViewportToScreen(const Zilch::Real2& viewportPoint);
    
    // Size of the screen at a Depth.
    Zilch::Real2 ViewPlaneSize(float viewDepth);
    
    Zilch::Real2 GetViewportResolution();
    
    Zilch::Real2 GetViewportResolutionWithMargin();
    
    Zilch::Real2 GetViewportOffset();
    
    Zilch::Real2 GetViewportOffsetWithMargin();
    
    Zilch::HandleOf<Camera> GetCamera();
    
    Frustum GetFrustum();
    
    unsigned char mValue[376];
    
  protected:
    CameraViewport(Zilch::NoType none) : ViewportInterface(none) {}
    ZilchNoCopy(CameraViewport);
  };
  
  // Create the starting space and load the starting level into that space.
  class DefaultGameSetup : public Component
  {
  public:
    typedef DefaultGameSetup ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Archetype> GetStartingSpace();
    
    void SetStartingSpace(Archetype* value);
    
    Zilch::HandleOf<Level> GetStartingLevel();
    
    void SetStartingLevel(Level* value);
    
    bool GetLoadEditingLevel();
    
    void SetLoadEditingLevel(bool value);
    
    unsigned char mValue[120];
    
  protected:
    DefaultGameSetup(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(DefaultGameSetup);
  };
  
  class PathFinderBaseEvent : public Event
  {
  public:
    typedef PathFinderBaseEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<PathFinderRequest> GetRequest();
    
    float GetDuration();
    
    unsigned char mValue[64];
    
  protected:
    PathFinderBaseEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(PathFinderBaseEvent);
  };
  
  class PathFinderEvent : public PathFinderBaseEvent
  {
  public:
    typedef PathFinderEvent ZilchSelf;
    typedef PathFinderBaseEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetStart();
    
    Zilch::Real3 GetGoal();
    
    Zilch::HandleOf<Zilch::ArrayReal3> GetPath();
    
    unsigned char mValue[56];
    
  protected:
    PathFinderEvent(Zilch::NoType none) : PathFinderBaseEvent(none) {}
    ZilchNoCopy(PathFinderEvent);
  };
  
  class PathFinderGridEvent : public PathFinderBaseEvent
  {
  public:
    typedef PathFinderGridEvent ZilchSelf;
    typedef PathFinderBaseEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Integer3 GetStart();
    
    Zilch::Integer3 GetGoal();
    
    Zilch::HandleOf<Zilch::ArrayInteger3> GetPath();
    
    unsigned char mValue[56];
    
  protected:
    PathFinderGridEvent(Zilch::NoType none) : PathFinderBaseEvent(none) {}
    ZilchNoCopy(PathFinderGridEvent);
  };
  
  class PathFinder : public Component
  {
  public:
    typedef PathFinder ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Zilch::ArrayReal3> FindPath(const Zilch::Real3& __0, const Zilch::Real3& __1);
    
    Zilch::HandleOf<PathFinderRequest> FindPathThreaded(const Zilch::Real3& __0, const Zilch::Real3& __1);
    
    int GetMaxIterations();
    
    void SetMaxIterations(int value);
    
    unsigned char mValue[8];
    
  protected:
    PathFinder(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(PathFinder);
  };
  
  class PathFinderRequest : public ReferenceCountedThreadSafeId32EventObject
  {
  public:
    typedef PathFinderRequest ZilchSelf;
    typedef ReferenceCountedThreadSafeId32EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    void Cancel();
    
    Zilch::HandleOf<PathFinder> GetPathFinderComponent();
    
    PathFinderStatus GetStatus();
    
    unsigned char mValue[120];
    
  protected:
    PathFinderRequest(Zilch::NoType none) : ReferenceCountedThreadSafeId32EventObject(none) {}
    ZilchNoCopy(PathFinderRequest);
  };
  
  class PathFinderGrid : public PathFinder
  {
  public:
    typedef PathFinderGrid ZilchSelf;
    typedef PathFinder ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Zilch::ArrayInteger3> FindPath(const Zilch::Integer3& __0, const Zilch::Integer3& __1);
    
    Zilch::HandleOf<Zilch::ArrayReal3> FindPath(const Zilch::Real3& __0, const Zilch::Real3& __1);
    
    Zilch::HandleOf<PathFinderRequest> FindPathThreaded(const Zilch::Integer3& __0, const Zilch::Integer3& __1);
    
    Zilch::HandleOf<PathFinderRequest> FindPathThreaded(const Zilch::Real3& __0, const Zilch::Real3& __1);
    
    void SetCollision(const Zilch::Integer3& __0, bool __1);
    
    bool GetCollision(const Zilch::Integer3& __0);
    
    void SetCost(const Zilch::Integer3& __0, float __1);
    
    float GetCost(const Zilch::Integer3& __0);
    
    void Clear();
    
    bool GetDiagonalMovement();
    
    void SetDiagonalMovement(bool value);
    
    Zilch::Real3 GetCellSize();
    
    void SetCellSize(const Zilch::Real3& value);
    
    Zilch::Integer3 WorldPositionToCellIndex(const Zilch::Real3& __0);
    
    Zilch::Integer3 LocalPositionToCellIndex(const Zilch::Real3& __0);
    
    Zilch::Real3 CellIndexToWorldPosition(const Zilch::Integer3& __0);
    
    Zilch::Real3 CellIndexToLocalPosition(const Zilch::Integer3& __0);
    
    unsigned char mValue[32];
    
  protected:
    PathFinderGrid(Zilch::NoType none) : PathFinder(none) {}
    ZilchNoCopy(PathFinderGrid);
  };
  
  class PathFinderMesh : public PathFinder
  {
  public:
    typedef PathFinderMesh ZilchSelf;
    typedef PathFinder ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    void SetMesh(Mesh* __0);
    
    void SetMesh(Mesh* __0, float __1);
    
    int AddVertex(const Zilch::Real3& __0);
    
    int AddPolygon(int __0, int __1, int __2);
    
    int AddPolygon(int __0, int __1, int __2, int __3);
    
    void SetPolygonCost(int __0, float __1);
    
    void SetPolygonClientData(int __0, Cog* __1);
    
    void SetEdgeCost(int __0, float __1);
    
    void SetEdgeClientData(int __0, Cog* __1);
    
    void Clear();
    
    int WorldPositionToPolygon(const Zilch::Real3& __0);
    
    int LocalPositionToPolygon(const Zilch::Real3& __0);
    
    unsigned char mValue[16];
    
  protected:
    PathFinderMesh(Zilch::NoType none) : PathFinder(none) {}
    ZilchNoCopy(PathFinderMesh);
  };
  
  class SplineParticleEmitter : public ParticleEmitterShared
  {
  public:
    typedef SplineParticleEmitter ZilchSelf;
    typedef ParticleEmitterShared ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetEmitRadius();
    
    void SetEmitRadius(float value);
    
    float GetSpawnT();
    
    void SetSpawnT(float value);
    
    float GetSpawnTVariance();
    
    void SetSpawnTVariance(float value);
    
    bool GetClampT();
    
    void SetClampT(bool value);
    
    Zilch::HandleOf<CogPath> GetTargetSplineCog();
    
    void SetTargetSplineCog(CogPath* value);
    
    Zilch::HandleOf<Spline> GetSpline();
    
    void SetSpline(Spline* value);
    
    unsigned char mValue[136];
    
  protected:
    SplineParticleEmitter(Zilch::NoType none) : ParticleEmitterShared(none) {}
    ZilchNoCopy(SplineParticleEmitter);
  };
  
  class SplineParticleAnimator : public ParticleAnimator
  {
  public:
    typedef SplineParticleAnimator ZilchSelf;
    typedef ParticleAnimator ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetSpeed();
    
    void SetSpeed(float value);
    
    bool GetAutoCalculateLifetime();
    
    void SetAutoCalculateLifetime(bool value);
    
    bool GetHelix();
    
    void SetHelix(bool value);
    
    float GetHelixRadius();
    
    void SetHelixRadius(float value);
    
    float GetHelixWaveLength();
    
    void SetHelixWaveLength(float value);
    
    float GetHelixOffset();
    
    void SetHelixOffset(float value);
    
    SplineAnimatorMode GetMode();
    
    void SetMode(const SplineAnimatorMode& value);
    
    float GetSpringFrequencyHz();
    
    void SetSpringFrequencyHz(float value);
    
    float GetSpringDampingRatio();
    
    void SetSpringDampingRatio(float value);
    
    unsigned char mValue[40];
    
  protected:
    SplineParticleAnimator(Zilch::NoType none) : ParticleAnimator(none) {}
    ZilchNoCopy(SplineParticleAnimator);
  };
  
  class UnitTestSystem : public System
  {
  public:
    typedef UnitTestSystem ZilchSelf;
    typedef System ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[168];
    
  protected:
    UnitTestSystem(Zilch::NoType none) : System(none) {}
    ZilchNoCopy(UnitTestSystem);
  };
  
  class UnitTestEvent : public Zilch::ReferenceType
  {
  public:
    typedef UnitTestEvent ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    UnitTestEvent(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(UnitTestEvent);
  };
  
  class UnitTestEndFrameEvent : public UnitTestEvent
  {
  public:
    typedef UnitTestEndFrameEvent ZilchSelf;
    typedef UnitTestEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    UnitTestEndFrameEvent(Zilch::NoType none) : UnitTestEvent(none) {}
    ZilchNoCopy(UnitTestEndFrameEvent);
  };
  
  class UnitTestBaseMouseEvent : public UnitTestEvent
  {
  public:
    typedef UnitTestBaseMouseEvent ZilchSelf;
    typedef UnitTestEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    UnitTestBaseMouseEvent(Zilch::NoType none) : UnitTestEvent(none) {}
    ZilchNoCopy(UnitTestBaseMouseEvent);
  };
  
  class UnitTestMouseEvent : public UnitTestBaseMouseEvent
  {
  public:
    typedef UnitTestMouseEvent ZilchSelf;
    typedef UnitTestBaseMouseEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[80];
    
  protected:
    UnitTestMouseEvent(Zilch::NoType none) : UnitTestBaseMouseEvent(none) {}
    ZilchNoCopy(UnitTestMouseEvent);
  };
  
  class UnitTestMouseDropEvent : public UnitTestBaseMouseEvent
  {
  public:
    typedef UnitTestMouseDropEvent ZilchSelf;
    typedef UnitTestBaseMouseEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[120];
    
  protected:
    UnitTestMouseDropEvent(Zilch::NoType none) : UnitTestBaseMouseEvent(none) {}
    ZilchNoCopy(UnitTestMouseDropEvent);
  };
  
  class UnitTestKeyboardEvent : public UnitTestEvent
  {
  public:
    typedef UnitTestKeyboardEvent ZilchSelf;
    typedef UnitTestEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[64];
    
  protected:
    UnitTestKeyboardEvent(Zilch::NoType none) : UnitTestEvent(none) {}
    ZilchNoCopy(UnitTestKeyboardEvent);
  };
  
  class UnitTestKeyboardTextEvent : public UnitTestEvent
  {
  public:
    typedef UnitTestKeyboardTextEvent ZilchSelf;
    typedef UnitTestEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    UnitTestKeyboardTextEvent(Zilch::NoType none) : UnitTestEvent(none) {}
    ZilchNoCopy(UnitTestKeyboardTextEvent);
  };
  
  class UnitTestWindowEvent : public UnitTestEvent
  {
  public:
    typedef UnitTestWindowEvent ZilchSelf;
    typedef UnitTestEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[48];
    
  protected:
    UnitTestWindowEvent(Zilch::NoType none) : UnitTestEvent(none) {}
    ZilchNoCopy(UnitTestWindowEvent);
  };
  
  class IndexedHalfEdgeMeshVertexArray : public SafeId32Object
  {
  public:
    typedef IndexedHalfEdgeMeshVertexArray ZilchSelf;
    typedef SafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 Get(int __0);
    
    Zilch::HandleOf<IndexedHalfEdgeMeshVertexArrayRange> GetAll();
    
    int GetCount();
    
    unsigned char mValue[8];
    
  protected:
    IndexedHalfEdgeMeshVertexArray(Zilch::NoType none) : SafeId32Object(none) {}
    ZilchNoCopy(IndexedHalfEdgeMeshVertexArray);
  };
  
  class IndexedHalfEdgeMeshEdgeArray : public SafeId32Object
  {
  public:
    typedef IndexedHalfEdgeMeshEdgeArray ZilchSelf;
    typedef SafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<IndexedHalfEdge> Get(int __0);
    
    Zilch::HandleOf<IndexedHalfEdgeMeshEdgeArrayRange> GetAll();
    
    int GetCount();
    
    unsigned char mValue[8];
    
  protected:
    IndexedHalfEdgeMeshEdgeArray(Zilch::NoType none) : SafeId32Object(none) {}
    ZilchNoCopy(IndexedHalfEdgeMeshEdgeArray);
  };
  
  class IndexedHalfEdgeFaceEdgeIndexArray : public SafeId32Object
  {
  public:
    typedef IndexedHalfEdgeFaceEdgeIndexArray ZilchSelf;
    typedef SafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int Get(int __0);
    
    Zilch::HandleOf<IndexedHalfEdgeFaceEdgeIndexArrayRange> GetAll();
    
    int GetCount();
    
    unsigned char mValue[8];
    
  protected:
    IndexedHalfEdgeFaceEdgeIndexArray(Zilch::NoType none) : SafeId32Object(none) {}
    ZilchNoCopy(IndexedHalfEdgeFaceEdgeIndexArray);
  };
  
  class IndexedHalfEdgeMeshFaceArray : public SafeId32Object
  {
  public:
    typedef IndexedHalfEdgeMeshFaceArray ZilchSelf;
    typedef SafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<IndexedHalfEdgeFace> Get(int __0);
    
    Zilch::HandleOf<IndexedHalfEdgeMeshFaceArrayRange> GetAll();
    
    int GetCount();
    
    unsigned char mValue[8];
    
  protected:
    IndexedHalfEdgeMeshFaceArray(Zilch::NoType none) : SafeId32Object(none) {}
    ZilchNoCopy(IndexedHalfEdgeMeshFaceArray);
  };
  
  class IndexedHalfEdge : public SafeId32Object
  {
  public:
    typedef IndexedHalfEdge ZilchSelf;
    typedef SafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetVertexIndex();
    
    int GetTwinIndex();
    
    int GetFaceIndex();
    
    unsigned char mValue[16];
    
  protected:
    IndexedHalfEdge(Zilch::NoType none) : SafeId32Object(none) {}
    ZilchNoCopy(IndexedHalfEdge);
  };
  
  class IndexedHalfEdgeFace : public SafeId32Object
  {
  public:
    typedef IndexedHalfEdgeFace ZilchSelf;
    typedef SafeId32Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<IndexedHalfEdgeFaceEdgeIndexArray> GetEdges();
    
    unsigned char mValue[56];
    
  protected:
    IndexedHalfEdgeFace(Zilch::NoType none) : SafeId32Object(none) {}
    ZilchNoCopy(IndexedHalfEdgeFace);
  };
  
  class IndexedHalfEdgeMesh : public ReferenceCountedObject
  {
  public:
    typedef IndexedHalfEdgeMesh ZilchSelf;
    typedef ReferenceCountedObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<IndexedHalfEdgeMeshVertexArray> GetVertices();
    
    Zilch::HandleOf<IndexedHalfEdgeMeshEdgeArray> GetEdges();
    
    Zilch::HandleOf<IndexedHalfEdgeMeshFaceArray> GetFaces();
    
    unsigned char mValue[168];
    
  protected:
    IndexedHalfEdgeMesh(Zilch::NoType none) : ReferenceCountedObject(none) {}
    ZilchNoCopy(IndexedHalfEdgeMesh);
  };
  
  class QuickHull3D : public Zilch::ReferenceType
  {
  public:
    typedef QuickHull3D ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    void Add(const Zilch::Real3& p0);
    
    bool Build();
    
    void Clear();
    
    void Draw();
    
    int GetIndex();
    
    void SetIndex(int value);
    
    bool GetShowDebugDraw();
    
    void SetShowDebugDraw(bool value);
    
    Zilch::HandleOf<IndexedHalfEdgeMesh> GetMesh();
    
    void SetMesh(IndexedHalfEdgeMesh* value);
    
    unsigned char mValue[1328];
    
  protected:
    QuickHull3D(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(QuickHull3D);
  };
  
  // Global functionality exposed to Zilch script. Bound as "Zero" to script (e.g. Zero.Keyboard) ZeroStatic was used to avoid the conflict with namespace Zero).
  class Zero : public Zilch::ReferenceType
  {
  public:
    typedef Zero ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static void Connect(Object* __0, const Zilch::String& __1, const Zilch::Delegate& __2);
    
    // Removes specified event connection, if connection delegate was a component method then receiver object is just the component.
    static void Disconnect(Object* sender, const Zilch::String& eventId, Object* receiver);
    
    static void DisconnectAll(Object* __0, Object* __1);
    
    static Zilch::HandleOf<Keyboard> GetKeyboard();
    
    static Zilch::HandleOf<Mouse> GetMouse();
    
    static Zilch::HandleOf<Editor> GetEditor();
    
    static Zilch::HandleOf<Engine> GetEngine();
    
    static Zilch::HandleOf<Environment> GetEnvironment();
    
    static Zilch::HandleOf<Gamepads> GetGamepads();
    
    static Zilch::HandleOf<Joysticks> GetJoysticks();
    
    static Zilch::HandleOf<ObjectStore> GetObjectStore();
    
    static Zilch::HandleOf<ResourceSystem> GetResourceSystem();
    
    static Zilch::HandleOf<OsShell> GetOsShell();
    
    static Zilch::HandleOf<Audio> GetAudio();
    
    unsigned char mValue[1];
    
  protected:
    Zero(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(Zero);
  };
  
  class GizmoGrab : public Zilch::Enum
  {
  public:
    typedef GizmoGrab ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static GizmoGrab GetHold();
    
    static GizmoGrab GetToggle();
    
    GizmoGrab();
  };
  
  class GizmoBasis : public Zilch::Enum
  {
  public:
    typedef GizmoBasis ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static GizmoBasis GetLocal();
    
    static GizmoBasis GetWorld();
    
    GizmoBasis();
  };
  
  class GizmoPivot : public Zilch::Enum
  {
  public:
    typedef GizmoPivot ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static GizmoPivot GetPrimary();
    
    static GizmoPivot GetCenter();
    
    static GizmoPivot GetAverage();
    
    GizmoPivot();
  };
  
  class UpdateMode : public Zilch::Enum
  {
  public:
    typedef UpdateMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static UpdateMode GetNone();
    
    static UpdateMode GetTranslateSelf();
    
    static UpdateMode GetTranslateRoot();
    
    UpdateMode();
  };
  
  class IncludeMode : public Zilch::Enum
  {
  public:
    typedef IncludeMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static IncludeMode GetOnlyRoot();
    
    static IncludeMode GetChildren();
    
    IncludeMode();
  };
  
  class GizmoDragMode : public Zilch::Enum
  {
  public:
    typedef GizmoDragMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static GizmoDragMode GetLine();
    
    static GizmoDragMode GetPlane();
    
    static GizmoDragMode GetViewPlane();
    
    GizmoDragMode();
  };
  
  class GizmoGrabMode : public Zilch::Enum
  {
  public:
    typedef GizmoGrabMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static GizmoGrabMode GetHold();
    
    static GizmoGrabMode GetToggle();
    
    GizmoGrabMode();
  };
  
  class GizmoSnapMode : public Zilch::Enum
  {
  public:
    typedef GizmoSnapMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static GizmoSnapMode GetRelative();
    
    static GizmoSnapMode GetWorldAxes();
    
    static GizmoSnapMode GetWorldGrid();
    
    GizmoSnapMode();
  };
  
  class DockArea : public Zilch::Enum
  {
  public:
    typedef DockArea ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static DockArea GetTop();
    
    static DockArea GetBottom();
    
    static DockArea GetLeft();
    
    static DockArea GetRight();
    
    static DockArea GetCenter();
    
    static DockArea GetCount();
    
    static DockArea GetTopTool();
    
    static DockArea GetBotTool();
    
    static DockArea GetFloating();
    
    DockArea();
  };
  
  class EditorMode : public Zilch::Enum
  {
  public:
    typedef EditorMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static EditorMode GetMode2D();
    
    static EditorMode GetMode3D();
    
    EditorMode();
  };
  
  class MultiConvexMeshDrawMode : public Zilch::Enum
  {
  public:
    typedef MultiConvexMeshDrawMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static MultiConvexMeshDrawMode GetNone();
    
    static MultiConvexMeshDrawMode GetEdges();
    
    static MultiConvexMeshDrawMode GetFilled();
    
    MultiConvexMeshDrawMode();
  };
  
  class MultiConvexMeshSnappingMode : public Zilch::Enum
  {
  public:
    typedef MultiConvexMeshSnappingMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static MultiConvexMeshSnappingMode GetNone();
    
    static MultiConvexMeshSnappingMode GetIfClose();
    
    static MultiConvexMeshSnappingMode GetAlways();
    
    MultiConvexMeshSnappingMode();
  };
  
  class MultiConvexMeshAutoComputeMode : public Zilch::Enum
  {
  public:
    typedef MultiConvexMeshAutoComputeMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static MultiConvexMeshAutoComputeMode GetAlpha();
    
    static MultiConvexMeshAutoComputeMode GetIntensity();
    
    MultiConvexMeshAutoComputeMode();
  };
  
  class MultiConvexMeshAutoComputeMethod : public Zilch::Enum
  {
  public:
    typedef MultiConvexMeshAutoComputeMethod ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static MultiConvexMeshAutoComputeMethod GetPixels();
    
    static MultiConvexMeshAutoComputeMethod GetMarchingSquares();
    
    MultiConvexMeshAutoComputeMethod();
  };
  
  class ControlMode : public Zilch::Enum
  {
  public:
    typedef ControlMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static ControlMode GetOrbit();
    
    static ControlMode GetFirstPerson();
    
    static ControlMode GetZPlane();
    
    ControlMode();
  };
  
  class CameraDragMode : public Zilch::Enum
  {
  public:
    typedef CameraDragMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static CameraDragMode GetNotActive();
    
    static CameraDragMode GetRotation();
    
    static CameraDragMode GetPan();
    
    static CameraDragMode GetZoom();
    
    CameraDragMode();
  };
  
  class Placement : public Zilch::Enum
  {
  public:
    typedef Placement ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static Placement GetOnTop();
    
    static Placement GetLookAtPlane();
    
    static Placement GetLookAtPoint();
    
    static Placement GetViewAtDepth();
    
    static Placement GetCameraLocation();
    
    static Placement GetPlaneXY();
    
    Placement();
  };
  
  class ArrowHeadType : public Zilch::Enum
  {
  public:
    typedef ArrowHeadType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static ArrowHeadType GetArrow();
    
    static ArrowHeadType GetCube();
    
    ArrowHeadType();
  };
  
  class JointToolTypes : public Zilch::Enum
  {
  public:
    typedef JointToolTypes ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static JointToolTypes GetStickJoint();
    
    static JointToolTypes GetPositionJoint();
    
    static JointToolTypes GetPrismaticJoint();
    
    static JointToolTypes GetWeldJoint();
    
    static JointToolTypes GetRevoluteJoint();
    
    static JointToolTypes GetGearJoint();
    
    static JointToolTypes GetWheelJoint();
    
    static JointToolTypes GetLinearAxisJoint();
    
    static JointToolTypes GetFixedAngleJoint();
    
    static JointToolTypes GetPulleyJoint();
    
    static JointToolTypes GetUniversalJoint();
    
    static JointToolTypes GetUprightJoint();
    
    static JointToolTypes GetPrismaticJoint2d();
    
    static JointToolTypes GetRevoluteJoint2d();
    
    static JointToolTypes GetWheelJoint2d();
    
    static JointToolTypes GetObjectLink();
    
    JointToolTypes();
  };
  
  class TimeDisplay : public Zilch::Enum
  {
  public:
    typedef TimeDisplay ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static TimeDisplay GetFrames();
    
    static TimeDisplay GetTimecodes();
    
    TimeDisplay();
  };
  
  class HeightTool : public Zilch::Enum
  {
  public:
    typedef HeightTool ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static HeightTool GetCreateDestroy();
    
    static HeightTool GetRaiseLower();
    
    static HeightTool GetSmoothSharpen();
    
    static HeightTool GetFlatten();
    
    static HeightTool GetWeightPainter();
    
    HeightTool();
  };
  
  class HeightTextureSelect : public Zilch::Enum
  {
  public:
    typedef HeightTextureSelect ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static HeightTextureSelect GetTexture0();
    
    static HeightTextureSelect GetTexture1();
    
    static HeightTextureSelect GetTexture2();
    
    static HeightTextureSelect GetTexture3();
    
    HeightTextureSelect();
  };
  
  class CellIndexType : public Zilch::Enum
  {
  public:
    typedef CellIndexType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static CellIndexType GetLocal();
    
    static CellIndexType GetAbsoulte();
    
    CellIndexType();
  };
  
  class SpriteOrigin : public Zilch::Enum
  {
  public:
    typedef SpriteOrigin ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static SpriteOrigin GetCustom();
    
    static SpriteOrigin GetCenter();
    
    static SpriteOrigin GetUpperLeft();
    
    static SpriteOrigin GetBottomLeft();
    
    static SpriteOrigin GetBottomCenter();
    
    SpriteOrigin();
  };
  
  class TileEditor2DSubToolType : public Zilch::Enum
  {
  public:
    typedef TileEditor2DSubToolType ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static TileEditor2DSubToolType GetDrawTool();
    
    static TileEditor2DSubToolType GetSelectionTool();
    
    TileEditor2DSubToolType();
  };
  
  class SpringSubTools : public Zilch::Enum
  {
  public:
    typedef SpringSubTools ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static SpringSubTools GetAnchoring();
    
    static SpringSubTools GetPointSelector();
    
    static SpringSubTools GetSpringSelector();
    
    static SpringSubTools GetSpringCreator();
    
    static SpringSubTools GetRopeCreator();
    
    SpringSubTools();
  };
  
  class ImportMode : public Zilch::Enum
  {
  public:
    typedef ImportMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static ImportMode GetMaintainAspectRatio();
    
    static ImportMode GetFitToPatches();
    
    ImportMode();
  };
  
  class PlayGameOptions : public Zilch::Enum
  {
  public:
    typedef PlayGameOptions ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static PlayGameOptions GetSingleInstance();
    
    static PlayGameOptions GetMultipleInstances();
    
    PlayGameOptions();
  };
  
  class ImportFrames : public Zilch::Enum
  {
  public:
    typedef ImportFrames ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static ImportFrames GetAllFrames();
    
    static ImportFrames GetSelectedFrames();
    
    ImportFrames();
  };
  
  class LauncherCommunicationEvent : public SendableEvent
  {
  public:
    typedef LauncherCommunicationEvent ZilchSelf;
    typedef SendableEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[24];
    
  protected:
    LauncherCommunicationEvent(Zilch::NoType none) : SendableEvent(none) {}
    ZilchNoCopy(LauncherCommunicationEvent);
  };
  
  class BackgroundTaskEvent : public Event
  {
  public:
    typedef BackgroundTaskEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[32];
    
  protected:
    BackgroundTaskEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(BackgroundTaskEvent);
  };
  
  class EditorEvent : public Event
  {
  public:
    typedef EditorEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Editor> GetEditor();
    
    void SetEditor(Editor* value);
    
    unsigned char mValue[8];
    
  protected:
    EditorEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(EditorEvent);
  };
  
  // MetaDropEvent for dropping MetaObjects.
  class MetaDropEvent : public Event
  {
  public:
    typedef MetaDropEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetHandled();
    
    void SetHandled(bool value);
    
    bool GetFailed();
    
    void SetFailed(bool value);
    
    bool GetTesting();
    
    void SetTesting(bool value);
    
    Zilch::Real2 GetPosition();
    
    void SetPosition(const Zilch::Real2& value);
    
    Zilch::String GetResult();
    
    void SetResult(const Zilch::String& value);
    
    Zilch::Handle GetObject();
    
    Zilch::Handle GetMouseOverObject();
    
    Zilch::HandleOf<MouseEvent> GetMouseEvent();
    
    Zilch::HandleOf<ViewportMouseEvent> GetViewportMouseEvent();
    
    unsigned char mValue[208];
    
  protected:
    MetaDropEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(MetaDropEvent);
  };
  
  class PostAddResourceEvent : public Event
  {
  public:
    typedef PostAddResourceEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    PostAddResourceEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(PostAddResourceEvent);
  };
  
  class TreeEvent : public Event
  {
  public:
    typedef TreeEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    TreeEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(TreeEvent);
  };
  
  class TreeViewHeaderAddedEvent : public Event
  {
  public:
    typedef TreeViewHeaderAddedEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    TreeViewHeaderAddedEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(TreeViewHeaderAddedEvent);
  };
  
  class ValueEvent : public Event
  {
  public:
    typedef ValueEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[80];
    
  protected:
    ValueEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ValueEvent);
  };
  
  class TileViewEvent : public Event
  {
  public:
    typedef TileViewEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    TileViewEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(TileViewEvent);
  };
  
  class CurveEvent : public Event
  {
  public:
    typedef CurveEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    CurveEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(CurveEvent);
  };
  
  class TextUpdatedEvent : public Event
  {
  public:
    typedef TextUpdatedEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetChangeAccepted();
    
    void SetChangeAccepted(bool value);
    
    unsigned char mValue[16];
    
  protected:
    TextUpdatedEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(TextUpdatedEvent);
  };
  
  class ConsoleTextEvent : public Event
  {
  public:
    typedef ConsoleTextEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    ConsoleTextEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ConsoleTextEvent);
  };
  
  class MessageBoxEvent : public Event
  {
  public:
    typedef MessageBoxEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    MessageBoxEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(MessageBoxEvent);
  };
  
  class ColorEvent : public Event
  {
  public:
    typedef ColorEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    ColorEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ColorEvent);
  };
  
  class TextEditorEvent : public Event
  {
  public:
    typedef TextEditorEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    TextEditorEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(TextEditorEvent);
  };
  
  class ObjectPollEvent : public Event
  {
  public:
    typedef ObjectPollEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[24];
    
  protected:
    ObjectPollEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ObjectPollEvent);
  };
  
  class GizmoEvent : public Event
  {
  public:
    typedef GizmoEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Cog> GetGizmo();
    
    Zilch::HandleOf<Component> GetSource();
    
    Zilch::HandleOf<ViewportMouseEvent> GetViewportMouseEvent();
    
    Zilch::HandleOf<OperationQueue> GetOperationQueue();
    
    bool GetFinished();
    
    unsigned char mValue[80];
    
  protected:
    GizmoEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(GizmoEvent);
  };
  
  class GizmoUpdateEvent : public GizmoEvent
  {
  public:
    typedef GizmoUpdateEvent ZilchSelf;
    typedef GizmoEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetConstrainedWorldMovement();
    
    void SetConstrainedWorldMovement(const Zilch::Real3& value);
    
    Zilch::Real3 GetConstrainedWorldDelta();
    
    void SetConstrainedWorldDelta(const Zilch::Real3& value);
    
    Zilch::Real3 GetInitialGrabPoint();
    
    void SetInitialGrabPoint(const Zilch::Real3& value);
    
    Zilch::Real3 GetMouseWorldMovement();
    
    void SetMouseWorldMovement(const Zilch::Real3& value);
    
    Zilch::Real3 GetMouseWorldDelta();
    
    void SetMouseWorldDelta(const Zilch::Real3& value);
    
    unsigned char mValue[40];
    
  protected:
    GizmoUpdateEvent(Zilch::NoType none) : GizmoEvent(none) {}
    ZilchNoCopy(GizmoUpdateEvent);
  };
  
  class GizmoRayTestEvent : public Event
  {
  public:
    typedef GizmoRayTestEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[24];
    
  protected:
    GizmoRayTestEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(GizmoRayTestEvent);
  };
  
  // Notification about various rotation parameters on the most recent RingGizmo modification.
  class RingGizmoEvent : public GizmoUpdateEvent
  {
  public:
    typedef RingGizmoEvent ZilchSelf;
    typedef GizmoUpdateEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Quaternion GetWorldRotation();
    
    void SetWorldRotation(const Zilch::Quaternion& value);
    
    Zilch::Real3 GetWorldRotationAxis();
    
    void SetWorldRotationAxis(const Zilch::Real3& value);
    
    float GetRadiansAroundAxis();
    
    void SetRadiansAroundAxis(float value);
    
    float GetDeltaRadiansAroundAxis();
    
    void SetDeltaRadiansAroundAxis(float value);
    
    unsigned char mValue[40];
    
  protected:
    RingGizmoEvent(Zilch::NoType none) : GizmoUpdateEvent(none) {}
    ZilchNoCopy(RingGizmoEvent);
  };
  
  class TranslateGizmoUpdateEvent : public GizmoUpdateEvent
  {
  public:
    typedef TranslateGizmoUpdateEvent ZilchSelf;
    typedef GizmoUpdateEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetGizmoWorldTranslation();
    
    void SetGizmoWorldTranslation(const Zilch::Real3& value);
    
    unsigned char mValue[16];
    
  protected:
    TranslateGizmoUpdateEvent(Zilch::NoType none) : GizmoUpdateEvent(none) {}
    ZilchNoCopy(TranslateGizmoUpdateEvent);
  };
  
  class ScaleGizmoUpdateEvent : public GizmoUpdateEvent
  {
  public:
    typedef ScaleGizmoUpdateEvent ZilchSelf;
    typedef GizmoUpdateEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetGizmoWorldScale();
    
    void SetGizmoWorldScale(const Zilch::Real3& value);
    
    unsigned char mValue[16];
    
  protected:
    ScaleGizmoUpdateEvent(Zilch::NoType none) : GizmoUpdateEvent(none) {}
    ZilchNoCopy(ScaleGizmoUpdateEvent);
  };
  
  class RotateGizmoUpdateEvent : public GizmoUpdateEvent
  {
  public:
    typedef RotateGizmoUpdateEvent ZilchSelf;
    typedef GizmoUpdateEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetGizmoRotation();
    
    void SetGizmoRotation(float value);
    
    Zilch::Real3 GetGizmoWorldRotationAxis();
    
    void SetGizmoWorldRotationAxis(const Zilch::Real3& value);
    
    unsigned char mValue[16];
    
  protected:
    RotateGizmoUpdateEvent(Zilch::NoType none) : GizmoUpdateEvent(none) {}
    ZilchNoCopy(RotateGizmoUpdateEvent);
  };
  
  class ObjectTransformGizmoEvent : public GizmoEvent
  {
  public:
    typedef ObjectTransformGizmoEvent ZilchSelf;
    typedef GizmoEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetFinalLocalTranslation();
    
    void SetFinalLocalTranslation(const Zilch::Real3& value);
    
    Zilch::Real3 GetFinalLocalScale();
    
    void SetFinalLocalScale(const Zilch::Real3& value);
    
    Zilch::Quaternion GetFinalLocalRotation();
    
    void SetFinalLocalRotation(const Zilch::Quaternion& value);
    
    unsigned char mValue[56];
    
  protected:
    ObjectTransformGizmoEvent(Zilch::NoType none) : GizmoEvent(none) {}
    ZilchNoCopy(ObjectTransformGizmoEvent);
  };
  
  class RotationBasisGizmoAabbQueryEvent : public ObjectEvent
  {
  public:
    typedef RotationBasisGizmoAabbQueryEvent ZilchSelf;
    typedef ObjectEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[24];
    
  protected:
    RotationBasisGizmoAabbQueryEvent(Zilch::NoType none) : ObjectEvent(none) {}
    ZilchNoCopy(RotationBasisGizmoAabbQueryEvent);
  };
  
  class ToolGizmoEvent : public Event
  {
  public:
    typedef ToolGizmoEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    ToolGizmoEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ToolGizmoEvent);
  };
  
  class ManipulatorToolEvent : public ViewportMouseEvent
  {
  public:
    typedef ManipulatorToolEvent ZilchSelf;
    typedef ViewportMouseEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<OperationQueue> GetOperationQueue();
    
    bool GetFinished();
    
    Location GetGrabLocation();
    
    Rectangle GetStartWorldRectangle();
    
    Rectangle GetEndWorldRectangle();
    
    void SetEndWorldRectangle(const Rectangle& value);
    
    unsigned char mValue[96];
    
  protected:
    ManipulatorToolEvent(Zilch::NoType none) : ViewportMouseEvent(none) {}
    ZilchNoCopy(ManipulatorToolEvent);
  };
  
  class SelectToolFrustumEvent : public Event
  {
  public:
    typedef SelectToolFrustumEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetHandled();
    
    void SetHandled(bool value);
    
    bool GetHandledEventScript();
    
    void SetHandledEventScript(bool value);
    
    Zilch::HandleOf<Space> GetSpace();
    
    Frustum GetFrustum();
    
    unsigned char mValue[112];
    
  protected:
    SelectToolFrustumEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(SelectToolFrustumEvent);
  };
  
  class BugReporter : public Composite
  {
  public:
    typedef BugReporter ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[88];
    
  protected:
    BugReporter(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(BugReporter);
  };
  
  class MetaPropertyEditor : public ReferenceCountedEventObject
  {
  public:
    typedef MetaPropertyEditor ZilchSelf;
    typedef ReferenceCountedEventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    MetaPropertyEditor(Zilch::NoType none) : ReferenceCountedEventObject(none) {}
    ZilchNoCopy(MetaPropertyEditor);
  };
  
  class MetaCompositionWrapper : public MetaComposition
  {
  public:
    typedef MetaCompositionWrapper ZilchSelf;
    typedef MetaComposition ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    MetaCompositionWrapper(Zilch::NoType none) : MetaComposition(none) {}
    ZilchNoCopy(MetaCompositionWrapper);
  };
  
  class BackgroundTasks : public EventObject
  {
  public:
    typedef BackgroundTasks ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[32];
    
  protected:
    BackgroundTasks(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(BackgroundTasks);
  };
  
  class StressTest : public EventObject
  {
  public:
    typedef StressTest ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetSeed();
    
    void SetSeed(int value);
    
    int GetFrames();
    
    void SetFrames(int value);
    
    Zilch::String GetLogFile();
    
    void SetLogFile(const Zilch::String& value);
    
    bool GetCreateObjects();
    
    void SetCreateObjects(bool value);
    
    bool GetDestroyObjects();
    
    void SetDestroyObjects(bool value);
    
    bool GetSetProperties();
    
    void SetSetProperties(bool value);
    
    bool GetAddComponents();
    
    void SetAddComponents(bool value);
    
    bool GetRemoveComponents();
    
    void SetRemoveComponents(bool value);
    
    bool GetChangeSelection();
    
    void SetChangeSelection(bool value);
    
    bool GetRayCasts();
    
    void SetRayCasts(bool value);
    
    bool GetParentObjects();
    
    void SetParentObjects(bool value);
    
    bool GetUnparentObjects();
    
    void SetUnparentObjects(bool value);
    
    bool GetMouseEvents();
    
    void SetMouseEvents(bool value);
    
    bool GetKeyEvents();
    
    void SetKeyEvents(bool value);
    
    bool GetChangeTools();
    
    void SetChangeTools(bool value);
    
    bool GetStartGameInstances();
    
    void SetStartGameInstances(bool value);
    
    bool GetStopGameInstances();
    
    void SetStopGameInstances(bool value);
    
    bool GetSwitchViewports();
    
    void SetSwitchViewports(bool value);
    
    bool GetUndo();
    
    void SetUndo(bool value);
    
    bool GetRedo();
    
    void SetRedo(bool value);
    
    unsigned char mValue[40];
    
  protected:
    StressTest(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(StressTest);
  };
  
  class GeneralSearchView : public Composite
  {
  public:
    typedef GeneralSearchView ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[72];
    
  protected:
    GeneralSearchView(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(GeneralSearchView);
  };
  
  class CurveDraggable : public Widget
  {
  public:
    typedef CurveDraggable ZilchSelf;
    typedef Widget ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[24];
    
  protected:
    CurveDraggable(Zilch::NoType none) : Widget(none) {}
    ZilchNoCopy(CurveDraggable);
  };
  
  class CurveControlPoint : public CurveDraggable
  {
  public:
    typedef CurveControlPoint ZilchSelf;
    typedef CurveDraggable ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    CurveControlPoint(Zilch::NoType none) : CurveDraggable(none) {}
    ZilchNoCopy(CurveControlPoint);
  };
  
  class CurveTangent : public CurveDraggable
  {
  public:
    typedef CurveTangent ZilchSelf;
    typedef CurveDraggable ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[24];
    
  protected:
    CurveTangent(Zilch::NoType none) : CurveDraggable(none) {}
    ZilchNoCopy(CurveTangent);
  };
  
  class Document : public EventObject
  {
  public:
    typedef Document ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    Document(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(Document);
  };
  
  class DocumentManager : public EventObject
  {
  public:
    typedef DocumentManager ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[80];
    
  protected:
    DocumentManager(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(DocumentManager);
  };
  
  class Command : public SafeId32EventObject
  {
  public:
    typedef Command ZilchSelf;
    typedef SafeId32EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[120];
    
  protected:
    Command(Zilch::NoType none) : SafeId32EventObject(none) {}
    ZilchNoCopy(Command);
  };
  
  class CogCommand : public Command
  {
  public:
    typedef CogCommand ZilchSelf;
    typedef Command ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[120];
    
  protected:
    CogCommand(Zilch::NoType none) : Command(none) {}
    ZilchNoCopy(CogCommand);
  };
  
  class EditorScriptObjectsCogCommand : public Object
  {
  public:
    typedef EditorScriptObjectsCogCommand ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[112];
    
  protected:
    EditorScriptObjectsCogCommand(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(EditorScriptObjectsCogCommand);
  };
  
  class CogCommandManager : public EditorScriptObjectsCogCommand
  {
  public:
    typedef CogCommandManager ZilchSelf;
    typedef EditorScriptObjectsCogCommand ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[64];
    
  protected:
    CogCommandManager(Zilch::NoType none) : EditorScriptObjectsCogCommand(none) {}
    ZilchNoCopy(CogCommandManager);
  };
  
  class PropertyView : public Composite
  {
  public:
    typedef PropertyView ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    void SetObject(Object* p0);
    
    void Refresh();
    
    void Invalidate();
    
    void ActivateAutoUpdate();
    
    unsigned char mValue[240];
    
  protected:
    PropertyView(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(PropertyView);
  };
  
  class FormattedInPlaceText : public Zilch::ReferenceType
  {
  public:
    typedef FormattedInPlaceText ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[80];
    
  protected:
    FormattedInPlaceText(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(FormattedInPlaceText);
  };
  
  class InPlaceTextEditor : public Composite
  {
  public:
    typedef InPlaceTextEditor ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[72];
    
  protected:
    InPlaceTextEditor(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(InPlaceTextEditor);
  };
  
  class ValueEditorFactory : public Object
  {
  public:
    typedef ValueEditorFactory ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    ValueEditorFactory(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(ValueEditorFactory);
  };
  
  class PreviewWidget : public Composite
  {
  public:
    typedef PreviewWidget ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[80];
    
  protected:
    PreviewWidget(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(PreviewWidget);
  };
  
  class PreviewWidgetFactory : public Object
  {
  public:
    typedef PreviewWidgetFactory ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    PreviewWidgetFactory(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(PreviewWidgetFactory);
  };
  
  class TileViewWidget : public Composite
  {
  public:
    typedef TileViewWidget ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[200];
    
  protected:
    TileViewWidget(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(TileViewWidget);
  };
  
  class TileView : public Composite
  {
  public:
    typedef TileView ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[152];
    
  protected:
    TileView(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(TileView);
  };
  
  class ItemList : public Composite
  {
  public:
    typedef ItemList ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[136];
    
  protected:
    ItemList(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(ItemList);
  };
  
  class WeightedComposite : public Composite
  {
  public:
    typedef WeightedComposite ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    WeightedComposite(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(WeightedComposite);
  };
  
  class ItemGroup : public WeightedComposite
  {
  public:
    typedef ItemGroup ZilchSelf;
    typedef WeightedComposite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[48];
    
  protected:
    ItemGroup(Zilch::NoType none) : WeightedComposite(none) {}
    ZilchNoCopy(ItemGroup);
  };
  
  class Item : public WeightedComposite
  {
  public:
    typedef Item ZilchSelf;
    typedef WeightedComposite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[48];
    
  protected:
    Item(Zilch::NoType none) : WeightedComposite(none) {}
    ZilchNoCopy(Item);
  };
  
  class ImportButton : public Composite
  {
  public:
    typedef ImportButton ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[24];
    
  protected:
    ImportButton(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(ImportButton);
  };
  
  class ContentPackage : public EventObject
  {
  public:
    typedef ContentPackage ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetName();
    
    void SetName(const Zilch::String& value);
    
    Zilch::String GetAuthor();
    
    void SetAuthor(const Zilch::String& value);
    
    Zilch::String GetTags();
    
    void SetTags(const Zilch::String& value);
    
    Zilch::String GetDescription();
    
    void SetDescription(const Zilch::String& value);
    
    unsigned char mValue[168];
    
  protected:
    ContentPackage(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(ContentPackage);
  };
  
  class Editor : public MultiDock
  {
  public:
    typedef Editor ZilchSelf;
    typedef MultiDock ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Actions> GetActions();
    
    Zilch::HandleOf<Space> GetEditSpace();
    
    Zilch::HandleOf<GameSession> GetEditGameSession();
    
    Zilch::HandleOf<Level> GetEditLevel();
    
    Zilch::HandleOf<MetaSelection> GetSelection();
    
    Zilch::HandleOf<OperationQueue> GetOperationQueue();
    
    Zilch::HandleOf<Cog> GetProjectCog();
    
    void SetFocus(Space* p0);
    
    void DisplayGameSession(const Zilch::String& p0, GameSession* p1);
    
    void ExecuteCommand(const Zilch::String& p0);
    
    void SelectPrimary(const Zilch::Handle& p0);
    
    Zilch::HandleOf<GameSession> PlayGame(const PlayGameOptions& p0, bool p1, bool p2);
    
    Zilch::HandleOf<GameSession> PlaySingleGame();
    
    Zilch::HandleOf<GameSession> PlayNewGame();
    
    void PauseGame();
    
    void ToggleGamePaused();
    
    void SetGamePaused(bool p0);
    
    void StopGame();
    
    void StepGame();
    
    void EditGameSpaces();
    
    void AddResource();
    
    void AddResourceType(Zilch::BoundType* __0, ContentLibrary* __1, const Zilch::String& __2);
    
    void ZoomOnGame(GameSession* p0);
    
    void SelectTool(const Zilch::String& p0);
    
    void SetMainPropertyViewObject(Object* p0);
    
    void EditResource(Resource* p0);
    
    void CreateDockableWindow(const Zilch::String& p0, CameraViewport* p1, const Zilch::Real2& p2, bool p3, const DockArea& p4);
    
    void DebuggerResume();
    
    void DebuggerPause();
    
    void DebuggerStepIn();
    
    void DebuggerStepOver();
    
    void DebuggerStepOut();
    
    unsigned char mValue[976];
    
  protected:
    Editor(Zilch::NoType none) : MultiDock(none) {}
    ZilchNoCopy(Editor);
  };
  
  class EditorMain : public Editor
  {
  public:
    typedef EditorMain ZilchSelf;
    typedef Editor ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    EditorMain(Zilch::NoType none) : Editor(none) {}
    ZilchNoCopy(EditorMain);
  };
  
  class LauncherOpenProjectComposite : public Composite
  {
  public:
    typedef LauncherOpenProjectComposite ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    LauncherOpenProjectComposite(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(LauncherOpenProjectComposite);
  };
  
  class LauncherSingletonCommunication : public EventObject
  {
  public:
    typedef LauncherSingletonCommunication ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[56];
    
  protected:
    LauncherSingletonCommunication(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(LauncherSingletonCommunication);
  };
  
  class LauncherDebuggerCommunication : public EventObject
  {
  public:
    typedef LauncherDebuggerCommunication ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    LauncherDebuggerCommunication(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(LauncherDebuggerCommunication);
  };
  
  class SimpleDebuggerListener : public EventObject
  {
  public:
    typedef SimpleDebuggerListener ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    SimpleDebuggerListener(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(SimpleDebuggerListener);
  };
  
  class MainPropertyView : public Composite
  {
  public:
    typedef MainPropertyView ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[296];
    
  protected:
    MainPropertyView(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(MainPropertyView);
  };
  
  class ColorScheme : public EventObject
  {
  public:
    typedef ColorScheme ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetActiveScheme();
    
    void SetActiveScheme(const Zilch::String& value);
    
    Zilch::Real4 GetDefault();
    
    void SetDefault(const Zilch::Real4& value);
    
    Zilch::Real4 GetBackground();
    
    void SetBackground(const Zilch::Real4& value);
    
    Zilch::Real4 GetSelection();
    
    void SetSelection(const Zilch::Real4& value);
    
    Zilch::Real4 GetLineSelection();
    
    void SetLineSelection(const Zilch::Real4& value);
    
    Zilch::Real4 GetComment();
    
    void SetComment(const Zilch::Real4& value);
    
    Zilch::Real4 GetStringLiteral();
    
    void SetStringLiteral(const Zilch::Real4& value);
    
    Zilch::Real4 GetNumber();
    
    void SetNumber(const Zilch::Real4& value);
    
    Zilch::Real4 GetKeyword();
    
    void SetKeyword(const Zilch::Real4& value);
    
    Zilch::Real4 GetOperator();
    
    void SetOperator(const Zilch::Real4& value);
    
    Zilch::Real4 GetClassName();
    
    void SetClassName(const Zilch::Real4& value);
    
    Zilch::Real4 GetFunctionName();
    
    void SetFunctionName(const Zilch::Real4& value);
    
    Zilch::Real4 GetSpecialWords();
    
    void SetSpecialWords(const Zilch::Real4& value);
    
    Zilch::Real4 GetError();
    
    void SetError(const Zilch::Real4& value);
    
    Zilch::Real4 GetWhitespace();
    
    void SetWhitespace(const Zilch::Real4& value);
    
    Zilch::Real4 GetGutter();
    
    void SetGutter(const Zilch::Real4& value);
    
    Zilch::Real4 GetGutterText();
    
    void SetGutterText(const Zilch::Real4& value);
    
    Zilch::Real4 GetLink();
    
    void SetLink(const Zilch::Real4& value);
    
    Zilch::Real4 GetTextMatchIndicator();
    
    void SetTextMatchIndicator(const Zilch::Real4& value);
    
    Zilch::Real4 GetTextMatchHighlight();
    
    void SetTextMatchHighlight(const Zilch::Real4& value);
    
    float GetTextMatchOutlineAlpha();
    
    void SetTextMatchOutlineAlpha(float value);
    
    Zilch::String GetSaveName();
    
    void SetSaveName(const Zilch::String& value);
    
    void Save();
    
    unsigned char mValue[432];
    
  protected:
    ColorScheme(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(ColorScheme);
  };
  
  class TextEditor : public BaseScrollArea
  {
  public:
    typedef TextEditor ZilchSelf;
    typedef BaseScrollArea ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[144];
    
  protected:
    TextEditor(Zilch::NoType none) : BaseScrollArea(none) {}
    ZilchNoCopy(TextEditor);
  };
  
  // A component used for drawing a grid.
  class GridDraw : public Component
  {
  public:
    typedef GridDraw ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetActive();
    
    void SetActive(bool value);
    
    AxisDirection GetAxis();
    
    void SetAxis(const AxisDirection& value);
    
    float GetCellSize();
    
    void SetCellSize(float value);
    
    int GetLines();
    
    void SetLines(int value);
    
    int GetHighlightInterval();
    
    void SetHighlightInterval(int value);
    
    Zilch::Real4 GetGridColor();
    
    void SetGridColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetGridHighlight();
    
    void SetGridHighlight(const Zilch::Real4& value);
    
    bool GetHalfCellOffset();
    
    void SetHalfCellOffset(bool value);
    
    bool GetDrawAxisOrigins();
    
    void SetDrawAxisOrigins(bool value);
    
    bool GetAlwaysDrawInEditor();
    
    void SetAlwaysDrawInEditor(bool value);
    
    bool GetDrawInGame();
    
    void SetDrawInGame(bool value);
    
    bool GetFollowEditorCamera();
    
    void SetFollowEditorCamera(bool value);
    
    unsigned char mValue[64];
    
  protected:
    GridDraw(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(GridDraw);
  };
  
  class EditorCameraController : public Component
  {
  public:
    typedef EditorCameraController ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetMoveSensitivity();
    
    void SetMoveSensitivity(float value);
    
    Zilch::Real3 GetLookTarget();
    
    void SetLookTarget(const Zilch::Real3& value);
    
    float GetLookDistance();
    
    void SetLookDistance(float value);
    
    float GetVerticalAngle();
    
    void SetVerticalAngle(float value);
    
    float GetHorizontalAngle();
    
    void SetHorizontalAngle(float value);
    
    ControlMode GetControlMode();
    
    void SetControlMode(const ControlMode& value);
    
    void Reset();
    
    unsigned char mValue[152];
    
  protected:
    EditorCameraController(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(EditorCameraController);
  };
  
  class EditorViewport : public Composite
  {
  public:
    typedef EditorViewport ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[240];
    
  protected:
    EditorViewport(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(EditorViewport);
  };
  
  // Registers itself with the GizmoSpace. This allows GizmoSpace to keep track of which Gizmo the mouse is over, as well as send other input events directly to Gizmos.
  class Gizmo : public Component
  {
  public:
    typedef Gizmo ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetActive();
    
    void SetActive(bool value);
    
    bool GetForwardEventsToChildren();
    
    void SetForwardEventsToChildren(bool value);
    
    Zilch::HandleOf<Cog> GetEditingObject();
    
    bool GetMouseOver();
    
    unsigned char mValue[16];
    
  protected:
    Gizmo(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(Gizmo);
  };
  
  class GizmoSpace : public Component
  {
  public:
    typedef GizmoSpace ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[48];
    
  protected:
    GizmoSpace(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(GizmoSpace);
  };
  
  class GizmoDrag : public Component
  {
  public:
    typedef GizmoDrag ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    GizmoDragMode GetDragMode();
    
    void SetDragMode(const GizmoDragMode& value);
    
    Zilch::Real3 GetLineDirection();
    
    void SetLineDirection(const Zilch::Real3& value);
    
    Zilch::Real3 GetPlaneNormal();
    
    void SetPlaneNormal(const Zilch::Real3& value);
    
    bool GetNormalInWorld();
    
    void SetNormalInWorld(bool value);
    
    Zilch::Real3 GetGrabPoint();
    
    GizmoGrabMode GetGrabMode();
    
    void SetGrabMode(const GizmoGrabMode& value);
    
    bool GetAutoDrag();
    
    void SetAutoDrag(bool value);
    
    float GetDragDistance();
    
    void SetDragDistance(float value);
    
    bool GetDragActive();
    
    unsigned char mValue[120];
    
  protected:
    GizmoDrag(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(GizmoDrag);
  };
  
  class SimpleGizmoBase : public Component
  {
  public:
    typedef SimpleGizmoBase ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetMouseInput();
    
    void SetMouseInput(bool value);
    
    int GetPickingPriority();
    
    void SetPickingPriority(int value);
    
    Zilch::Real4 GetColor();
    
    void SetColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetHoverColor();
    
    void SetHoverColor(const Zilch::Real4& value);
    
    bool GetViewScaled();
    
    void SetViewScaled(bool value);
    
    bool GetUseParentAsViewScaleOrigin();
    
    void SetUseParentAsViewScaleOrigin(bool value);
    
    bool GetDrawOnTop();
    
    void SetDrawOnTop(bool value);
    
    unsigned char mValue[80];
    
  protected:
    SimpleGizmoBase(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SimpleGizmoBase);
  };
  
  class SquareGizmo : public SimpleGizmoBase
  {
  public:
    typedef SquareGizmo ZilchSelf;
    typedef SimpleGizmoBase ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real3 GetSize();
    
    void SetSize(const Zilch::Real3& value);
    
    float GetSnapDistance();
    
    void SetSnapDistance(float value);
    
    bool GetViewAligned();
    
    void SetViewAligned(bool value);
    
    bool GetBordered();
    
    void SetBordered(bool value);
    
    bool GetFilled();
    
    void SetFilled(bool value);
    
    unsigned char mValue[24];
    
  protected:
    SquareGizmo(Zilch::NoType none) : SimpleGizmoBase(none) {}
    ZilchNoCopy(SquareGizmo);
  };
  
  class ArrowGizmo : public SimpleGizmoBase
  {
  public:
    typedef ArrowGizmo ZilchSelf;
    typedef SimpleGizmoBase ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetHeadSize();
    
    void SetHeadSize(float value);
    
    float GetLength();
    
    void SetLength(float value);
    
    float GetSelectRadius();
    
    void SetSelectRadius(float value);
    
    ArrowHeadType GetHeadType();
    
    void SetHeadType(const ArrowHeadType& value);
    
    bool GetDualHeads();
    
    void SetDualHeads(bool value);
    
    bool GetFilledHeads();
    
    void SetFilledHeads(bool value);
    
    float GetLineDrawWidth();
    
    void SetLineDrawWidth(float value);
    
    unsigned char mValue[32];
    
  protected:
    ArrowGizmo(Zilch::NoType none) : SimpleGizmoBase(none) {}
    ZilchNoCopy(ArrowGizmo);
  };
  
  class RingGizmo : public SimpleGizmoBase
  {
  public:
    typedef RingGizmo ZilchSelf;
    typedef SimpleGizmoBase ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetRadius();
    
    void SetRadius(float value);
    
    float GetSelectRadius();
    
    void SetSelectRadius(float value);
    
    float GetDragRadiansPerPixel();
    
    void SetDragRadiansPerPixel(float value);
    
    bool GetBackShade();
    
    void SetBackShade(bool value);
    
    bool GetViewAligned();
    
    void SetViewAligned(bool value);
    
    Zilch::Real4 GetGrabArrowColor();
    
    void SetGrabArrowColor(const Zilch::Real4& value);
    
    float GetGrabArrowLength();
    
    void SetGrabArrowLength(float value);
    
    float GetGrabArrowHeadSize();
    
    void SetGrabArrowHeadSize(float value);
    
    bool GetGrabArrowViewScaled();
    
    void SetGrabArrowViewScaled(bool value);
    
    bool GetGrabArrowOnTop();
    
    void SetGrabArrowOnTop(bool value);
    
    unsigned char mValue[112];
    
  protected:
    RingGizmo(Zilch::NoType none) : SimpleGizmoBase(none) {}
    ZilchNoCopy(RingGizmo);
  };
  
  // Updates the translation of the gizmo when it's being dragged.
  class TranslateGizmo : public Component
  {
  public:
    typedef TranslateGizmo ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    UpdateMode GetUpdateMode();
    
    void SetUpdateMode(const UpdateMode& value);
    
    bool GetSnapping();
    
    void SetSnapping(bool value);
    
    GizmoSnapMode GetSnapMode();
    
    void SetSnapMode(const GizmoSnapMode& value);
    
    float GetSnapDistance();
    
    void SetSnapDistance(float value);
    
    unsigned char mValue[40];
    
  protected:
    TranslateGizmo(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(TranslateGizmo);
  };
  
  class ScaleGizmo : public Component
  {
  public:
    typedef ScaleGizmo ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetSnapping();
    
    void SetSnapping(bool value);
    
    GizmoSnapMode GetSnapMode();
    
    void SetSnapMode(const GizmoSnapMode& value);
    
    float GetSnapDistance();
    
    void SetSnapDistance(float value);
    
    unsigned char mValue[56];
    
  protected:
    ScaleGizmo(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ScaleGizmo);
  };
  
  class RotateGizmo : public Component
  {
  public:
    typedef RotateGizmo ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetSnapping();
    
    void SetSnapping(bool value);
    
    float GetSnapAngle();
    
    void SetSnapAngle(float value);
    
    unsigned char mValue[16];
    
  protected:
    RotateGizmo(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(RotateGizmo);
  };
  
  class ObjectTransformGizmo : public Component
  {
  public:
    typedef ObjectTransformGizmo ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    GizmoBasis GetBasis();
    
    void SetBasis(const GizmoBasis& value);
    
    GizmoPivot GetPivot();
    
    void SetPivot(const GizmoPivot& value);
    
    void AddObject(const Zilch::Handle& __0, bool __1);
    
    void RemoveObject(const Zilch::Handle& __0, bool __1);
    
    void ClearObjects();
    
    // If set, this Gizmo will add operations for all modifications to cogs.
    void SetOperationQueue(OperationQueue* opQueue);
    
    // Toggle between local / world.
    void ToggleCoordinateMode();
    
    int GetObjectCount();
    
    Zilch::Handle GetObjectAtIndex(int index);
    
    unsigned char mValue[144];
    
  protected:
    ObjectTransformGizmo(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ObjectTransformGizmo);
  };
  
  class ObjectTranslateGizmo : public ObjectTransformGizmo
  {
  public:
    typedef ObjectTranslateGizmo ZilchSelf;
    typedef ObjectTransformGizmo ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetDuplicateOnCtrlDrag();
    
    void SetDuplicateOnCtrlDrag(bool value);
    
    unsigned char mValue[16];
    
  protected:
    ObjectTranslateGizmo(Zilch::NoType none) : ObjectTransformGizmo(none) {}
    ZilchNoCopy(ObjectTranslateGizmo);
  };
  
  class ObjectScaleGizmo : public ObjectTransformGizmo
  {
  public:
    typedef ObjectScaleGizmo ZilchSelf;
    typedef ObjectTransformGizmo ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetAffectTranslation();
    
    void SetAffectTranslation(bool value);
    
    unsigned char mValue[16];
    
  protected:
    ObjectScaleGizmo(Zilch::NoType none) : ObjectTransformGizmo(none) {}
    ZilchNoCopy(ObjectScaleGizmo);
  };
  
  class ObjectRotateGizmo : public ObjectTransformGizmo
  {
  public:
    typedef ObjectRotateGizmo ZilchSelf;
    typedef ObjectTransformGizmo ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetAffectTranslation();
    
    void SetAffectTranslation(bool value);
    
    unsigned char mValue[8];
    
  protected:
    ObjectRotateGizmo(Zilch::NoType none) : ObjectTransformGizmo(none) {}
    ZilchNoCopy(ObjectRotateGizmo);
  };
  
  class RotationBasisGizmoMetaTransform : public MetaTransform
  {
  public:
    typedef RotationBasisGizmoMetaTransform ZilchSelf;
    typedef MetaTransform ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    RotationBasisGizmoMetaTransform(Zilch::NoType none) : MetaTransform(none) {}
    ZilchNoCopy(RotationBasisGizmoMetaTransform);
  };
  
  class RotationBasisGizmoInitializationEvent : public ObjectEvent
  {
  public:
    typedef RotationBasisGizmoInitializationEvent ZilchSelf;
    typedef ObjectEvent ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetIntData();
    
    void SetIntData(int value);
    
    unsigned char mValue[8];
    
  protected:
    RotationBasisGizmoInitializationEvent(Zilch::NoType none) : ObjectEvent(none) {}
    ZilchNoCopy(RotationBasisGizmoInitializationEvent);
  };
  
  class RotationBasisGizmo : public Component
  {
  public:
    typedef RotationBasisGizmo ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    void ActivateAsGizmo();
    
    Zilch::Quaternion GetWorldRotation();
    
    void SetWorldRotation(const Zilch::Quaternion& value);
    
    Zilch::String GetXAxisName();
    
    void SetXAxisName(const Zilch::String& value);
    
    Zilch::String GetYAxisName();
    
    void SetYAxisName(const Zilch::String& value);
    
    Zilch::String GetZAxisName();
    
    void SetZAxisName(const Zilch::String& value);
    
    unsigned char mValue[64];
    
  protected:
    RotationBasisGizmo(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(RotationBasisGizmo);
  };
  
  class OrientationBasisGizmo : public Component
  {
  public:
    typedef OrientationBasisGizmo ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    OrientationBasisGizmo(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(OrientationBasisGizmo);
  };
  
  class PhysicsCarWheelBasisGizmo : public Component
  {
  public:
    typedef PhysicsCarWheelBasisGizmo ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    PhysicsCarWheelBasisGizmo(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(PhysicsCarWheelBasisGizmo);
  };
  
  class RevoluteBasisGizmo : public Component
  {
  public:
    typedef RevoluteBasisGizmo ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[48];
    
  protected:
    RevoluteBasisGizmo(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(RevoluteBasisGizmo);
  };
  
  class ResourceEditors : public Object
  {
  public:
    typedef ResourceEditors ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    ResourceEditors(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(ResourceEditors);
  };
  
  class SpritePreview : public Composite
  {
  public:
    typedef SpritePreview ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[64];
    
  protected:
    SpritePreview(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(SpritePreview);
  };
  
  class SpriteSourceEditor : public Composite
  {
  public:
    typedef SpriteSourceEditor ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetSpriteName();
    
    void SetSpriteName(const Zilch::String& value);
    
    SpriteOrigin GetOrigin();
    
    void SetOrigin(const SpriteOrigin& value);
    
    float GetOriginX();
    
    void SetOriginX(float value);
    
    float GetOriginY();
    
    void SetOriginY(float value);
    
    bool GetLooping();
    
    void SetLooping(bool value);
    
    SpriteSampling GetSampling();
    
    void SetSampling(const SpriteSampling& value);
    
    float GetFrameRate();
    
    void SetFrameRate(float value);
    
    float GetPixelsPerUnit();
    
    void SetPixelsPerUnit(float value);
    
    SpriteFill GetSpriteFill();
    
    void SetSpriteFill(const SpriteFill& value);
    
    int GetLeft();
    
    void SetLeft(int value);
    
    int GetRight();
    
    void SetRight(int value);
    
    int GetTop();
    
    void SetTop(int value);
    
    int GetBottom();
    
    void SetBottom(int value);
    
    int GetCurrentFrame();
    
    void SetCurrentFrame(int value);
    
    bool GetPreviewAnimation();
    
    void SetPreviewAnimation(bool value);
    
    unsigned char mValue[480];
    
  protected:
    SpriteSourceEditor(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(SpriteSourceEditor);
  };
  
  class MultiConvexMeshPoint : public Widget
  {
  public:
    typedef MultiConvexMeshPoint ZilchSelf;
    typedef Widget ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    MultiConvexMeshPoint(Zilch::NoType none) : Widget(none) {}
    ZilchNoCopy(MultiConvexMeshPoint);
  };
  
  // Structure bound to the property view for the main editor. Contains the different settings that the user can modify.
  class MultiConvexMeshPropertyViewInfo : public EventObject
  {
  public:
    typedef MultiConvexMeshPropertyViewInfo ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetMeshThickness();
    
    void SetMeshThickness(float value);
    
    Zilch::HandleOf<SpriteSource> GetSpriteSource();
    
    void SetSpriteSource(SpriteSource* value);
    
    Zilch::Real4 GetClearColor();
    
    void SetClearColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetOuterContourColor();
    
    void SetOuterContourColor(const Zilch::Real4& value);
    
    MultiConvexMeshDrawMode GetDrawMode();
    
    void SetDrawMode(const MultiConvexMeshDrawMode& value);
    
    // Resets the points of the mesh to an approximation for the current sprite.
    void AutoCompute();
    
    MultiConvexMeshAutoComputeMode GetAutoComputeMode();
    
    void SetAutoComputeMode(const MultiConvexMeshAutoComputeMode& value);
    
    float GetSurfaceLevelThreshold();
    
    void SetSurfaceLevelThreshold(float value);
    
    MultiConvexMeshAutoComputeMethod GetAutoComputeMethod();
    
    void SetAutoComputeMethod(const MultiConvexMeshAutoComputeMethod& value);
    
    float GetSimplificationThreshold();
    
    void SetSimplificationThreshold(float value);
    
    unsigned char mValue[128];
    
  protected:
    MultiConvexMeshPropertyViewInfo(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(MultiConvexMeshPropertyViewInfo);
  };
  
  class MultiConvexMeshEditor : public Composite
  {
  public:
    typedef MultiConvexMeshEditor ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[1008];
    
  protected:
    MultiConvexMeshEditor(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(MultiConvexMeshEditor);
  };
  
  class HeightMapDebugDrawer : public Component
  {
  public:
    typedef HeightMapDebugDrawer ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetDrawTriangles();
    
    void SetDrawTriangles(bool value);
    
    float GetDrawOffset();
    
    void SetDrawOffset(float value);
    
    unsigned char mValue[24];
    
  protected:
    HeightMapDebugDrawer(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(HeightMapDebugDrawer);
  };
  
  class HeightMapAabbChecker : public Component
  {
  public:
    typedef HeightMapAabbChecker ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetDrawHeightMap();
    
    void SetDrawHeightMap(bool value);
    
    bool GetSkipNonCollidingCells();
    
    void SetSkipNonCollidingCells(bool value);
    
    Zilch::HandleOf<CogPath> GetHeightMapPath();
    
    void SetHeightMapPath(CogPath* value);
    
    unsigned char mValue[72];
    
  protected:
    HeightMapAabbChecker(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(HeightMapAabbChecker);
  };
  
  class SpriteSheetImporter : public Composite
  {
  public:
    typedef SpriteSheetImporter ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetName();
    
    void SetName(const Zilch::String& value);
    
    int GetFrameWidth();
    
    void SetFrameWidth(int value);
    
    int GetFrameHeight();
    
    void SetFrameHeight(int value);
    
    int GetFramesPerRow();
    
    void SetFramesPerRow(int value);
    
    int GetNumberOfRows();
    
    void SetNumberOfRows(int value);
    
    int GetOffsetX();
    
    void SetOffsetX(int value);
    
    int GetOffsetY();
    
    void SetOffsetY(int value);
    
    int GetSpacingX();
    
    void SetSpacingX(int value);
    
    int GetSpacingY();
    
    void SetSpacingY(int value);
    
    float GetFrameRate();
    
    void SetFrameRate(float value);
    
    int GetPixelsPerUnit();
    
    void SetPixelsPerUnit(int value);
    
    SpriteSampling GetSmoothing();
    
    void SetSmoothing(const SpriteSampling& value);
    
    bool GetCreatePalette();
    
    void SetCreatePalette(bool value);
    
    SpriteOrigin GetOrigin();
    
    void SetOrigin(const SpriteOrigin& value);
    
    bool GetPreviewAnimate();
    
    void SetPreviewAnimate(bool value);
    
    int GetPreviewFrame();
    
    void SetPreviewFrame(int value);
    
    ImportFrames GetImportFrames();
    
    void SetImportFrames(const ImportFrames& value);
    
    bool GetUseAlphaColorKey();
    
    void SetUseAlphaColorKey(bool value);
    
    Zilch::Real4 GetAlphaColor();
    
    void SetAlphaColor(const Zilch::Real4& value);
    
    int GetFrameCount();
    
    int GetSourceSizeX();
    
    void SetSourceSizeX(int value);
    
    int GetSourceSizeY();
    
    void SetSourceSizeY(int value);
    
    unsigned char mValue[360];
    
  protected:
    SpriteSheetImporter(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(SpriteSheetImporter);
  };
  
  class HeightMapImporter : public Composite
  {
  public:
    typedef HeightMapImporter ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::String GetName();
    
    void SetName(const Zilch::String& value);
    
    float GetBaseHeight();
    
    void SetBaseHeight(float value);
    
    float GetMinHeightRange();
    
    void SetMinHeightRange(float value);
    
    float GetMaxHeightRange();
    
    void SetMaxHeightRange(float value);
    
    int GetPatchSize();
    
    void SetPatchSize(int value);
    
    ImportMode GetImportMode();
    
    void SetImportMode(const ImportMode& value);
    
    int GetPatchColumns();
    
    void SetPatchColumns(int value);
    
    int GetPatchRows();
    
    void SetPatchRows(int value);
    
    unsigned char mValue[216];
    
  protected:
    HeightMapImporter(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(HeightMapImporter);
  };
  
  class Tool : public EventObject
  {
  public:
    typedef Tool ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    void BeginDrag(Viewport* p0);
    
    unsigned char mValue[16];
    
  protected:
    Tool(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(Tool);
  };
  
  class SelectTool : public Component
  {
  public:
    typedef SelectTool ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetArchetypeSelect();
    
    void SetArchetypeSelect(bool value);
    
    bool GetRootSelect();
    
    void SetRootSelect(bool value);
    
    bool GetSmartGroupSelect();
    
    void SetSmartGroupSelect(bool value);
    
    Zilch::HandleOf<Cog> RayCast(Viewport* viewport, const Zilch::Real2& mousePosition);
    
    static Zilch::HandleOf<Cog> SmartSelect(MetaSelection* selection, Cog* toSelect, bool rootSelect, bool archetypeSelect);
    
    Zilch::HandleOf<Raycaster> GetRaycaster();
    
    void SetRaycaster(Raycaster* value);
    
    unsigned char mValue[72];
    
  protected:
    SelectTool(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SelectTool);
  };
  
  class CreationTool : public Component
  {
  public:
    typedef CreationTool ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Placement GetPlacementMode();
    
    void SetPlacementMode(const Placement& value);
    
    Zilch::HandleOf<Archetype> GetObjectToSpawn();
    
    void SetObjectToSpawn(Archetype* value);
    
    Zilch::Real3 GetOffset();
    
    void SetOffset(const Zilch::Real3& value);
    
    bool GetSnapping();
    
    void SetSnapping(bool value);
    
    float GetSnapDistance();
    
    void SetSnapDistance(float value);
    
    float GetDepth();
    
    void SetDepth(float value);
    
    float GetDepthPlane();
    
    void SetDepthPlane(float value);
    
    Zilch::HandleOf<Raycaster> GetRaycaster();
    
    void SetRaycaster(Raycaster* value);
    
    unsigned char mValue[176];
    
  protected:
    CreationTool(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(CreationTool);
  };
  
  class ObjectConnectingTool : public Component
  {
  public:
    typedef ObjectConnectingTool ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    ObjectConnectingTool(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ObjectConnectingTool);
  };
  
  class ParentingTool : public ObjectConnectingTool
  {
  public:
    typedef ParentingTool ZilchSelf;
    typedef ObjectConnectingTool ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetMaintainPosition();
    
    void SetMaintainPosition(bool value);
    
    unsigned char mValue[8];
    
  protected:
    ParentingTool(Zilch::NoType none) : ObjectConnectingTool(none) {}
    ZilchNoCopy(ParentingTool);
  };
  
  // Allows Ui customization for Tools. This will be sent on the Tool every time it is activated.
  class ToolUiEvent : public Event
  {
  public:
    typedef ToolUiEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetNeedsPropertyGrid();
    
    void SetNeedsPropertyGrid(bool value);
    
    Zilch::HandleOf<Composite> GetParent();
    
    Zilch::HandleOf<Cog> GetSelectTool();
    
    unsigned char mValue[32];
    
  protected:
    ToolUiEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ToolUiEvent);
  };
  
  class ToolControl : public Composite
  {
  public:
    typedef ToolControl ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[448];
    
  protected:
    ToolControl(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(ToolControl);
  };
  
  class ManipulatorTool : public Component
  {
  public:
    typedef ManipulatorTool ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetSizeBoxCollider();
    
    void SetSizeBoxCollider(bool value);
    
    bool GetDuplicateOnCtrlDrag();
    
    void SetDuplicateOnCtrlDrag(bool value);
    
    IncludeMode GetIncludeMode();
    
    void SetIncludeMode(const IncludeMode& value);
    
    GizmoGrab GetGrabMode();
    
    void SetGrabMode(const GizmoGrab& value);
    
    bool GetSnapping();
    
    void SetSnapping(bool value);
    
    float GetSnapDistance();
    
    void SetSnapDistance(float value);
    
    Zilch::Real4 GetToolColor();
    
    void SetToolColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetHoverColor();
    
    void SetHoverColor(const Zilch::Real4& value);
    
    unsigned char mValue[272];
    
  protected:
    ManipulatorTool(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ManipulatorTool);
  };
  
  class GizmoCreator : public Component
  {
  public:
    typedef GizmoCreator ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<Archetype> GetGizmoArchetype();
    
    void SetGizmoArchetype(Archetype* value);
    
    unsigned char mValue[168];
    
  protected:
    GizmoCreator(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(GizmoCreator);
  };
  
  class ObjectTransformTool : public Component
  {
  public:
    typedef ObjectTransformTool ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    GizmoGrabMode GetGrab();
    
    void SetGrab(const GizmoGrabMode& value);
    
    GizmoBasis GetBasis();
    
    void SetBasis(const GizmoBasis& value);
    
    GizmoPivot GetPivot();
    
    void SetPivot(const GizmoPivot& value);
    
    unsigned char mValue[264];
    
  protected:
    ObjectTransformTool(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ObjectTransformTool);
  };
  
  class ObjectTranslateTool : public ObjectTransformTool
  {
  public:
    typedef ObjectTranslateTool ZilchSelf;
    typedef ObjectTransformTool ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetSnapping();
    
    void SetSnapping(bool value);
    
    float GetSnapDistance();
    
    void SetSnapDistance(float value);
    
    GizmoSnapMode GetSnapMode();
    
    void SetSnapMode(const GizmoSnapMode& value);
    
    unsigned char mValue[8];
    
  protected:
    ObjectTranslateTool(Zilch::NoType none) : ObjectTransformTool(none) {}
    ZilchNoCopy(ObjectTranslateTool);
  };
  
  class ObjectScaleTool : public ObjectTransformTool
  {
  public:
    typedef ObjectScaleTool ZilchSelf;
    typedef ObjectTransformTool ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetSnapping();
    
    void SetSnapping(bool value);
    
    float GetSnapDistance();
    
    void SetSnapDistance(float value);
    
    GizmoSnapMode GetSnapMode();
    
    void SetSnapMode(const GizmoSnapMode& value);
    
    bool GetAffectTranslation();
    
    void SetAffectTranslation(bool value);
    
    bool GetAffectScale();
    
    void SetAffectScale(bool value);
    
    unsigned char mValue[8];
    
  protected:
    ObjectScaleTool(Zilch::NoType none) : ObjectTransformTool(none) {}
    ZilchNoCopy(ObjectScaleTool);
  };
  
  class ObjectRotateTool : public ObjectTransformTool
  {
  public:
    typedef ObjectRotateTool ZilchSelf;
    typedef ObjectTransformTool ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetSnapping();
    
    void SetSnapping(bool value);
    
    float GetSnapAngle();
    
    void SetSnapAngle(float value);
    
    bool GetAffectTranslation();
    
    void SetAffectTranslation(bool value);
    
    bool GetAffectRotation();
    
    void SetAffectRotation(bool value);
    
    unsigned char mValue[8];
    
  protected:
    ObjectRotateTool(Zilch::NoType none) : ObjectTransformTool(none) {}
    ZilchNoCopy(ObjectRotateTool);
  };
  
  class JointTool : public ObjectConnectingTool
  {
  public:
    typedef JointTool ZilchSelf;
    typedef ObjectConnectingTool ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetOverrideLength();
    
    void SetOverrideLength(bool value);
    
    float GetLength();
    
    void SetLength(float value);
    
    float GetMaxImpulse();
    
    void SetMaxImpulse(float value);
    
    bool GetUseCenter();
    
    void SetUseCenter(bool value);
    
    bool GetAutoSnaps();
    
    void SetAutoSnaps(bool value);
    
    bool GetAttachToWorld();
    
    void SetAttachToWorld(bool value);
    
    bool GetAttachToCommonParent();
    
    void SetAttachToCommonParent(bool value);
    
    JointToolTypes GetJointType();
    
    void SetJointType(const JointToolTypes& value);
    
    unsigned char mValue[32];
    
  protected:
    JointTool(Zilch::NoType none) : ObjectConnectingTool(none) {}
    ZilchNoCopy(JointTool);
  };
  
  class SpringSubTool : public Object
  {
  public:
    typedef SpringSubTool ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    SpringSubTool(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(SpringSubTool);
  };
  
  class DragSelectSubTool : public SpringSubTool
  {
  public:
    typedef DragSelectSubTool ZilchSelf;
    typedef SpringSubTool ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[64];
    
  protected:
    DragSelectSubTool(Zilch::NoType none) : SpringSubTool(none) {}
    ZilchNoCopy(DragSelectSubTool);
  };
  
  class SelectorSpringSubTool : public DragSelectSubTool
  {
  public:
    typedef SelectorSpringSubTool ZilchSelf;
    typedef DragSelectSubTool ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[80];
    
  protected:
    SelectorSpringSubTool(Zilch::NoType none) : DragSelectSubTool(none) {}
    ZilchNoCopy(SelectorSpringSubTool);
  };
  
  class PointMassSelectorSubTool : public SelectorSpringSubTool
  {
  public:
    typedef PointMassSelectorSubTool ZilchSelf;
    typedef SelectorSpringSubTool ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PointMassSelectorSubTool(Zilch::NoType none) : SelectorSpringSubTool(none) {}
    ZilchNoCopy(PointMassSelectorSubTool);
  };
  
  class AnchoringSubTool : public PointMassSelectorSubTool
  {
  public:
    typedef AnchoringSubTool ZilchSelf;
    typedef PointMassSelectorSubTool ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetDrawAnchoredPoints();
    
    void SetDrawAnchoredPoints(bool value);
    
    Zilch::Real4 GetAnchoredPointMassColor();
    
    void SetAnchoredPointMassColor(const Zilch::Real4& value);
    
    unsigned char mValue[24];
    
  protected:
    AnchoringSubTool(Zilch::NoType none) : PointMassSelectorSubTool(none) {}
    ZilchNoCopy(AnchoringSubTool);
  };
  
  class PointSelectorSubTool : public PointMassSelectorSubTool
  {
  public:
    typedef PointSelectorSubTool ZilchSelf;
    typedef PointMassSelectorSubTool ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    PointSelectorSubTool(Zilch::NoType none) : PointMassSelectorSubTool(none) {}
    ZilchNoCopy(PointSelectorSubTool);
  };
  
  class SpringSelectorSubTool : public SelectorSpringSubTool
  {
  public:
    typedef SpringSelectorSubTool ZilchSelf;
    typedef SelectorSpringSubTool ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    SpringSelectorSubTool(Zilch::NoType none) : SelectorSpringSubTool(none) {}
    ZilchNoCopy(SpringSelectorSubTool);
  };
  
  class SpringCreatorSubTool : public SpringSubTool
  {
  public:
    typedef SpringCreatorSubTool ZilchSelf;
    typedef SpringSubTool ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[56];
    
  protected:
    SpringCreatorSubTool(Zilch::NoType none) : SpringSubTool(none) {}
    ZilchNoCopy(SpringCreatorSubTool);
  };
  
  class RopeCreatorSubTool : public SpringSubTool
  {
  public:
    typedef RopeCreatorSubTool ZilchSelf;
    typedef SpringSubTool ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetNumberOfLinks();
    
    void SetNumberOfLinks(int value);
    
    unsigned char mValue[56];
    
  protected:
    RopeCreatorSubTool(Zilch::NoType none) : SpringSubTool(none) {}
    ZilchNoCopy(RopeCreatorSubTool);
  };
  
  class SpringPointProxy : public EventObject
  {
  public:
    typedef SpringPointProxy ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetFixed();
    
    void SetFixed(bool value);
    
    Zilch::HandleOf<Cog> GetAnchor();
    
    void SetAnchor(Cog* value);
    
    float GetMass();
    
    void SetMass(float value);
    
    unsigned char mValue[8];
    
  protected:
    SpringPointProxy(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(SpringPointProxy);
  };
  
  class SpringPointProxyProperty : public Zilch::ReferenceType
  {
  public:
    typedef SpringPointProxyProperty ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    SpringPointProxyProperty(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SpringPointProxyProperty);
  };
  
  class SpringTools : public Component
  {
  public:
    typedef SpringTools ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    SpringSubTools GetCurrentSubToolType();
    
    void SetCurrentSubToolType(const SpringSubTools& value);
    
    Zilch::HandleOf<SpringSubTool> GetCurrentSubTool();
    
    void SetCurrentSubTool(SpringSubTool* value);
    
    unsigned char mValue[208];
    
  protected:
    SpringTools(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(SpringTools);
  };
  
  class HeightMapSubTool : public Object
  {
  public:
    typedef HeightMapSubTool ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    HeightMapSubTool(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(HeightMapSubTool);
  };
  
  class HeightManipulationTool : public HeightMapSubTool
  {
  public:
    typedef HeightManipulationTool ZilchSelf;
    typedef HeightMapSubTool ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetRadius();
    
    void SetRadius(float value);
    
    float GetFeatherRadius();
    
    void SetFeatherRadius(float value);
    
    unsigned char mValue[56];
    
  protected:
    HeightManipulationTool(Zilch::NoType none) : HeightMapSubTool(none) {}
    ZilchNoCopy(HeightManipulationTool);
  };
  
  class RaiseLowerTool : public HeightManipulationTool
  {
  public:
    typedef RaiseLowerTool ZilchSelf;
    typedef HeightManipulationTool ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetStrength();
    
    void SetStrength(float value);
    
    bool GetRelative();
    
    void SetRelative(bool value);
    
    unsigned char mValue[8];
    
  protected:
    RaiseLowerTool(Zilch::NoType none) : HeightManipulationTool(none) {}
    ZilchNoCopy(RaiseLowerTool);
  };
  
  class SmoothSharpenTool : public HeightManipulationTool
  {
  public:
    typedef SmoothSharpenTool ZilchSelf;
    typedef HeightManipulationTool ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetStrength();
    
    void SetStrength(float value);
    
    int GetUniformSamples();
    
    void SetUniformSamples(int value);
    
    int GetRandomSamples();
    
    void SetRandomSamples(int value);
    
    int GetRandomSampleDistance();
    
    void SetRandomSampleDistance(int value);
    
    bool GetAutoDetermineSamples();
    
    void SetAutoDetermineSamples(bool value);
    
    unsigned char mValue[24];
    
  protected:
    SmoothSharpenTool(Zilch::NoType none) : HeightManipulationTool(none) {}
    ZilchNoCopy(SmoothSharpenTool);
  };
  
  class FlattenTool : public HeightManipulationTool
  {
  public:
    typedef FlattenTool ZilchSelf;
    typedef HeightManipulationTool ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetHeight();
    
    void SetHeight(float value);
    
    Zilch::Real3 GetSlopeNormal();
    
    void SetSlopeNormal(const Zilch::Real3& value);
    
    bool GetSampleOnMouseDown();
    
    void SetSampleOnMouseDown(bool value);
    
    bool GetSampleNormal();
    
    void SetSampleNormal(bool value);
    
    unsigned char mValue[24];
    
  protected:
    FlattenTool(Zilch::NoType none) : HeightManipulationTool(none) {}
    ZilchNoCopy(FlattenTool);
  };
  
  class CreateDestroyTool : public HeightMapSubTool
  {
  public:
    typedef CreateDestroyTool ZilchSelf;
    typedef HeightMapSubTool ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetBaseHeight();
    
    void SetBaseHeight(float value);
    
    bool GetUsePerlinNoise();
    
    void SetUsePerlinNoise(bool value);
    
    float GetPerlinFrequency();
    
    void SetPerlinFrequency(float value);
    
    float GetPerlinAmplitude();
    
    void SetPerlinAmplitude(float value);
    
    unsigned char mValue[24];
    
  protected:
    CreateDestroyTool(Zilch::NoType none) : HeightMapSubTool(none) {}
    ZilchNoCopy(CreateDestroyTool);
  };
  
  class WeightPainterTool : public HeightMapSubTool
  {
  public:
    typedef WeightPainterTool ZilchSelf;
    typedef HeightMapSubTool ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    HeightTextureSelect GetTextureChannel();
    
    void SetTextureChannel(const HeightTextureSelect& value);
    
    float GetStrength();
    
    void SetStrength(float value);
    
    float GetRadius();
    
    void SetRadius(float value);
    
    float GetFeatherRadius();
    
    void SetFeatherRadius(float value);
    
    unsigned char mValue[32];
    
  protected:
    WeightPainterTool(Zilch::NoType none) : HeightMapSubTool(none) {}
    ZilchNoCopy(WeightPainterTool);
  };
  
  class HeightMapTool : public Component
  {
  public:
    typedef HeightMapTool ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetShowPatchIndex();
    
    void SetShowPatchIndex(bool value);
    
    bool GetShowCellIndex();
    
    void SetShowCellIndex(bool value);
    
    CellIndexType GetCellIndexType();
    
    void SetCellIndexType(const CellIndexType& value);
    
    HeightTool GetCurrentTool();
    
    void SetCurrentTool(const HeightTool& value);
    
    Zilch::HandleOf<HeightMapSubTool> GetSubTool();
    
    void SetSubTool(HeightMapSubTool* value);
    
    unsigned char mValue[184];
    
  protected:
    HeightMapTool(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(HeightMapTool);
  };
  
  class ViewportTextWidget : public Text
  {
  public:
    typedef ViewportTextWidget ZilchSelf;
    typedef Text ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    ViewportTextWidget(Zilch::NoType none) : Text(none) {}
    ZilchNoCopy(ViewportTextWidget);
  };
  
  class SpriteFrame : public Zilch::ReferenceType
  {
  public:
    typedef SpriteFrame ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[120];
    
  protected:
    SpriteFrame(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(SpriteFrame);
  };
  
  class TileEditor2DSubTool : public Object
  {
  public:
    typedef TileEditor2DSubTool ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[56];
    
  protected:
    TileEditor2DSubTool(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(TileEditor2DSubTool);
  };
  
  class TileEditor2DDrawTool : public TileEditor2DSubTool
  {
  public:
    typedef TileEditor2DDrawTool ZilchSelf;
    typedef TileEditor2DSubTool ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    TileEditor2DDrawTool(Zilch::NoType none) : TileEditor2DSubTool(none) {}
    ZilchNoCopy(TileEditor2DDrawTool);
  };
  
  class TileEditor2DSelectTool : public TileEditor2DSubTool
  {
  public:
    typedef TileEditor2DSelectTool ZilchSelf;
    typedef TileEditor2DSubTool ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[24];
    
  protected:
    TileEditor2DSelectTool(Zilch::NoType none) : TileEditor2DSubTool(none) {}
    ZilchNoCopy(TileEditor2DSelectTool);
  };
  
  class TileEditor2D : public Component
  {
  public:
    typedef TileEditor2D ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    TileEditor2DSubToolType GetToolType();
    
    void SetToolType(const TileEditor2DSubToolType& value);
    
    void CreateTileMap();
    
    bool GetShowCollision();
    
    void SetShowCollision(bool value);
    
    bool GetShowCoordinates();
    
    void SetShowCoordinates(bool value);
    
    bool GetShowArchetype();
    
    void SetShowArchetype(bool value);
    
    bool GetShowInvalid();
    
    void SetShowInvalid(bool value);
    
    bool GetShowGrid();
    
    void SetShowGrid(bool value);
    
    bool GetTiledDrawing();
    
    void SetTiledDrawing(bool value);
    
    unsigned char mValue[304];
    
  protected:
    TileEditor2D(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(TileEditor2D);
  };
  
  class TilePaletteSource : public Resource
  {
  public:
    typedef TilePaletteSource ZilchSelf;
    typedef Resource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[48];
    
  protected:
    TilePaletteSource(Zilch::NoType none) : Resource(none) {}
    ZilchNoCopy(TilePaletteSource);
  };
  
  class TilePaletteView : public Composite
  {
  public:
    typedef TilePaletteView ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<TilePaletteSource> GetTilePalette();
    
    void SetTilePalette(TilePaletteSource* value);
    
    Zilch::HandleOf<Archetype> GetArchetype();
    
    void SetArchetype(Archetype* value);
    
    Zilch::HandleOf<SpriteSource> GetSprite();
    
    void SetSprite(SpriteSource* value);
    
    Zilch::HandleOf<PhysicsMesh> GetCollision();
    
    void SetCollision(PhysicsMesh* value);
    
    bool GetMergeable();
    
    void SetMergeable(bool value);
    
    unsigned char mValue[416];
    
  protected:
    TilePaletteView(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(TilePaletteView);
  };
  
  class TilePaletteSprite : public Composite
  {
  public:
    typedef TilePaletteSprite ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[40];
    
  protected:
    TilePaletteSprite(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(TilePaletteSprite);
  };
  
  class ObjectView : public Composite
  {
  public:
    typedef ObjectView ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[160];
    
  protected:
    ObjectView(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(ObjectView);
  };
  
  class HotKeyEditor : public Composite
  {
  public:
    typedef HotKeyEditor ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[272];
    
  protected:
    HotKeyEditor(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(HotKeyEditor);
  };
  
  class LibraryView : public Composite
  {
  public:
    typedef LibraryView ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[264];
    
  protected:
    LibraryView(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(LibraryView);
  };
  
  class FloatingComposite : public Composite
  {
  public:
    typedef FloatingComposite ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[24];
    
  protected:
    FloatingComposite(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(FloatingComposite);
  };
  
  class PopUp : public FloatingComposite
  {
  public:
    typedef PopUp ZilchSelf;
    typedef FloatingComposite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[64];
    
  protected:
    PopUp(Zilch::NoType none) : FloatingComposite(none) {}
    ZilchNoCopy(PopUp);
  };
  
  class AutoCompletePopUp : public PopUp
  {
  public:
    typedef AutoCompletePopUp ZilchSelf;
    typedef PopUp ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[256];
    
  protected:
    AutoCompletePopUp(Zilch::NoType none) : PopUp(none) {}
    ZilchNoCopy(AutoCompletePopUp);
  };
  
  class CallTipPopUp : public PopUp
  {
  public:
    typedef CallTipPopUp ZilchSelf;
    typedef PopUp ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[88];
    
  protected:
    CallTipPopUp(Zilch::NoType none) : PopUp(none) {}
    ZilchNoCopy(CallTipPopUp);
  };
  
  class RemovedEntry : public Object
  {
  public:
    typedef RemovedEntry ZilchSelf;
    typedef Object ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    RemovedEntry(Zilch::NoType none) : Object(none) {}
    ZilchNoCopy(RemovedEntry);
  };
  
  class ConsoleUi : public TextEditor
  {
  public:
    typedef ConsoleUi ZilchSelf;
    typedef TextEditor ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[96];
    
  protected:
    ConsoleUi(Zilch::NoType none) : TextEditor(none) {}
    ZilchNoCopy(ConsoleUi);
  };
  
  class DocumentEditor : public TextEditor
  {
  public:
    typedef DocumentEditor ZilchSelf;
    typedef TextEditor ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    DocumentEditor(Zilch::NoType none) : TextEditor(none) {}
    ZilchNoCopy(DocumentEditor);
  };
  
  class AddResourceWindow : public Composite
  {
  public:
    typedef AddResourceWindow ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[88];
    
  protected:
    AddResourceWindow(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(AddResourceWindow);
  };
  
  class ResourceTypeSearch : public Composite
  {
  public:
    typedef ResourceTypeSearch ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[72];
    
  protected:
    ResourceTypeSearch(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(ResourceTypeSearch);
  };
  
  class ResourceTemplateSearch : public Composite
  {
  public:
    typedef ResourceTemplateSearch ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[72];
    
  protected:
    ResourceTemplateSearch(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(ResourceTemplateSearch);
  };
  
  class ResourceTemplateDisplay : public Composite
  {
  public:
    typedef ResourceTemplateDisplay ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[272];
    
  protected:
    ResourceTemplateDisplay(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(ResourceTemplateDisplay);
  };
  
  class TreeView : public Composite
  {
  public:
    typedef TreeView ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[288];
    
  protected:
    TreeView(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(TreeView);
  };
  
  class TreeRow : public Composite
  {
  public:
    typedef TreeRow ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[208];
    
  protected:
    TreeRow(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(TreeRow);
  };
  
  class PropertyWidget : public Composite
  {
  public:
    typedef PropertyWidget ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[80];
    
  protected:
    PropertyWidget(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(PropertyWidget);
  };
  
  class PropertyWidgetObject : public PropertyWidget
  {
  public:
    typedef PropertyWidgetObject ZilchSelf;
    typedef PropertyWidget ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[456];
    
  protected:
    PropertyWidgetObject(Zilch::NoType none) : PropertyWidget(none) {}
    ZilchNoCopy(PropertyWidgetObject);
  };
  
  class AddObjectWidget : public PropertyWidget
  {
  public:
    typedef AddObjectWidget ZilchSelf;
    typedef PropertyWidget ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[264];
    
  protected:
    AddObjectWidget(Zilch::NoType none) : PropertyWidget(none) {}
    ZilchNoCopy(AddObjectWidget);
  };
  
  class UiLegacyToolTip : public Zilch::ReferenceType
  {
  public:
    typedef UiLegacyToolTip ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    void SetPlacement(CameraViewport* p0, const Rectangle& p1);
    
    void SetPriority(const IndicatorSide& p0, const IndicatorSide& p1, const IndicatorSide& p2, const IndicatorSide& p3);
    
    void SetPadding(const Thickness& value);
    
    void SetColorScheme(const ToolTipColorScheme& p0);
    
    void SetBackgroundColor(const Zilch::Real4& value);
    
    void SetBorderColor(const Zilch::Real4& value);
    
    void ClearText();
    
    void AddText(const Zilch::String& p0, const Zilch::Real4& p1);
    
    unsigned char mValue[136];
    
  protected:
    UiLegacyToolTip(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(UiLegacyToolTip);
  };
  
  class RenderGroupHierarchies : public Composite
  {
  public:
    typedef RenderGroupHierarchies ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[16];
    
  protected:
    RenderGroupHierarchies(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(RenderGroupHierarchies);
  };
  
  class DirectProperty : public PropertyWidget
  {
  public:
    typedef DirectProperty ZilchSelf;
    typedef PropertyWidget ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[112];
    
  protected:
    DirectProperty(Zilch::NoType none) : PropertyWidget(none) {}
    ZilchNoCopy(DirectProperty);
  };
  
  class AnimationEditorData : public EventObject
  {
  public:
    typedef AnimationEditorData ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[120];
    
  protected:
    AnimationEditorData(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(AnimationEditorData);
  };
  
  class AnimationSettings : public Zilch::ReferenceType
  {
  public:
    typedef AnimationSettings ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    int GetEditFps();
    
    void SetEditFps(int value);
    
    TimeDisplay GetTimeDisplay();
    
    void SetTimeDisplay(const TimeDisplay& value);
    
    bool GetSnappingX();
    
    void SetSnappingX(bool value);
    
    bool GetSnappingY();
    
    void SetSnappingY(bool value);
    
    bool GetAutoKey();
    
    void SetAutoKey(bool value);
    
    bool GetAutoFocus();
    
    void SetAutoFocus(bool value);
    
    bool GetOnionSkinning();
    
    void SetOnionSkinning(bool value);
    
    float GetPlaybackSpeed();
    
    void SetPlaybackSpeed(float value);
    
    int GetPreviewMode();
    
    void SetPreviewMode(int value);
    
    unsigned char mValue[32];
    
  protected:
    AnimationSettings(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(AnimationSettings);
  };
  
  class AnimationTrackView : public Composite
  {
  public:
    typedef AnimationTrackView ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[104];
    
  protected:
    AnimationTrackView(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(AnimationTrackView);
  };
  
  class AnimationEditor : public Composite
  {
  public:
    typedef AnimationEditor ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[528];
    
  protected:
    AnimationEditor(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(AnimationEditor);
  };
  
  class StressTestDialog : public Composite
  {
  public:
    typedef StressTestDialog ZilchSelf;
    typedef Composite ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[368];
    
  protected:
    StressTestDialog(Zilch::NoType none) : Composite(none) {}
    ZilchNoCopy(StressTestDialog);
  };
  
  class UiWidgetRange : public Zilch::ReferenceType
  {
  public:
    typedef UiWidgetRange ZilchSelf;
    typedef Zilch::ReferenceType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<UiWidgetRange> GetAll();
    
    Zilch::HandleOf<UiWidget> GetCurrent();
    
    bool GetIsNotEmpty();
    
    bool GetIsEmpty();
    
    void MoveNext();
    
    unsigned char mValue[16];
    
  protected:
    UiWidgetRange(Zilch::NoType none) : Zilch::ReferenceType(none) {}
    ZilchNoCopy(UiWidgetRange);
  };
  
  class UiSizePolicy : public Zilch::Enum
  {
  public:
    typedef UiSizePolicy ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static UiSizePolicy GetAuto();
    
    static UiSizePolicy GetFixed();
    
    static UiSizePolicy GetFlex();
    
    UiSizePolicy();
  };
  
  class UiVerticalAlignment : public Zilch::Enum
  {
  public:
    typedef UiVerticalAlignment ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static UiVerticalAlignment GetBottom();
    
    static UiVerticalAlignment GetCenter();
    
    static UiVerticalAlignment GetTop();
    
    UiVerticalAlignment();
  };
  
  class UiHorizontalAlignment : public Zilch::Enum
  {
  public:
    typedef UiHorizontalAlignment ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static UiHorizontalAlignment GetLeft();
    
    static UiHorizontalAlignment GetCenter();
    
    static UiHorizontalAlignment GetRight();
    
    UiHorizontalAlignment();
  };
  
  class UiDockMode : public Zilch::Enum
  {
  public:
    typedef UiDockMode ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static UiDockMode GetLeft();
    
    static UiDockMode GetTop();
    
    static UiDockMode GetRight();
    
    static UiDockMode GetBottom();
    
    UiDockMode();
  };
  
  class UiFocusDirection : public Zilch::Enum
  {
  public:
    typedef UiFocusDirection ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static UiFocusDirection GetForward();
    
    static UiFocusDirection GetBackward();
    
    UiFocusDirection();
  };
  
  class UiStackLayoutDirection : public Zilch::Enum
  {
  public:
    typedef UiStackLayoutDirection ZilchSelf;
    typedef Zilch::Enum ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static UiStackLayoutDirection GetTopToBottom();
    
    static UiStackLayoutDirection GetBottomToTop();
    
    static UiStackLayoutDirection GetLeftToRight();
    
    static UiStackLayoutDirection GetRightToLeft();
    
    UiStackLayoutDirection();
  };
  
  class UiFocusEvent : public Event
  {
  public:
    typedef UiFocusEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<UiWidget> GetReceivedFocus();
    
    Zilch::HandleOf<UiWidget> GetLostFocus();
    
    unsigned char mValue[120];
    
  protected:
    UiFocusEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(UiFocusEvent);
  };
  
  class UiTransformUpdateEvent : public Event
  {
  public:
    typedef UiTransformUpdateEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<UiRootWidget> GetRootWidget();
    
    unsigned char mValue[8];
    
  protected:
    UiTransformUpdateEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(UiTransformUpdateEvent);
  };
  
  class UiWidgetCastResultsRange : public Zilch::ValueType
  {
  public:
    typedef UiWidgetCastResultsRange ZilchSelf;
    typedef Zilch::ValueType ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    // Range Interface.
    bool Empty();
    
    Zilch::HandleOf<UiWidget> Front();
    
    void PopFront();
    
    int Size();
    
    unsigned char mValue[40];
    UiWidgetCastResultsRange();
  };
  
  class UiWidgetComponentHierarchy : public Component
  {
  public:
    typedef UiWidgetComponentHierarchy ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::HandleOf<UiWidget> GetPreviousSibling();
    
    Zilch::HandleOf<UiWidget> GetNextSibling();
    
    Zilch::HandleOf<UiWidget> GetLastDirectChild();
    
    Zilch::HandleOf<UiWidget> GetLastDeepestChild();
    
    Zilch::HandleOf<UiWidget> GetNextInHierarchyOrder();
    
    Zilch::HandleOf<UiWidget> GetPreviousInHierarchyOrder();
    
    Zilch::HandleOf<UiWidget> GetParent();
    
    Zilch::HandleOf<UiWidget> GetRoot();
    
    int GetChildCount();
    
    Zilch::HandleOf<UiWidgetRange> GetChildren();
    
    bool IsDescendantOf(UiWidget* __0);
    
    bool IsAncestorOf(UiWidget* __0);
    
    unsigned char mValue[40];
    
  protected:
    UiWidgetComponentHierarchy(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(UiWidgetComponentHierarchy);
  };
  
  class UiWidget : public UiWidgetComponentHierarchy
  {
  public:
    typedef UiWidget ZilchSelf;
    typedef UiWidgetComponentHierarchy ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    bool GetActive();
    
    void SetActive(bool value);
    
    bool GetVisible();
    
    void SetVisible(bool value);
    
    bool GetInteractive();
    
    void SetInteractive(bool value);
    
    bool GetOnTop();
    
    void SetOnTop(bool value);
    
    Zilch::Real2 GetLocalTranslation();
    
    void SetLocalTranslation(const Zilch::Real2& value);
    
    Zilch::Real2 GetWorldTranslation();
    
    void SetWorldTranslation(const Zilch::Real2& value);
    
    Zilch::Real2 GetSize();
    
    void SetSize(const Zilch::Real2& value);
    
    Rectangle GetLocalRectangle();
    
    void SetLocalRectangle(const Rectangle& value);
    
    Rectangle GetWorldRectangle();
    
    void SetWorldRectangle(const Rectangle& value);
    
    void SetLocalLocation(const Location& location, const Zilch::Real2& localTranslation);
    
    void SetWorldLocation(const Location& location, const Zilch::Real2& worldTranslation);
    
    // Lets the Widget system know that this object has been modified and needs to be re-laid out.
    void MarkAsNeedsUpdate();
    
    Zilch::Real2 GetLocalTopLeft();
    
    void SetLocalTopLeft(const Zilch::Real2& value);
    
    Zilch::Real2 GetWorldTopLeft();
    
    void SetWorldTopLeft(const Zilch::Real2& value);
    
    Zilch::Real2 GetLocalTopCenter();
    
    void SetLocalTopCenter(const Zilch::Real2& value);
    
    Zilch::Real2 GetWorldTopCenter();
    
    void SetWorldTopCenter(const Zilch::Real2& value);
    
    Zilch::Real2 GetLocalTopRight();
    
    void SetLocalTopRight(const Zilch::Real2& value);
    
    Zilch::Real2 GetWorldTopRight();
    
    void SetWorldTopRight(const Zilch::Real2& value);
    
    Zilch::Real2 GetLocalCenterLeft();
    
    void SetLocalCenterLeft(const Zilch::Real2& value);
    
    Zilch::Real2 GetWorldCenterLeft();
    
    void SetWorldCenterLeft(const Zilch::Real2& value);
    
    Zilch::Real2 GetLocalCenter();
    
    void SetLocalCenter(const Zilch::Real2& value);
    
    Zilch::Real2 GetWorldCenter();
    
    void SetWorldCenter(const Zilch::Real2& value);
    
    Zilch::Real2 GetLocalCenterRight();
    
    void SetLocalCenterRight(const Zilch::Real2& value);
    
    Zilch::Real2 GetWorldCenterRight();
    
    void SetWorldCenterRight(const Zilch::Real2& value);
    
    Zilch::Real2 GetLocalBottomLeft();
    
    void SetLocalBottomLeft(const Zilch::Real2& value);
    
    Zilch::Real2 GetWorldBottomLeft();
    
    void SetWorldBottomLeft(const Zilch::Real2& value);
    
    Zilch::Real2 GetLocalBottomCenter();
    
    void SetLocalBottomCenter(const Zilch::Real2& value);
    
    Zilch::Real2 GetWorldBottomCenter();
    
    void SetWorldBottomCenter(const Zilch::Real2& value);
    
    Zilch::Real2 GetLocalBottomRight();
    
    void SetLocalBottomRight(const Zilch::Real2& value);
    
    Zilch::Real2 GetWorldBottomRight();
    
    void SetWorldBottomRight(const Zilch::Real2& value);
    
    float GetLocalTop();
    
    void SetLocalTop(float value);
    
    float GetWorldTop();
    
    void SetWorldTop(float value);
    
    float GetLocalRight();
    
    void SetLocalRight(float value);
    
    float GetWorldRight();
    
    void SetWorldRight(float value);
    
    float GetLocalBottom();
    
    void SetLocalBottom(float value);
    
    float GetWorldBottom();
    
    void SetWorldBottom(float value);
    
    float GetLocalLeft();
    
    void SetLocalLeft(float value);
    
    float GetWorldLeft();
    
    void SetWorldLeft(float value);
    
    Zilch::Real2 GetAbsoluteMinSize();
    
    void SetAbsoluteMinSize(const Zilch::Real2& value);
    
    Zilch::Real4 GetLocalColor();
    
    void SetLocalColor(const Zilch::Real4& value);
    
    Zilch::Real4 GetHierarchyColor();
    
    void SetHierarchyColor(const Zilch::Real4& value);
    
    bool GetClipChildren();
    
    void SetClipChildren(bool value);
    
    bool GetInLayout();
    
    void SetInLayout(bool value);
    
    UiSizePolicy GetSizePolicyX();
    
    void SetSizePolicyX(const UiSizePolicy& value);
    
    UiSizePolicy GetSizePolicyY();
    
    void SetSizePolicyY(const UiSizePolicy& value);
    
    Zilch::Real2 GetFlexSize();
    
    void SetFlexSize(const Zilch::Real2& value);
    
    UiVerticalAlignment GetVerticalAlignment();
    
    void SetVerticalAlignment(const UiVerticalAlignment& value);
    
    UiHorizontalAlignment GetHorizontalAlignment();
    
    void SetHorizontalAlignment(const UiHorizontalAlignment& value);
    
    float GetMarginLeft();
    
    void SetMarginLeft(float value);
    
    float GetMarginTop();
    
    void SetMarginTop(float value);
    
    float GetMarginRight();
    
    void SetMarginRight(float value);
    
    float GetMarginBottom();
    
    void SetMarginBottom(float value);
    
    UiDockMode GetDockMode();
    
    void SetDockMode(const UiDockMode& value);
    
    bool GetCanTakeFocus();
    
    void SetCanTakeFocus(bool value);
    
    bool GetMouseOver();
    
    bool GetMouseOverHierarchy();
    
    bool GetHasFocus();
    
    bool GetHierarchyHasFocus();
    
    Zilch::HandleOf<UiRootWidget> GetRoot();
    
    void SizeToContents();
    
    // Focus control.
    void TakeFocus();
    
    // Gives focus back to the root widget.
    void LoseFocus();
    
    // Changes focus to the next applicable widget in the direction based on the key pressed in the given keyboard event.
    bool TabJump(KeyboardEvent* e);
    
    // Changes focus to the next applicable widget in the given direction.
    void TabJumpDirection(const UiFocusDirection& direction);
    
    // Transforms a local point into world space.
    Zilch::Real2 TransformPoint(const Zilch::Real2& localPosition);
    
    // Transforms a world point into this Widget's local space. Note, this is not the same space as LocalTranslation. LocalTranslation is in this Widget's parent space.
    Zilch::Real2 TransformPointInverse(const Zilch::Real2& worldPosition);
    
    // Finds the Widget at the given point. All Widgets bellow and including the 'ignore' widget will not be included. The ignore was added for trying to find the widget underneath a dragging window. The window is directly under the mouse, so we want to ignore it.
    Zilch::HandleOf<UiWidget> CastPoint(const Zilch::Real2& worldPoint, UiWidget* ignore, bool interactiveOnly);
    
    UiWidgetCastResultsRange CastRect(const Rectangle& worldRect, UiWidget* ignore, bool interactiveOnly);
    
    // Handles the updating of this Widget and the child Widgets. Once called, it will update the internal TransformUpdateState.
    void Update(UiTransformUpdateEvent* e);
    
    unsigned char mValue[112];
    
  protected:
    UiWidget(Zilch::NoType none) : UiWidgetComponentHierarchy(none) {}
    ZilchNoCopy(UiWidget);
  };
  
  class UiRootWidget : public UiWidget
  {
  public:
    typedef UiRootWidget ZilchSelf;
    typedef UiWidget ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetMouseHoverTime();
    
    void SetMouseHoverTime(float value);
    
    float GetMouseHoldTime();
    
    void SetMouseHoldTime(float value);
    
    float GetDepthSeparation();
    
    void SetDepthSeparation(float value);
    
    Zilch::HandleOf<Cog> GetDebugSelected();
    
    void SetDebugSelected(Cog* value);
    
    bool GetDebugMouseInteraction();
    
    void SetDebugMouseInteraction(bool value);
    
    Zilch::HandleOf<UiWidget> GetFocusWidget();
    
    void SetFocusWidget(UiWidget* value);
    
    Zilch::HandleOf<UiWidget> GetMouseOverWidget();
    
    Zilch::HandleOf<UiWidget> GetMouseDownWidget();
    
    // Updates all widgets and layouts that need to be updated. This should be called right before rendering.
    void Update();
    
    // Renders the Ui to the given color render target. The depth render target must have stencil.
    void Render(RenderTasksEvent* e, RenderTarget* color, RenderTarget* depth, MaterialBlock* renderPass);
    
    unsigned char mValue[1792];
    
  protected:
    UiRootWidget(Zilch::NoType none) : UiWidget(none) {}
    ZilchNoCopy(UiRootWidget);
  };
  
  // Layouts are in charge of calling UpdateTransform on all children, regardless of whether or not they ignore layouts.
  class UiLayout : public Component
  {
  public:
    typedef UiLayout ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    float GetPaddingLeft();
    
    void SetPaddingLeft(float value);
    
    float GetPaddingTop();
    
    void SetPaddingTop(float value);
    
    float GetPaddingRight();
    
    void SetPaddingRight(float value);
    
    float GetPaddingBottom();
    
    void SetPaddingBottom(float value);
    
    // Calling this will set a breakpoint before the layout is done.
    void Debug();
    
    unsigned char mValue[32];
    
  protected:
    UiLayout(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(UiLayout);
  };
  
  class UiStackLayout : public UiLayout
  {
  public:
    typedef UiStackLayout ZilchSelf;
    typedef UiLayout ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    UiStackLayoutDirection GetStackDirection();
    
    void SetStackDirection(const UiStackLayoutDirection& value);
    
    Zilch::Real2 GetSpacing();
    
    void SetSpacing(const Zilch::Real2& value);
    
    unsigned char mValue[16];
    
  protected:
    UiStackLayout(Zilch::NoType none) : UiLayout(none) {}
    ZilchNoCopy(UiStackLayout);
  };
  
  class UiFillLayout : public UiLayout
  {
  public:
    typedef UiFillLayout ZilchSelf;
    typedef UiLayout ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    static void FillToParent(UiWidget* child);
    
    static void FillToRectangle(const Rectangle& rect, UiWidget* widget);
    
    
  protected:
    UiFillLayout(Zilch::NoType none) : UiLayout(none) {}
    ZilchNoCopy(UiFillLayout);
  };
  
  class UiDockLayout : public UiLayout
  {
  public:
    typedef UiDockLayout ZilchSelf;
    typedef UiLayout ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    Zilch::Real2 GetSpacing();
    
    void SetSpacing(const Zilch::Real2& value);
    
    unsigned char mValue[8];
    
  protected:
    UiDockLayout(Zilch::NoType none) : UiLayout(none) {}
    ZilchNoCopy(UiDockLayout);
  };
  
  // A base class for all Zilch components defined in script.
  class ZilchComponent : public Component
  {
  public:
    typedef ZilchComponent ZilchSelf;
    typedef Component ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    ZilchComponent();
    
    ZilchComponent(Zilch::NoType none) : Component(none) {}
    ZilchNoCopy(ZilchComponent);
  };
  
  class ZilchEvent : public Event
  {
  public:
    typedef ZilchEvent ZilchSelf;
    typedef Event ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    ZilchEvent();
    
    ZilchEvent(Zilch::NoType none) : Event(none) {}
    ZilchNoCopy(ZilchEvent);
  };
  
  class ZilchObject : public EventObject
  {
  public:
    typedef ZilchObject ZilchSelf;
    typedef EventObject ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    void DispatchEvent(const Zilch::String& p0, Event* p1);
    
    unsigned char mValue[8];
    
  protected:
    ZilchObject();
    
    ZilchObject(Zilch::NoType none) : EventObject(none) {}
    ZilchNoCopy(ZilchObject);
  };
  
  // Zilch script file Resource.
  class ZilchScript : public ZilchDocumentResource
  {
  public:
    typedef ZilchScript ZilchSelf;
    typedef ZilchDocumentResource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    
  protected:
    ZilchScript(Zilch::NoType none) : ZilchDocumentResource(none) {}
    ZilchNoCopy(ZilchScript);
  };
  
  class ZilchPluginSource : public DataResource
  {
  public:
    typedef ZilchPluginSource ZilchSelf;
    typedef DataResource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    void OpenIde();
    
    void OpenDirectory();
    
    void CopyPluginDependencies();
    
    void CompileDebug();
    
    void CompileRelease();
    
    void Clean();
    
    void InstallIdeTools();
    
    unsigned char mValue[16];
    
  protected:
    ZilchPluginSource(Zilch::NoType none) : DataResource(none) {}
    ZilchNoCopy(ZilchPluginSource);
  };
  
  class ZilchPluginLibrary : public ZilchLibraryResource
  {
  public:
    typedef ZilchPluginLibrary ZilchSelf;
    typedef ZilchLibraryResource ZilchBase;
    Zilch::BoundType* ZilchGetDerivedType() const { return ZilchTypeId(ZilchSelf)->GetBindingVirtualTypeFromInstance(this); }
    
    unsigned char mValue[8];
    
  protected:
    ZilchPluginLibrary(Zilch::NoType none) : ZilchLibraryResource(none) {}
    ZilchNoCopy(ZilchPluginLibrary);
  };
}

bool HookUpZeroEngine(Zilch::BuildEvent* event);

#endif

namespace ZeroEngine                                                       
{                                                                          
  template <typename ClassType>                                            
  void Connect                                                             
  (                                                                        
    ZeroEngine::Object* sender,                                            
    const Zilch::String& eventName,                                        
    const Zilch::String& functionName,                                     
    ClassType* receiver                                                    
  )                                                                        
  {                                                                        
    Zilch::BoundType* type = ZilchTypeId(ClassType);                       
    Zilch::FunctionArray* instanceFunctions =                              
      type->InstanceFunctions.FindPointer(functionName);                   
    ReturnIf(instanceFunctions == nullptr || instanceFunctions->Empty(),,  
      "In %s making an event connection to %s we could "                 
      "not find a function by the name of %s",                           
      type->Name.c_str(), eventName.c_str(), functionName.c_str());        
                                                                           
    Zilch::Delegate delegate;                                              
    delegate.ThisHandle = Zilch::Handle((::byte*)receiver, type);            
    delegate.BoundFunction = (*instanceFunctions)[0];                      
    ZeroEngine::Zero::Connect(sender, eventName, delegate);                
  }                                                                        
}                                                                          
#define ZeroConnectThisTo(Sender, EventName, FunctionName)               \
  ::ZeroEngine::Connect(Sender, EventName, FunctionName, this);            
namespace ZeroEngine
{
  extern const Zilch::String GroupAttribute;
  extern const Zilch::String RangeAttribute;
  extern const Zilch::String RenamedFromAttribute;
  extern const Zilch::String PropertyAttribute;
  extern const Zilch::String ToolAttribute;
  extern const Zilch::String ResourcePropertyAttribute;
  extern const Zilch::String RuntimeCloneAttribute;
  extern const Zilch::String OverrideAttribute;
  extern const Zilch::String RunInEditorAttribute;
  extern const Zilch::String TagsAttribute;
  extern const Zilch::String EditableAttribute;
  extern const Zilch::String NetPeerIdAttribute;
  extern const Zilch::String ComponentInterfaceAttribute;
  extern const Zilch::String LocalModificationOverrideAttribute;
  extern const Zilch::String GizmoAttribute;
  extern const Zilch::String InternalAttribute;
  extern const Zilch::String DependencyAttribute;
  extern const Zilch::String CommandAttribute;
  extern const Zilch::String NetPropertyAttribute;
  extern const Zilch::String VirtualAttribute;
  extern const Zilch::String SerializeAttribute;
  extern const Zilch::String StaticAttribute;
  extern const Zilch::String SerializedAttribute;
  extern const Zilch::String ShortcutAttribute;
  extern const Zilch::String ShaderInputAttribute;
  extern const Zilch::String DisplayAttribute;
  extern const Zilch::String SliderAttribute;
}

