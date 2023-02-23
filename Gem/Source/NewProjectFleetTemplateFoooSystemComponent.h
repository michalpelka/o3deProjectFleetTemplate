
#pragma once

#include <AzCore/Component/Component.h>

#include <NewProjectFleetTemplateFooo/NewProjectFleetTemplateFoooBus.h>

namespace NewProjectFleetTemplateFooo
{
    class NewProjectFleetTemplateFoooSystemComponent
        : public AZ::Component
        , protected NewProjectFleetTemplateFoooRequestBus::Handler
    {
    public:
        AZ_COMPONENT(NewProjectFleetTemplateFoooSystemComponent, "{B8794DFF-877B-4FE3-B268-2C6090259157}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

        NewProjectFleetTemplateFoooSystemComponent();
        ~NewProjectFleetTemplateFoooSystemComponent();

    protected:
        ////////////////////////////////////////////////////////////////////////
        // NewProjectFleetTemplateFoooRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
