
#pragma once

#include <AzCore/EBus/EBus.h>
#include <AzCore/Interface/Interface.h>

namespace NewProjectFleetTemplateFooo
{
    class NewProjectFleetTemplateFoooRequests
    {
    public:
        AZ_RTTI(NewProjectFleetTemplateFoooRequests, "{1A3C0443-4E99-40E6-858B-41789F0610D9}");
        virtual ~NewProjectFleetTemplateFoooRequests() = default;
        // Put your public methods here
    };

    class NewProjectFleetTemplateFoooBusTraits
        : public AZ::EBusTraits
    {
    public:
        //////////////////////////////////////////////////////////////////////////
        // EBusTraits overrides
        static constexpr AZ::EBusHandlerPolicy HandlerPolicy = AZ::EBusHandlerPolicy::Single;
        static constexpr AZ::EBusAddressPolicy AddressPolicy = AZ::EBusAddressPolicy::Single;
        //////////////////////////////////////////////////////////////////////////
    };

    using NewProjectFleetTemplateFoooRequestBus = AZ::EBus<NewProjectFleetTemplateFoooRequests, NewProjectFleetTemplateFoooBusTraits>;
    using NewProjectFleetTemplateFoooInterface = AZ::Interface<NewProjectFleetTemplateFoooRequests>;

} // namespace NewProjectFleetTemplateFooo
