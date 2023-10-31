// MIT Licensed (see LICENSE.md).

#include "TestPluginPrecompiled.hpp"

#if defined(WelderCompilerMsvc)
#pragma optimize("", off)
#endif

bool HookUpCore(Zilch::BuildEvent* event)
{
  Zilch::NativeBindingList::SetBuildingLibraryForThisThread(true);
  Zilch::NameMangler mangler;
  
  {
    const char* libraryName = "Core";
    Zilch::BoundType* type = nullptr;
    Zilch::LibraryRef library = event->FindLibrary(libraryName);
    ReturnIf(library == nullptr, false, "Unable to find the library %s in the list of dependencies", libraryName);
    mangler.MangleLibrary(library);
    type = Zilch::PatchLibraryType< Zilch::Boolean >(library, "Boolean");
    type = Zilch::PatchLibraryType< Zilch::Boolean2 >(library, "Boolean2");
    type = Zilch::PatchLibraryType< Zilch::Boolean3 >(library, "Boolean3");
    type = Zilch::PatchLibraryType< Zilch::Boolean4 >(library, "Boolean4");
    type = Zilch::PatchLibraryType< Zilch::Byte >(library, "Byte");
    type = Zilch::PatchLibraryType< Zilch::Integer >(library, "Integer");
    type = Zilch::PatchLibraryType< Zilch::Integer2 >(library, "Integer2");
    type = Zilch::PatchLibraryType< Zilch::Integer3 >(library, "Integer3");
    type = Zilch::PatchLibraryType< Zilch::Integer4 >(library, "Integer4");
    type = Zilch::PatchLibraryType< Zilch::Real >(library, "Real");
    type = Zilch::PatchLibraryType< Zilch::Real2 >(library, "Real2");
    type = Zilch::PatchLibraryType< Zilch::Real3 >(library, "Real3");
    type = Zilch::PatchLibraryType< Zilch::Real4 >(library, "Real4");
    type = Zilch::PatchLibraryType< Zilch::Quaternion >(library, "Quaternion");
    type = Zilch::PatchLibraryType< Zilch::Real2x2 >(library, "Real2x2");
    type = Zilch::PatchLibraryType< Zilch::Real3x3 >(library, "Real3x3");
    type = Zilch::PatchLibraryType< Zilch::Real4x4 >(library, "Real4x4");
    type = Zilch::PatchLibraryType< Zilch::String >(library, "String");
    type = Zilch::PatchLibraryType< Zilch::DoubleReal >(library, "DoubleReal");
    type = Zilch::PatchLibraryType< Zilch::DoubleInteger >(library, "DoubleInteger");
    type = Zilch::PatchLibraryType< Zilch::Enum >(library, "Enum");
    type = Zilch::PatchLibraryType< Zilch::Library >(library, "Library");
    type = Zilch::PatchLibraryType< Zilch::ReflectionObject >(library, "ReflectionObject");
    type = Zilch::PatchLibraryType< Zilch::Type >(library, "Type");
    type = Zilch::PatchLibraryType< Zilch::AnyType >(library, "AnyType");
    type = Zilch::PatchLibraryType< Zilch::IndirectionType >(library, "IndirectionType");
    type = Zilch::PatchLibraryType< Zilch::DelegateType >(library, "DelegateType");
    type = Zilch::PatchLibraryType< Zilch::BoundType >(library, "BoundType");
    type = Zilch::PatchLibraryType< Zilch::DelegateParameter >(library, "DelegateParameter");
    type = Zilch::PatchLibraryType< Zilch::Members::Enum >(library, "Members");
    type = Zilch::PatchLibraryType< Zilch::FileMode::Enum >(library, "FileMode");
    type = Zilch::PatchLibraryType< Zilch::StreamCapabilities::Enum >(library, "StreamCapabilities");
    type = Zilch::PatchLibraryType< Zilch::StreamOrigin::Enum >(library, "StreamOrigin");
    type = Zilch::PatchLibraryType< Zilch::ProcessStartInfo >(library, "ProcessStartInfo");
    type = Zilch::PatchLibraryType< Zilch::Console >(library, "Console");
    type = Zilch::PatchLibraryType< Zilch::Exception >(library, "Exception");
    type = Zilch::PatchLibraryType< Zilch::EventHandler >(library, "EventHandler");
    type = Zilch::PatchLibraryType< Zilch::EventsClass >(library, "Events");
    type = Zilch::PatchLibraryType< Zilch::EventData >(library, "EventData");
    type = Zilch::PatchLibraryType< Zilch::ErrorEvent >(library, "ErrorEvent");
    type = Zilch::PatchLibraryType< Zilch::ExceptionEvent >(library, "ExceptionEvent");
    type = Zilch::PatchLibraryType< Zilch::ConsoleEvent >(library, "ConsoleEvent");
    type = Zilch::PatchLibraryType< Zilch::DebuggerEvent >(library, "DebuggerEvent");
    type = Zilch::PatchLibraryType< Zilch::DebuggerTextEvent >(library, "DebuggerTextEvent");
    type = Zilch::PatchLibraryType< Zilch::MemoryLeakEvent >(library, "MemoryLeakEvent");
    type = Zilch::PatchLibraryType< Zilch::OpcodeEvent >(library, "OpcodeEvent");
    type = Zilch::PatchLibraryType< Zilch::FatalErrorEvent >(library, "FatalErrorEvent");
    type = Zilch::PatchLibraryType< Zilch::BuildEvent >(library, "BuildEvent");
    type = Zilch::PatchLibraryType< Zilch::PluginEvent >(library, "PluginEvent");
    type = Zilch::PatchLibraryType< Zilch::ParseEvent >(library, "ParseEvent");
    type = Zilch::PatchLibraryType< Zilch::ExecutableState >(library, "ExecutableState");
    type = Zilch::PatchLibraryType< Zilch::FilePathClass >(library, "FilePath");
    type = Zilch::PatchLibraryType< Zilch::IStreamClass >(library, "IStream");
    type = Zilch::PatchLibraryType< Zilch::FileStreamClass >(library, "FileStream");
    type = Zilch::PatchLibraryType< Zilch::Member >(library, "Member");
    type = Zilch::PatchLibraryType< Zilch::Function >(library, "Function");
    type = Zilch::PatchLibraryType< Zilch::Property >(library, "Property");
    type = Zilch::PatchLibraryType< Zilch::GetterSetter >(library, "GetterSetter");
    type = Zilch::PatchLibraryType< Zilch::Field >(library, "Field");
    type = Zilch::PatchLibraryType< Zilch::Variable >(library, "Variable");
    type = Zilch::PatchLibraryType< Zilch::Random >(library, "Random");
    type = Zilch::PatchLibraryType< Zilch::IEncoding >(library, "IEncoding");
    type = Zilch::PatchLibraryType< Zilch::AsciiEncoding >(library, "AsciiEncoding");
    type = Zilch::PatchLibraryType< Zilch::Utf8Encoding >(library, "Utf8Encoding");
    type = Zilch::PatchLibraryType< Zilch::StringBuilderExtended >(library, "StringBuilder");
    type = Zilch::PatchLibraryType< Zilch::Rune >(library, "Rune");
    type = Zilch::PatchLibraryType< Zilch::RuneIterator >(library, "RuneIterator");
    type = Zilch::PatchLibraryType< Zilch::StringRangeExtended >(library, "StringRange");
    type = Zilch::PatchLibraryType< Zilch::StringSplitRangeExtended >(library, "StringSplitRange");
    type = Zilch::PatchLibraryType< Zilch::MultiPrimitive >(library, "MultiPrimitive");
    type = Zilch::PatchLibraryType< Zilch::Wrapper >(library, "Wrapper");
    type = Zilch::PatchLibraryType< Zilch::ColorClass >(library, "Color");
    type = Zilch::PatchLibraryType< Zilch::ColorsClass >(library, "Colors");
    type = Zilch::PatchLibraryType< Zilch::ParameterArray::range >(library, "DelegateParameterRange");
    type = Zilch::PatchLibraryType< Zilch::MemberRange<Zilch::Member> >(library, "MemberRange");
    type = Zilch::PatchLibraryType< Zilch::MemberRange<Zilch::Property> >(library, "PropertyRange");
    type = Zilch::PatchLibraryType< Zilch::MemberRange<Zilch::GetterSetter> >(library, "GetterSetterRange");
    type = Zilch::PatchLibraryType< Zilch::MemberRange<Zilch::Field> >(library, "FieldRange");
    type = Zilch::PatchLibraryType< Zilch::MemberRange<Zilch::Function> >(library, "FunctionRange");
    type = Zilch::PatchLibraryType< Zilch::ProcessClass >(library, "ProcessClass");
  }
  
  Zilch::NativeBindingList::SetBuildingLibraryForThisThread(false);
  
  return true;
}
