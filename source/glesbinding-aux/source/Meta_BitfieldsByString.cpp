
#include "Meta_Maps.h"

#include <glesbinding/gles/bitfield.h>


using namespace gles;


namespace glesbinding { namespace aux
{


const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_0{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_A =
{
    { "GL_ALL_BARRIER_BITS", static_cast<GLbitfield>(MemoryBarrierMask::GL_ALL_BARRIER_BITS) },
    { "GL_ALL_SHADER_BITS", static_cast<GLbitfield>(UseProgramStageMask::GL_ALL_SHADER_BITS) },
    { "GL_ALL_SHADER_BITS_EXT", static_cast<GLbitfield>(UseProgramStageMask::GL_ALL_SHADER_BITS_EXT) },
    { "GL_ATOMIC_COUNTER_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_ATOMIC_COUNTER_BARRIER_BIT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_B =
{
    { "GL_BOLD_BIT_NV", static_cast<GLbitfield>(PathFontStyle::GL_BOLD_BIT_NV) },
    { "GL_BUFFER_UPDATE_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_BUFFER_UPDATE_BARRIER_BIT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_C =
{
    { "GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT_EXT) },
    { "GL_CLIENT_STORAGE_BIT_EXT", static_cast<GLbitfield>(BufferStorageMask::GL_CLIENT_STORAGE_BIT_EXT) },
    { "GL_COLOR_BUFFER_BIT", static_cast<GLbitfield>(AttribMask::GL_COLOR_BUFFER_BIT) },
    { "GL_COMMAND_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_COMMAND_BARRIER_BIT) },
    { "GL_COMPUTE_SHADER_BIT", static_cast<GLbitfield>(UseProgramStageMask::GL_COMPUTE_SHADER_BIT) },
    { "GL_CONTEXT_FLAG_DEBUG_BIT", static_cast<GLbitfield>(ContextFlagMask::GL_CONTEXT_FLAG_DEBUG_BIT) },
    { "GL_CONTEXT_FLAG_DEBUG_BIT_KHR", static_cast<GLbitfield>(ContextFlagMask::GL_CONTEXT_FLAG_DEBUG_BIT_KHR) },
    { "GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR", static_cast<GLbitfield>(ContextFlagMask::GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR) },
    { "GL_CONTEXT_FLAG_PROTECTED_CONTENT_BIT_EXT", static_cast<GLbitfield>(ContextFlagMask::GL_CONTEXT_FLAG_PROTECTED_CONTENT_BIT_EXT) },
    { "GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT", static_cast<GLbitfield>(ContextFlagMask::GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT) },
    { "GL_COVERAGE_BUFFER_BIT_NV", static_cast<GLbitfield>(ClearBufferMask::GL_COVERAGE_BUFFER_BIT_NV) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_D =
{
    { "GL_DEPTH_BUFFER_BIT", static_cast<GLbitfield>(AttribMask::GL_DEPTH_BUFFER_BIT) },
    { "GL_DYNAMIC_STORAGE_BIT_EXT", static_cast<GLbitfield>(BufferStorageMask::GL_DYNAMIC_STORAGE_BIT_EXT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_E =
{
    { "GL_ELEMENT_ARRAY_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_ELEMENT_ARRAY_BARRIER_BIT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_F =
{
    { "GL_FONT_ASCENDER_BIT_NV", static_cast<GLbitfield>(PathMetricMask::GL_FONT_ASCENDER_BIT_NV) },
    { "GL_FONT_DESCENDER_BIT_NV", static_cast<GLbitfield>(PathMetricMask::GL_FONT_DESCENDER_BIT_NV) },
    { "GL_FONT_HAS_KERNING_BIT_NV", static_cast<GLbitfield>(PathMetricMask::GL_FONT_HAS_KERNING_BIT_NV) },
    { "GL_FONT_HEIGHT_BIT_NV", static_cast<GLbitfield>(PathMetricMask::GL_FONT_HEIGHT_BIT_NV) },
    { "GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV", static_cast<GLbitfield>(PathMetricMask::GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV) },
    { "GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV", static_cast<GLbitfield>(PathMetricMask::GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV) },
    { "GL_FONT_NUM_GLYPH_INDICES_BIT_NV", static_cast<GLbitfield>(PathMetricMask::GL_FONT_NUM_GLYPH_INDICES_BIT_NV) },
    { "GL_FONT_UNDERLINE_POSITION_BIT_NV", static_cast<GLbitfield>(PathMetricMask::GL_FONT_UNDERLINE_POSITION_BIT_NV) },
    { "GL_FONT_UNDERLINE_THICKNESS_BIT_NV", static_cast<GLbitfield>(PathMetricMask::GL_FONT_UNDERLINE_THICKNESS_BIT_NV) },
    { "GL_FONT_UNITS_PER_EM_BIT_NV", static_cast<GLbitfield>(PathMetricMask::GL_FONT_UNITS_PER_EM_BIT_NV) },
    { "GL_FONT_X_MAX_BOUNDS_BIT_NV", static_cast<GLbitfield>(PathMetricMask::GL_FONT_X_MAX_BOUNDS_BIT_NV) },
    { "GL_FONT_X_MIN_BOUNDS_BIT_NV", static_cast<GLbitfield>(PathMetricMask::GL_FONT_X_MIN_BOUNDS_BIT_NV) },
    { "GL_FONT_Y_MAX_BOUNDS_BIT_NV", static_cast<GLbitfield>(PathMetricMask::GL_FONT_Y_MAX_BOUNDS_BIT_NV) },
    { "GL_FONT_Y_MIN_BOUNDS_BIT_NV", static_cast<GLbitfield>(PathMetricMask::GL_FONT_Y_MIN_BOUNDS_BIT_NV) },
    { "GL_FRAGMENT_SHADER_BIT", static_cast<GLbitfield>(UseProgramStageMask::GL_FRAGMENT_SHADER_BIT) },
    { "GL_FRAGMENT_SHADER_BIT_EXT", static_cast<GLbitfield>(UseProgramStageMask::GL_FRAGMENT_SHADER_BIT_EXT) },
    { "GL_FRAMEBUFFER_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_FRAMEBUFFER_BARRIER_BIT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_G =
{
    { "GL_GEOMETRY_SHADER_BIT", static_cast<GLbitfield>(UseProgramStageMask::GL_GEOMETRY_SHADER_BIT) },
    { "GL_GEOMETRY_SHADER_BIT_EXT", static_cast<GLbitfield>(UseProgramStageMask::GL_GEOMETRY_SHADER_BIT_EXT) },
    { "GL_GEOMETRY_SHADER_BIT_OES", static_cast<GLbitfield>(UseProgramStageMask::GL_GEOMETRY_SHADER_BIT_OES) },
    { "GL_GLYPH_HAS_KERNING_BIT_NV", static_cast<GLbitfield>(PathMetricMask::GL_GLYPH_HAS_KERNING_BIT_NV) },
    { "GL_GLYPH_HEIGHT_BIT_NV", static_cast<GLbitfield>(PathMetricMask::GL_GLYPH_HEIGHT_BIT_NV) },
    { "GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV", static_cast<GLbitfield>(PathMetricMask::GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV) },
    { "GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV", static_cast<GLbitfield>(PathMetricMask::GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV) },
    { "GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV", static_cast<GLbitfield>(PathMetricMask::GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV) },
    { "GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV", static_cast<GLbitfield>(PathMetricMask::GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV) },
    { "GL_GLYPH_VERTICAL_BEARING_X_BIT_NV", static_cast<GLbitfield>(PathMetricMask::GL_GLYPH_VERTICAL_BEARING_X_BIT_NV) },
    { "GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV", static_cast<GLbitfield>(PathMetricMask::GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV) },
    { "GL_GLYPH_WIDTH_BIT_NV", static_cast<GLbitfield>(PathMetricMask::GL_GLYPH_WIDTH_BIT_NV) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_H{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_I =
{
    { "GL_ITALIC_BIT_NV", static_cast<GLbitfield>(PathFontStyle::GL_ITALIC_BIT_NV) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_J{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_K{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_L{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_M =
{
    { "GL_MAP_COHERENT_BIT_EXT", static_cast<GLbitfield>(BufferStorageMask::GL_MAP_COHERENT_BIT_EXT) },
    { "GL_MAP_FLUSH_EXPLICIT_BIT", static_cast<GLbitfield>(MapBufferAccessMask::GL_MAP_FLUSH_EXPLICIT_BIT) },
    { "GL_MAP_FLUSH_EXPLICIT_BIT_EXT", static_cast<GLbitfield>(MapBufferAccessMask::GL_MAP_FLUSH_EXPLICIT_BIT_EXT) },
    { "GL_MAP_INVALIDATE_BUFFER_BIT", static_cast<GLbitfield>(MapBufferAccessMask::GL_MAP_INVALIDATE_BUFFER_BIT) },
    { "GL_MAP_INVALIDATE_BUFFER_BIT_EXT", static_cast<GLbitfield>(MapBufferAccessMask::GL_MAP_INVALIDATE_BUFFER_BIT_EXT) },
    { "GL_MAP_INVALIDATE_RANGE_BIT", static_cast<GLbitfield>(MapBufferAccessMask::GL_MAP_INVALIDATE_RANGE_BIT) },
    { "GL_MAP_INVALIDATE_RANGE_BIT_EXT", static_cast<GLbitfield>(MapBufferAccessMask::GL_MAP_INVALIDATE_RANGE_BIT_EXT) },
    { "GL_MAP_PERSISTENT_BIT_EXT", static_cast<GLbitfield>(BufferStorageMask::GL_MAP_PERSISTENT_BIT_EXT) },
    { "GL_MAP_READ_BIT", static_cast<GLbitfield>(BufferStorageMask::GL_MAP_READ_BIT) },
    { "GL_MAP_READ_BIT_EXT", static_cast<GLbitfield>(BufferStorageMask::GL_MAP_READ_BIT_EXT) },
    { "GL_MAP_UNSYNCHRONIZED_BIT", static_cast<GLbitfield>(MapBufferAccessMask::GL_MAP_UNSYNCHRONIZED_BIT) },
    { "GL_MAP_UNSYNCHRONIZED_BIT_EXT", static_cast<GLbitfield>(MapBufferAccessMask::GL_MAP_UNSYNCHRONIZED_BIT_EXT) },
    { "GL_MAP_WRITE_BIT", static_cast<GLbitfield>(BufferStorageMask::GL_MAP_WRITE_BIT) },
    { "GL_MAP_WRITE_BIT_EXT", static_cast<GLbitfield>(BufferStorageMask::GL_MAP_WRITE_BIT_EXT) },
    { "GL_MESH_SHADER_BIT_NV", static_cast<GLbitfield>(UseProgramStageMask::GL_MESH_SHADER_BIT_NV) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_N =
{
    { "GL_NONE_BIT", static_cast<GLbitfield>(AttribMask::GL_NONE_BIT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_O{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_P =
{
    { "GL_PERFQUERY_GLOBAL_CONTEXT_INTEL", static_cast<GLbitfield>(PerformanceQueryCapsMaskINTEL::GL_PERFQUERY_GLOBAL_CONTEXT_INTEL) },
    { "GL_PERFQUERY_SINGLE_CONTEXT_INTEL", static_cast<GLbitfield>(PerformanceQueryCapsMaskINTEL::GL_PERFQUERY_SINGLE_CONTEXT_INTEL) },
    { "GL_PIXEL_BUFFER_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_PIXEL_BUFFER_BARRIER_BIT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_Q{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_R{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_S =
{
    { "GL_SHADER_IMAGE_ACCESS_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT) },
    { "GL_SHADER_STORAGE_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_SHADER_STORAGE_BARRIER_BIT) },
    { "GL_STENCIL_BUFFER_BIT", static_cast<GLbitfield>(AttribMask::GL_STENCIL_BUFFER_BIT) },
    { "GL_SYNC_FLUSH_COMMANDS_BIT", static_cast<GLbitfield>(SyncObjectMask::GL_SYNC_FLUSH_COMMANDS_BIT) },
    { "GL_SYNC_FLUSH_COMMANDS_BIT_APPLE", static_cast<GLbitfield>(SyncObjectMask::GL_SYNC_FLUSH_COMMANDS_BIT_APPLE) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_T =
{
    { "GL_TASK_SHADER_BIT_NV", static_cast<GLbitfield>(UseProgramStageMask::GL_TASK_SHADER_BIT_NV) },
    { "GL_TESS_CONTROL_SHADER_BIT", static_cast<GLbitfield>(UseProgramStageMask::GL_TESS_CONTROL_SHADER_BIT) },
    { "GL_TESS_CONTROL_SHADER_BIT_EXT", static_cast<GLbitfield>(UseProgramStageMask::GL_TESS_CONTROL_SHADER_BIT_EXT) },
    { "GL_TESS_CONTROL_SHADER_BIT_OES", static_cast<GLbitfield>(UseProgramStageMask::GL_TESS_CONTROL_SHADER_BIT_OES) },
    { "GL_TESS_EVALUATION_SHADER_BIT", static_cast<GLbitfield>(UseProgramStageMask::GL_TESS_EVALUATION_SHADER_BIT) },
    { "GL_TESS_EVALUATION_SHADER_BIT_EXT", static_cast<GLbitfield>(UseProgramStageMask::GL_TESS_EVALUATION_SHADER_BIT_EXT) },
    { "GL_TESS_EVALUATION_SHADER_BIT_OES", static_cast<GLbitfield>(UseProgramStageMask::GL_TESS_EVALUATION_SHADER_BIT_OES) },
    { "GL_TEXTURE_FETCH_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_TEXTURE_FETCH_BARRIER_BIT) },
    { "GL_TEXTURE_UPDATE_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_TEXTURE_UPDATE_BARRIER_BIT) },
    { "GL_TRANSFORM_FEEDBACK_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_TRANSFORM_FEEDBACK_BARRIER_BIT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_U =
{
    { "GL_UNIFORM_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_UNIFORM_BARRIER_BIT) },
    { "GL_UNUSED_BIT", static_cast<GLbitfield>(UnusedMask::GL_UNUSED_BIT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_V =
{
    { "GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT) },
    { "GL_VERTEX_SHADER_BIT", static_cast<GLbitfield>(UseProgramStageMask::GL_VERTEX_SHADER_BIT) },
    { "GL_VERTEX_SHADER_BIT_EXT", static_cast<GLbitfield>(UseProgramStageMask::GL_VERTEX_SHADER_BIT_EXT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_W{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_X{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_Y{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_Z{};

const std::array<std::unordered_map<std::string, gles::GLbitfield>, 27> Meta_BitfieldsByStringMaps =
{ {
    Meta_BitfieldsByString_0,
    Meta_BitfieldsByString_A,
    Meta_BitfieldsByString_B,
    Meta_BitfieldsByString_C,
    Meta_BitfieldsByString_D,
    Meta_BitfieldsByString_E,
    Meta_BitfieldsByString_F,
    Meta_BitfieldsByString_G,
    Meta_BitfieldsByString_H,
    Meta_BitfieldsByString_I,
    Meta_BitfieldsByString_J,
    Meta_BitfieldsByString_K,
    Meta_BitfieldsByString_L,
    Meta_BitfieldsByString_M,
    Meta_BitfieldsByString_N,
    Meta_BitfieldsByString_O,
    Meta_BitfieldsByString_P,
    Meta_BitfieldsByString_Q,
    Meta_BitfieldsByString_R,
    Meta_BitfieldsByString_S,
    Meta_BitfieldsByString_T,
    Meta_BitfieldsByString_U,
    Meta_BitfieldsByString_V,
    Meta_BitfieldsByString_W,
    Meta_BitfieldsByString_X,
    Meta_BitfieldsByString_Y,
    Meta_BitfieldsByString_Z
} };


} } // namespace glesbinding::aux