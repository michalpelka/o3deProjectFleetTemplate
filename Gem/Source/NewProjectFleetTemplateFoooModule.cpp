
#include <AzCore/Memory/SystemAllocator.h>
#include <AzCore/Module/Module.h>

#include "NewProjectFleetTemplateFoooSystemComponent.h"

namespace NewProjectFleetTemplateFooo
{
    class NewProjectFleetTemplateFoooModule
        : public AZ::Module
    {
    public:
        AZ_RTTI(NewProjectFleetTemplateFoooModule, "{0AB317C8-776B-48BB-A63E-622CA9568B25}", AZ::Module);
        AZ_CLASS_ALLOCATOR(NewProjectFleetTemplateFoooModule, AZ::SystemAllocator, 0);

        NewProjectFleetTemplateFoooModule()
            : AZ::Module()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            m_descriptors.insert(m_descriptors.end(), {
                NewProjectFleetTemplateFoooSystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList{
                azrtti_typeid<NewProjectFleetTemplateFoooSystemComponent>(),
            };
        }
    };
}// namespace NewProjectFleetTemplateFooo

AZ_DECLARE_MODULE_CLASS(Gem_NewProjectFleetTemplateFooo, NewProjectFleetTemplateFooo::NewProjectFleetTemplateFoooModule)
