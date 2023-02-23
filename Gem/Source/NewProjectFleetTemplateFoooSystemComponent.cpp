
#include <AzCore/Serialization/SerializeContext.h>
#include <AzCore/Serialization/EditContext.h>
#include <AzCore/Serialization/EditContextConstants.inl>

#include "NewProjectFleetTemplateFoooSystemComponent.h"

namespace NewProjectFleetTemplateFooo
{
    void NewProjectFleetTemplateFoooSystemComponent::Reflect(AZ::ReflectContext* context)
    {
        if (AZ::SerializeContext* serialize = azrtti_cast<AZ::SerializeContext*>(context))
        {
            serialize->Class<NewProjectFleetTemplateFoooSystemComponent, AZ::Component>()
                ->Version(0)
                ;

            if (AZ::EditContext* ec = serialize->GetEditContext())
            {
                ec->Class<NewProjectFleetTemplateFoooSystemComponent>("NewProjectFleetTemplateFooo", "[Description of functionality provided by this System Component]")
                    ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                        ->Attribute(AZ::Edit::Attributes::AppearsInAddComponentMenu, AZ_CRC("System"))
                        ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ;
            }
        }
    }

    void NewProjectFleetTemplateFoooSystemComponent::GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided)
    {
        provided.push_back(AZ_CRC("NewProjectFleetTemplateFoooService"));
    }

    void NewProjectFleetTemplateFoooSystemComponent::GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible)
    {
        incompatible.push_back(AZ_CRC("NewProjectFleetTemplateFoooService"));
    }

    void NewProjectFleetTemplateFoooSystemComponent::GetRequiredServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& required)
    {
    }

    void NewProjectFleetTemplateFoooSystemComponent::GetDependentServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& dependent)
    {
    }

    NewProjectFleetTemplateFoooSystemComponent::NewProjectFleetTemplateFoooSystemComponent()
    {
        if (NewProjectFleetTemplateFoooInterface::Get() == nullptr)
        {
            NewProjectFleetTemplateFoooInterface::Register(this);
        }
    }

    NewProjectFleetTemplateFoooSystemComponent::~NewProjectFleetTemplateFoooSystemComponent()
    {
        if (NewProjectFleetTemplateFoooInterface::Get() == this)
        {
            NewProjectFleetTemplateFoooInterface::Unregister(this);
        }
    }

    void NewProjectFleetTemplateFoooSystemComponent::Init()
    {
    }

    void NewProjectFleetTemplateFoooSystemComponent::Activate()
    {
        NewProjectFleetTemplateFoooRequestBus::Handler::BusConnect();
    }

    void NewProjectFleetTemplateFoooSystemComponent::Deactivate()
    {
        NewProjectFleetTemplateFoooRequestBus::Handler::BusDisconnect();
    }
}
