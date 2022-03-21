#ifndef __VULKAN_PRIVATE_EXTENSIONS_H__
#define __VULKAN_PRIVATE_EXTENSIONS_H__

#define VK_EXT_shader_module_identifier 1
#define VK_EXT_SHADER_MODULE_IDENTIFIER_SPEC_VERSION 1
#define VK_EXT_SHADER_MODULE_IDENTIFIER_EXTENSION_NAME "VK_EXT_shader_module_identifier"
typedef struct VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           shaderModuleIdentifier;
} VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT;

typedef struct VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    uint8_t            shaderModuleIdentifierAlgorithmUUID[VK_UUID_SIZE];
    uint32_t           shaderModuleIdentifierMaxSize;
} VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT;

typedef struct VkPipelineShaderStageModuleIdentifierCreateInfoEXT {
    VkStructureType    sType;
    const void*        pNext;
    uint32_t           identifierSize;
    const uint8_t*     pIdentifier;
} VkPipelineShaderStageModuleIdentifierCreateInfoEXT;

typedef VkResult (VKAPI_PTR *PFN_vkGetShaderModuleIdentifierEXT)(VkDevice device, VkShaderModule shaderModule, uint32_t* pIdentifierSize, uint8_t* pIdentifier);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkGetShaderModuleIdentifierEXT(
        VkDevice                                    device,
        VkShaderModule                              shaderModule,
        uint32_t*                                   pIdentifierSize,
        uint8_t*                                    pIdentifier);
#endif

#define VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT ((VkStructureType)1000462000)
#define VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT ((VkStructureType)1000462001)
#define VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT ((VkStructureType)1000462002)

#endif
