#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class Warbelt_AK
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

class cfgVehicles
{
	class Vest_Base_F;
	class Vest_V_PlateCarrier_Kerry;
	class CPC_LBTBase_V: Vest_V_PlateCarrier_Kerry
	{
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC 5.45 [MC]";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		scope = 0;
		scopeCurator = 0;
		class TransportItems
		{
			class CPC_LBT
			{
				count = 1;
				name = "CPC_LBT";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_LBT_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC 5.45 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_LBT
			{
				count = 1;
				name = "CPC_LBT";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_LBTcoy_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC 5.45 [COY]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_LBTcoy
			{
				count = 1;
				name = "CPC_LBTcoy";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_LBTrgr_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC 5.45 [RGR]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_LBTrgr
			{
				count = 1;
				name = "CPC_LBTrgr";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_LBTgp_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC 5.45|VOG-25 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_LBTgp
			{
				count = 1;
				name = "CPC_LBTgp";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_LBTgpcoy_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC 5.45|VOG-25 [COY]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_LBTgpcoy
			{
				count = 1;
				name = "CPC_LBTgpcoy";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_LBTgprgr_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC 5.45|VOG-25 [RGR]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_LBTgprgr
			{
				count = 1;
				name = "CPC_LBTgprgr";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_103_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC 7.62 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_103
			{
				count = 1;
				name = "CPC_103";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_103coy_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC 7.62 [COY]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_103coy
			{
				count = 1;
				name = "CPC_103coy";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_103rgr_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC 7.62 [RGR]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_103rgr
			{
				count = 1;
				name = "CPC_103rgr";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_103gp_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC 7.62|VOG-25 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_103gp
			{
				count = 1;
				name = "CPC_103gp";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_103gpcoy_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC 7.62|VOG-25 [COY]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_103gpcoy
			{
				count = 1;
				name = "CPC_103gpcoy";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_103gprgr_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC 7.62|VOG-25 [RGR]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_103gprgr
			{
				count = 1;
				name = "CPC_103gprgr";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_PK_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC PKP [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_PK
			{
				count = 1;
				name = "CPC_PK";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_PKcoy_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC PKP [COY]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_PKcoy
			{
				count = 1;
				name = "CPC_PKcoy";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_PKrgr_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC PKP [RGR]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_PKrgr
			{
				count = 1;
				name = "CPC_PKrgr";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_belt_LBT_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC + Warbelt 5.45 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_belt_LBT
			{
				count = 1;
				name = "CPC_belt_LBT";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_belt_LBTcoy_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC + Warbelt 5.45 [COY]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_belt_LBTcoy
			{
				count = 1;
				name = "CPC_belt_LBTcoy";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_belt_LBTrgr_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC + Warbelt 5.45 [RGR]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_belt_LBTrgr
			{
				count = 1;
				name = "CPC_belt_LBTrgr";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_belt_LBTgp_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC + Warbelt 5.45|VOG-25 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_belt_LBTgp
			{
				count = 1;
				name = "CPC_belt_LBTgp";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_belt_LBTgpcoy_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC + Warbelt 5.45|VOG-25 [COY]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_belt_LBTgpcoy
			{
				count = 1;
				name = "CPC_belt_LBTgpcoy";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_belt_LBTgprgr_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC + Warbelt 5.45|VOG-25 [RGR]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_belt_LBTgprgr
			{
				count = 1;
				name = "CPC_belt_LBTgprgr";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_belt_762_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC + Warbelt 7.62 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_belt_762
			{
				count = 1;
				name = "CPC_belt_762";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_belt_762coy_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC + Warbelt 7.62 [COY]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_belt_762coy
			{
				count = 1;
				name = "CPC_belt_762coy";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_belt_762rgr_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC + Warbelt 7.62 [RGR]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_belt_762rgr
			{
				count = 1;
				name = "CPC_belt_762rgr";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_belt_762gp_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC + Warbelt 7.62|VOG-25 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_belt_762gp
			{
				count = 1;
				name = "CPC_belt_762gp";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_belt_762gpcoy_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC + Warbelt 7.62|VOG-25 [COY]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_belt_762gpcoy
			{
				count = 1;
				name = "CPC_belt_762gpcoy";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class CPC_belt_762gprgr_V: CPC_LBTBase_V
	{
		displayName = "Crye CPC + Warbelt 7.62|VOG-25 [RGR]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class CPC_belt_762gprgr
			{
				count = 1;
				name = "CPC_belt_762gprgr";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBTBase_V: Vest_V_PlateCarrier_Kerry
	{
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 5.45 [MC]";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		scope = 0;
		scopeCurator = 0;
		class TransportItems
		{
			class AK_LBT
			{
				count = 1;
				name = "AK_LBT";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBT_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 5.45 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBT
			{
				count = 1;
				name = "AK_LBT";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBTcoy_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 5.45 [COY]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBTcoy
			{
				count = 1;
				name = "AK_LBTcoy";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBTrg_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 5.45 [RGR]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBTrg
			{
				count = 1;
				name = "AK_LBTrg";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBTgp_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 5.45|VOG-25 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBTgp
			{
				count = 1;
				name = "AK_LBTgp";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBTgpcoy_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 5.45|VOG-25 [COY]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBTgpcoy
			{
				count = 1;
				name = "AK_LBTgpcoy";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBTgprg_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 5.45|VOG-25 [RGR]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBTgprg
			{
				count = 1;
				name = "AK_LBTgprg";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBT762_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 7.62 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBT762
			{
				count = 1;
				name = "AK_LBT762";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBT762coy_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 7.62 [COY]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBT762coy
			{
				count = 1;
				name = "AK_LBT762coy";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBT762rg_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 7.62 [RGR]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBT762rg
			{
				count = 1;
				name = "AK_LBT762rg";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBT762gp_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 7.62|VOG-25 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBT762gp
			{
				count = 1;
				name = "AK_LBT762gp";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBT762gpcoy_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 7.62|VOG-25 [COY]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBT762gpcoy
			{
				count = 1;
				name = "AK_LBT762gpcoy";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBT762gprg_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 7.62|VOG-25 [RGR]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBT762gprg
			{
				count = 1;
				name = "AK_LBT762gprg";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class SVD_LBT_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 SVD [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class SVD_LBT
			{
				count = 1;
				name = "SVD_LBT";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class SVD_LBTcoy_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 SVD [COY]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class SVD_LBTcoy
			{
				count = 1;
				name = "SVD_LBTcoy";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class SVD_LBTrg_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 SVD [RGR]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class SVD_LBTrg
			{
				count = 1;
				name = "SVD_LBTrg";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class SVD_LBT_belt_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 + Warbelt SVD [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class SVD_LBT_belt
			{
				count = 1;
				name = "SVD_LBT_belt";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class SVD_LBT_beltcoy_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 + Warbelt SVD [COY]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class SVD_LBT_beltcoy
			{
				count = 1;
				name = "SVD_LBT_beltcoy";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class SVD_LBT_beltrg_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 + Warbelt SVD [RGR]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class SVD_LBT_beltrg
			{
				count = 1;
				name = "SVD_LBT_beltrg";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class PK_LBT_belt_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 PKP [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class PK_LBT_belt
			{
				count = 1;
				name = "PK_LBT_belt";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class PK_LBT_beltcoy_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 PKP [COY]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class PK_LBT_beltcoy
			{
				count = 1;
				name = "PK_LBT_beltcoy";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class PK_LBT_beltrg_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 PKP [RGR]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class PK_LBT_beltrg
			{
				count = 1;
				name = "PK_LBT_beltrg";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBT_belt_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 + Warbelt 5.45 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBT_belt
			{
				count = 1;
				name = "AK_LBT_belt";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBT_beltcoy_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 + Warbelt 5.45 [COY]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBT_beltcoy
			{
				count = 1;
				name = "AK_LBT_beltcoy";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBT_beltrg_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 + Warbelt 5.45 [RGR]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBT_beltrg
			{
				count = 1;
				name = "AK_LBT_beltrg";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBT_beltgp_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 + Warbelt 5.45|VOG-25 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBT_beltgp
			{
				count = 1;
				name = "AK_LBT_beltgp";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBT_beltgpcoy_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 + Warbelt 5.45|VOG-25 [COY]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBT_beltgpcoy
			{
				count = 1;
				name = "AK_LBT_beltgpcoy";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBT_beltgprg_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 + Warbelt 5.45|VOG-25 [RGR]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBT_beltgprg
			{
				count = 1;
				name = "AK_LBT_beltgprg";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBT_belt762_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 + Warbelt 7.62 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBT_belt762
			{
				count = 1;
				name = "AK_LBT_belt762";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBT_belt762coy_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 + Warbelt 7.62 [COY]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBT_belt762coy
			{
				count = 1;
				name = "AK_LBT_belt762coy";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBT_belt762rg_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 + Warbelt 7.62 [RGR]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBT_belt762rg
			{
				count = 1;
				name = "AK_LBT_belt762rg";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBT_belt762gp_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 + Warbelt 7.62|VOG-25 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBT_belt762gp
			{
				count = 1;
				name = "AK_LBT_belt762gp";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBT_belt762gpcoy_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 + Warbelt 7.62|VOG-25 [COY]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBT_belt762gpcoy
			{
				count = 1;
				name = "AK_LBT_belt762gpcoy";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class AK_LBT_belt762gprg_V: AK_LBTBase_V
	{
		displayName = "LBT 6094 + Warbelt 7.62|VOG-25 [RGR]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class AK_LBT_belt762gprg
			{
				count = 1;
				name = "AK_LBT_belt762gprg";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class Vest_V_Rangemaster_belt;
	class WarbeltBase_V: Vest_V_Rangemaster_belt
	{
		author = "Sc0t29 & chazbotic";
		displayName = "Warbelt 5.45 [COY]";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		scope = 0;
		scopeCurator = 0;
		class TransportItems
		{
			class Warbelt_AK_1
			{
				count = 1;
				name = "Warbelt_AK_1";
			};
		};
		vehicleClass = "ItemsVests";
	};
};

class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class VestItem;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class CPC_LBT: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC 5.45 [MC]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_AK.p3d";
		hiddenSelections[] = {"camo6"};
		hiddenSelectionsTextures[] = {"warbelt\textures\gear_mc.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_AK.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo6"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_LBTcoy: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC 5.45 [COY]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_AK.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\cpc_coy.paa","warbelt\textures\gear_coy.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_AK.p3d";
			containerclass = "Supply120";
			mass = 15;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_LBTrgr: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC 5.45 [RGR]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_AK.p3d";
		hiddenSelections[] = {"camo","camo2","camo6","nade"};
		hiddenSelectionsTextures[] = {"warbelt\textures\cpc_rngr.paa","warbelt\textures\gear_olive.paa","warbelt\textures\gear_olive.paa","warbelt\textures\grenade_fde.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_AK.p3d";
			containerclass = "Supply120";
			mass = 15;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2","camo6","nade"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_LBTgp: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC 5.45|VOG-25 [MC]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_AKgp.p3d";
		hiddenSelections[] = {"camo6"};
		hiddenSelectionsTextures[] = {"warbelt\textures\gear_mc.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_AKgp.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo6"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_LBTgpcoy: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC 5.45|VOG-25 [COY]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_AKgp.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\cpc_coy.paa","warbelt\textures\gear_coy.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_AKgp.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_LBTgprgr: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC 5.45|VOG-25 [RGR]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_AKgp.p3d";
		hiddenSelections[] = {"camo","camo2","camo6"};
		hiddenSelectionsTextures[] = {"warbelt\textures\cpc_rngr.paa","warbelt\textures\gear_olive.paa","warbelt\textures\gear_olive.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_AKgp.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2","camo6"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_103: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC 7.62 [MC]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_AK103.p3d";
		hiddenSelections[] = {"camo6"};
		hiddenSelectionsTextures[] = {"warbelt\textures\gear_mc.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_AK103.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo6"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_103coy: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC 7.62 [COY]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_AK103.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\cpc_coy.paa","warbelt\textures\gear_coy.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_AK103.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_103rgr: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC 7.62 [RGR]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_AK103.p3d";
		hiddenSelections[] = {"camo","camo2","camo6","nade"};
		hiddenSelectionsTextures[] = {"warbelt\textures\cpc_rngr.paa","warbelt\textures\gear_olive.paa","warbelt\textures\gear_olive.paa","warbelt\textures\grenade_fde.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_AK103.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2","camo6","nade"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_103gp: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC 7.62|VOG-25 [MC]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_AK103gp.p3d";
		hiddenSelections[] = {"camo6"};
		hiddenSelectionsTextures[] = {"warbelt\textures\gear_mc.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_AK103gp.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo6"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_103gpcoy: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC 7.62|VOG-25 [COY]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_AK103gp.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\cpc_coy.paa","warbelt\textures\gear_coy.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_AK103gp.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_103gprgr: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC 7.62|VOG-25 [RGR]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_AK103gp.p3d";
		hiddenSelections[] = {"camo","camo2","camo6","nade"};
		hiddenSelectionsTextures[] = {"warbelt\textures\cpc_rngr.paa","warbelt\textures\gear_olive.paa","warbelt\textures\gear_olive.paa","warbelt\textures\grenade_fde.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_AK103gp.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2","camo6","nade"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_PK: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC PKP [MC]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_belt_PK.p3d";
		hiddenSelections[] = {"camo6","_gen2bb"};
		hiddenSelectionsTextures[] = {"warbelt\textures\gear_mc.paa","warbelt\textures\VSM_Gen2_BattleBeltMC.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_belt_PK.p3d";
			containerclass = "Supply150";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo6","_gen2bb"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_PKcoy: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC PKP [COY]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_belt_PK.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"warbelt\textures\cpc_coy.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_belt_PK.p3d";
			containerclass = "Supply150";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_PKrgr: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC PKP [RGR]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_belt_PK.p3d";
		hiddenSelections[] = {"camo","camo6","nade","_gen2bb","_1961aPouches","_vsm_jpc_pouches","korob"};
		hiddenSelectionsTextures[] = {"warbelt\textures\cpc_rngr.paa","warbelt\textures\gear_olive.paa","warbelt\textures\grenade_fde.paa","warbelt\textures\VSM_Gen2_BattleBelt_ranger.paa","warbelt\textures\VSM_LBT_1961a_olive.paa","warbelt\textures\VSM_JPC_pouches_olive.paa","warbelt\textures\vest1_olive.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_belt_PK.p3d";
			containerclass = "Supply150";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo6","nade","_gen2bb","_1961aPouches","_vsm_jpc_pouches","korob"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_belt_LBT: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC + Warbelt 5.45 [MC]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_belt_AK.p3d";
		hiddenSelections[] = {"camo6","_gen2bb"};
		hiddenSelectionsTextures[] = {"warbelt\textures\gear_mc.paa","warbelt\textures\VSM_Gen2_BattleBeltMC.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_belt_AK.p3d";
			containerclass = "Supply150";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo6","_gen2bb"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_belt_LBTcoy: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC + Warbelt 5.45 [COY]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_belt_AK.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\cpc_coy.paa","warbelt\textures\gear_coy.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_belt_AK.p3d";
			containerclass = "Supply150";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_belt_LBTrgr: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC + Warbelt 5.45 [RGR]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_belt_AK.p3d";
		hiddenSelections[] = {"camo","camo2","camo6","nade","_gen2bb","_1961apouches","_vsm_jpc_pouches"};
		hiddenSelectionsTextures[] = {"warbelt\textures\cpc_rngr.paa","warbelt\textures\gear_olive.paa","warbelt\textures\gear_olive.paa","warbelt\textures\grenade_fde.paa","warbelt\textures\VSM_Gen2_BattleBelt_ranger.paa","warbelt\textures\VSM_LBT_1961a_olive.paa","warbelt\textures\VSM_JPC_pouches_olive.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_belt_AK.p3d";
			containerclass = "Supply150";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2","camo6","nade","_gen2bb","_1961apouches","_vsm_jpc_pouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_belt_LBTgp: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC + Warbelt 5.45|VOG-25 [MC]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_belt_AKgp.p3d";
		hiddenSelections[] = {"camo6","_gen2bb"};
		hiddenSelectionsTextures[] = {"warbelt\textures\gear_mc.paa","warbelt\textures\VSM_Gen2_BattleBeltMC.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_belt_AKgp.p3d";
			containerclass = "Supply150";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo6","_gen2bb"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_belt_LBTgpcoy: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC + Warbelt 5.45|VOG-25 [COY]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_belt_AKgp.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\cpc_coy.paa","warbelt\textures\gear_coy.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_belt_AKgp.p3d";
			containerclass = "Supply150";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_belt_LBTgprgr: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC + Warbelt 5.45|VOG-25 [RGR]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_belt_AKgp.p3d";
		hiddenSelections[] = {"camo","camo2","camo6","nade","_gen2bb","_1961apouches","_vsm_jpc_pouches"};
		hiddenSelectionsTextures[] = {"warbelt\textures\cpc_rngr.paa","warbelt\textures\gear_olive.paa","warbelt\textures\gear_olive.paa","warbelt\textures\grenade_fde.paa","warbelt\textures\VSM_Gen2_BattleBelt_ranger.paa","warbelt\textures\VSM_LBT_1961a_olive.paa","warbelt\textures\VSM_JPC_pouches_olive.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_belt_AKgp.p3d";
			containerclass = "Supply150";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2","camo6","nade","_gen2bb","_1961apouches","_vsm_jpc_pouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_belt_762: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC + Warbelt 7.62 [MC]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_belt_AK762.p3d";
		hiddenSelections[] = {"camo6","_gen2bb"};
		hiddenSelectionsTextures[] = {"warbelt\textures\gear_mc.paa","warbelt\textures\VSM_Gen2_BattleBeltMC.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_belt_AK762.p3d";
			containerclass = "Supply150";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo6","_gen2bb"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_belt_762coy: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC + Warbelt 7.62 [COY]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_belt_AK762.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\cpc_coy.paa","warbelt\textures\gear_coy.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_belt_AK762.p3d";
			containerclass = "Supply150";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_belt_762rgr: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC + Warbelt 7.62 [RGR]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_belt_AK762.p3d";
		hiddenSelections[] = {"camo","camo2","camo6","nade","_gen2bb","_1961apouches","_vsm_jpc_pouches"};
		hiddenSelectionsTextures[] = {"warbelt\textures\cpc_rngr.paa","warbelt\textures\gear_olive.paa","warbelt\textures\gear_olive.paa","warbelt\textures\grenade_fde.paa","warbelt\textures\VSM_Gen2_BattleBelt_ranger.paa","warbelt\textures\VSM_LBT_1961a_olive.paa","warbelt\textures\VSM_JPC_pouches_olive.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_belt_AK762.p3d";
			containerclass = "Supply150";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2","camo6","nade","_gen2bb","_1961apouches","_vsm_jpc_pouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_belt_762gp: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC + Warbelt 7.62|VOG-25 [MC]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_belt_AK762gp.p3d";
		hiddenSelections[] = {"camo6","_gen2bb"};
		hiddenSelectionsTextures[] = {"warbelt\textures\gear_mc.paa","warbelt\textures\VSM_Gen2_BattleBeltMC.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_belt_AK762gp.p3d";
			containerclass = "Supply150";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo6","_gen2bb"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_belt_762gpcoy: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC + Warbelt 7.62|VOG-25 [COY]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_belt_AK762gp.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\cpc_coy.paa","warbelt\textures\gear_coy.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_belt_AK762gp.p3d";
			containerclass = "Supply150";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_belt_762gprgr: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Crye CPC + Warbelt 7.62|VOG-25 [RGR]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\CPC_belt_AK762gp.p3d";
		hiddenSelections[] = {"camo","camo2","camo6","nade","_gen2bb","_1961apouches","_vsm_jpc_pouches"};
		hiddenSelectionsTextures[] = {"warbelt\textures\cpc_rngr.paa","warbelt\textures\gear_olive.paa","warbelt\textures\gear_olive.paa","warbelt\textures\grenade_fde.paa","warbelt\textures\VSM_Gen2_BattleBelt_ranger.paa","warbelt\textures\VSM_LBT_1961a_olive.paa","warbelt\textures\VSM_JPC_pouches_olive.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\CPC_belt_AK762gp.p3d";
			containerclass = "Supply150";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2","camo6","nade","_gen2bb","_1961apouches","_vsm_jpc_pouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBT: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 5.45 [MC]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_AK.p3d";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\gear_mc.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_AK.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBTcoy: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 5.45 [COY]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_AK.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\lbt_coy.paa","warbelt\textures\gear_coy.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_AK.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBTrg: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 5.45 [RGR]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_AK.p3d";
		hiddenSelections[] = {"camo","camo2","nade"};
		hiddenSelectionsTextures[] = {"warbelt\textures\lbt_rg.paa","warbelt\textures\gear_olive.paa","warbelt\textures\grenade_fde.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_AK.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2","nade"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBTgp: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 5.45|VOG-25 [MC]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_AKgp.p3d";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\gear_mc.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_AKgp.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBTgpcoy: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 5.45|VOG-25 [COY]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_AKgp.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\lbt_coy.paa","warbelt\textures\gear_coy.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_AKgp.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBTgprg: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 5.45|VOG-25 [RGR]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_AKgp.p3d";
		hiddenSelections[] = {"camo","camo2","nade"};
		hiddenSelectionsTextures[] = {"warbelt\textures\lbt_rg.paa","warbelt\textures\gear_olive.paa","warbelt\textures\grenade_fde.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_AKgp.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2","nade"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBT762: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 7.62 [MC]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_AK762.p3d";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\gear_mc.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_AK762.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBT762coy: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 7.62 [COY]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_AK762.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\lbt_coy.paa","warbelt\textures\gear_coy.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_AK762.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBT762rg: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 7.62 [RGR]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_AK762.p3d";
		hiddenSelections[] = {"camo","camo2","nade"};
		hiddenSelectionsTextures[] = {"warbelt\textures\lbt_rg.paa","warbelt\textures\gear_olive.paa","warbelt\textures\grenade_fde.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_AK762.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2","nade"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBT762gp: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 7.62|VOG-25 [MC]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_AK762gp.p3d";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\gear_mc.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_AK762gp.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBT762gpcoy: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 7.62|VOG-25 [COY]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_AK762gp.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\lbt_coy.paa","warbelt\textures\gear_coy.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_AK762gp.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBT762gprg: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 7.62|VOG-25 [RGR]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_AK762gp.p3d";
		hiddenSelections[] = {"camo","camo2","nade"};
		hiddenSelectionsTextures[] = {"warbelt\textures\lbt_rg.paa","warbelt\textures\gear_olive.paa","warbelt\textures\grenade_fde.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_AK762gp.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2","nade"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class SVD_LBT: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 SVD [MC]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_SVD.p3d";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\gear_mc.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_SVD.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class SVD_LBTcoy: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 SVD [COY]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_SVD.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"warbelt\textures\lbt_coy.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_SVD.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class SVD_LBTrg: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 SVD [RGR]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_SVD.p3d";
		hiddenSelections[] = {"camo","camo2","nade"};
		hiddenSelectionsTextures[] = {"warbelt\textures\lbt_rg.paa","warbelt\textures\gear_olive.paa","warbelt\textures\grenade_fde.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_SVD.p3d";
			containerclass = "Supply120";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2","nade"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class SVD_LBT_belt: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 + Warbelt SVD [MC]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_belt_SVD.p3d";
		hiddenSelections[] = {"_Gen2BB","camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\VSM_Gen2_BattleBeltMC.paa","warbelt\textures\gear_mc.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_belt_SVD.p3d";
			containerclass = "Supply200";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"_Gen2BB","camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class SVD_LBT_beltcoy: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 + Warbelt SVD [COY]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_belt_SVD.p3d";
		hiddenSelections[] = {"camo","_Gen2BB","camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\lbt_coy.paa","warbelt\textures\vsm_gen2_battlebelt.paa","warbelt\textures\gear_coy.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_belt_SVD.p3d";
			containerclass = "Supply200";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","_Gen2BB","camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class SVD_LBT_beltrg: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 + Warbelt SVD [RGR]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_belt_SVD.p3d";
		hiddenSelections[] = {"camo","camo2","nade","_vsm_jpc_pouches"};
		hiddenSelectionsTextures[] = {"warbelt\textures\lbt_rg.paa","warbelt\textures\gear_olive.paa","warbelt\textures\grenade_fde.paa","warbelt\textures\VSM_JPC_pouches_olive.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_belt_SVD.p3d";
			containerclass = "Supply200";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2","nade","_vsm_jpc_pouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class PK_LBT_belt: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 PKP [MC]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_belt_PK.p3d";
		hiddenSelections[] = {"camo6","_Gen2BB"};
		hiddenSelectionsTextures[] = {"warbelt\textures\gear_mc.paa","warbelt\textures\VSM_Gen2_BattleBeltMC.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_belt_PK.p3d";
			containerclass = "Supply200";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo6","_Gen2BB"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class PK_LBT_beltcoy: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 PKP [COY]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_belt_PK.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"warbelt\textures\lbt_coy.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_belt_PK.p3d";
			containerclass = "Supply200";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class PK_LBT_beltrg: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 PKP [RGR]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_belt_PK.p3d";
		hiddenSelections[] = {"camo","camo6","nade","_vsm_jpc_pouches","_Gen2BB","korob"};
		hiddenSelectionsTextures[] = {"warbelt\textures\lbt_rg.paa","warbelt\textures\gear_olive.paa","warbelt\textures\grenade_fde.paa","warbelt\textures\VSM_JPC_pouches_olive.paa","warbelt\textures\VSM_Gen2_BattleBelt_ranger.paa","warbelt\textures\vest1_olive.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_belt_PK.p3d";
			containerclass = "Supply200";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo6","nade","_vsm_jpc_pouches","_Gen2BB","korob"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBT_belt: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 + Warbelt 5.45 [MC]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_belt_AK.p3d";
		hiddenSelections[] = {"camo2","_Gen2BB"};
		hiddenSelectionsTextures[] = {"warbelt\textures\gear_mc.paa","warbelt\textures\VSM_Gen2_BattleBeltMC.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_belt_AK.p3d";
			containerclass = "Supply200";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo2","_Gen2BB"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBT_beltcoy: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 + Warbelt 5.45 [COY]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_belt_AK.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\lbt_coy.paa","warbelt\textures\gear_coy.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_belt_AK.p3d";
			containerclass = "Supply200";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBT_beltrg: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 + Warbelt 5.45 [RGR]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_belt_AK.p3d";
		hiddenSelections[] = {"camo","camo2","nade","_vsm_jpc_pouches","_Gen2BB"};
		hiddenSelectionsTextures[] = {"warbelt\textures\lbt_rg.paa","warbelt\textures\gear_olive.paa","warbelt\textures\grenade_fde.paa","warbelt\textures\VSM_JPC_pouches_olive.paa","warbelt\textures\VSM_Gen2_BattleBelt_ranger.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_belt_AK.p3d";
			containerclass = "Supply200";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2","nade","_vsm_jpc_pouches","_Gen2BB"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBT_beltgp: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 + Warbelt 5.45|VOG-25 [MC]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_belt_AKgp.p3d";
		hiddenSelections[] = {"_Gen2BB","camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\VSM_Gen2_BattleBeltMC.paa","warbelt\textures\gear_mc.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_belt_AKgp.p3d";
			containerclass = "Supply200";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"_Gen2BB","camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBT_beltgpcoy: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 + Warbelt 5.45|VOG-25 [COY]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_belt_AKgp.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\lbt_coy.paa","warbelt\textures\gear_coy.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_belt_AKgp.p3d";
			containerclass = "Supply200";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBT_beltgprg: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 + Warbelt 5.45|VOG-25 [RGR]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_belt_AKgp.p3d";
		hiddenSelections[] = {"camo","camo2","nade","_vsm_jpc_pouches","_Gen2BB"};
		hiddenSelectionsTextures[] = {"warbelt\textures\lbt_rg.paa","warbelt\textures\gear_olive.paa","warbelt\textures\grenade_fde.paa","warbelt\textures\VSM_JPC_pouches_olive.paa","warbelt\textures\VSM_Gen2_BattleBelt_ranger.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_belt_AKgp.p3d";
			containerclass = "Supply200";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2","nade","_vsm_jpc_pouches","_Gen2BB"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBT_belt762: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 + Warbelt 7.62 [MC]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_belt_AK762.p3d";
		hiddenSelections[] = {"_Gen2BB","camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\VSM_Gen2_BattleBeltMC.paa","warbelt\textures\gear_mc.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_belt_AK762.p3d";
			containerclass = "Supply200";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"_Gen2BB","camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBT_belt762coy: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 + Warbelt 7.62 [COY]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_belt_AK762.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\lbt_coy.paa","warbelt\textures\gear_coy.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_belt_AK762.p3d";
			containerclass = "Supply200";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBT_belt762rg: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 + Warbelt 7.62 [RGR]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_belt_AK762.p3d";
		hiddenSelections[] = {"camo","camo2","nade","_vsm_jpc_pouches","_Gen2BB"};
		hiddenSelectionsTextures[] = {"warbelt\textures\lbt_rg.paa","warbelt\textures\gear_olive.paa","warbelt\textures\grenade_fde.paa","warbelt\textures\VSM_JPC_pouches_olive.paa","warbelt\textures\VSM_Gen2_BattleBelt_ranger.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_belt_AK762.p3d";
			containerclass = "Supply200";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2","nade","_vsm_jpc_pouches","_Gen2BB"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBT_belt762gp: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 + Warbelt 7.62|VOG-25 [MC]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_belt_AK762gp.p3d";
		hiddenSelections[] = {"_Gen2BB","camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\VSM_Gen2_BattleBeltMC.paa","warbelt\textures\gear_mc.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_belt_AK762gp.p3d";
			containerclass = "Supply200";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"_Gen2BB","camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBT_belt762gpcoy: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 + Warbelt 7.62|VOG-25 [COY]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_belt_AK762gp.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"warbelt\textures\lbt_coy.paa","warbelt\textures\gear_coy.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_belt_AK762gp.p3d";
			containerclass = "Supply200";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class AK_LBT_belt762gprg: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "LBT 6094 + Warbelt 7.62|VOG-25 [RGR]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\LBT_belt_AK762gp.p3d";
		hiddenSelections[] = {"camo","camo2","nade","_vsm_jpc_pouches","_Gen2BB"};
		hiddenSelectionsTextures[] = {"warbelt\textures\lbt_rg.paa","warbelt\textures\gear_olive.paa","warbelt\textures\grenade_fde.paa","warbelt\textures\VSM_JPC_pouches_olive.paa","warbelt\textures\VSM_Gen2_BattleBelt_ranger.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\LBT_belt_AK762gp.p3d";
			containerclass = "Supply200";
			mass = 20;
			maximumLoad = 80;
			hiddenSelections[] = {"camo","camo2","nade","_vsm_jpc_pouches","_Gen2BB"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class Warbelt_AK_1: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Warbelt 5.45 [COY]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\AK_warbelt.p3d";
		hiddenSelections[] = {"_Gen2BB","_2017Pouches","_1961aPouches","_VSM_JPC_Pouches","_VSM_SERPA","6l20","6l23","taco","nade"};
		hiddenSelectionsTextures[] = {"warbelt\textures\vsm_gen2_battlebelt.paa","warbelt\textures\vsm_2017_pouches.paa","warbelt\textures\vsm_lbt_1961a.paa","warbelt\textures\vsm_jpc_pouches.paa","warbelt\textures\vsm_serpa.paa","warbelt\textures\6l20.paa","warbelt\textures\6l23.paa","warbelt\textures\taco_co.paa","warbelt\textures\grenade_coy.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\AK_warbelt.p3d";
			containerClass = "Supply150";
			mass = 15;
			hiddenSelections[] = {"_Gen2BB","_2017Pouches","_1961aPouches","_VSM_JPC_Pouches","_VSM_SERPA","6l20","6l23","taco","nade"};
			passThrough = 1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 0;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 0;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 0;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class Warbelt_AK_2: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Warbelt 7.62 [COY]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\AK762_warbelt.p3d";
		hiddenSelections[] = {"_Gen2BB","_2017Pouches","_1961aPouches","_VSM_JPC_Pouches","_VSM_SERPA","6l10","ak103mag","taco","nade"};
		hiddenSelectionsTextures[] = {"warbelt\textures\vsm_gen2_battlebelt.paa","warbelt\textures\vsm_2017_pouches.paa","warbelt\textures\vsm_lbt_1961a.paa","warbelt\textures\vsm_jpc_pouches.paa","warbelt\textures\vsm_serpa.paa","warbelt\textures\6l10.paa","warbelt\textures\ak103.paa","warbelt\textures\taco_co.paa","warbelt\textures\grenade_coy.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\AK762_warbelt.p3d";
			containerClass = "Supply150";
			mass = 15;
			hiddenSelections[] = {"_Gen2BB","_2017Pouches","_1961aPouches","_VSM_JPC_Pouches","_VSM_SERPA","6l10","ak103mag","taco","nade"};
			passThrough = 1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 0;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 0;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 0;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class Warbelt_PK: Vest_Camo_Base
	{
		scope = 2;
		author = "Sc0t29 & chazbotic";
		displayName = "Warbelt PKP [COY]";
		picture = "\warbelt\textures\logo.paa";
		logo = "\warbelt\textures\logo.paa";
		model = "\warbelt\PK762_warbelt.p3d";
		hiddenSelections[] = {
			"_Gen2BB",
			"_2017Pouches",
			"_1961aPouches",
			"_VSM_JPC_Pouches",
			"korob",
			"nade"
			};
		hiddenSelectionsTextures[] = {
			"warbelt\textures\vsm_gen2_battlebelt.paa",
			"warbelt\textures\vsm_2017_pouches.paa",
			"warbelt\textures\vsm_lbt_1961a.paa",
			"warbelt\textures\vsm_jpc_pouches.paa",
			"warbelt\textures\vest1.paa",
			"warbelt\textures\grenade_coy.paa"
			};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "warbelt\PK762_warbelt.p3d";
			containerClass = "Supply150";
			mass = 15;
			hiddenSelections[] = {"_Gen2BB","_2017Pouches","_1961aPouches","_VSM_JPC_Pouches","korob","nade"};
			passThrough = 1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 0;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 0;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 0;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
};

class cfgMods
{
	author = "Sc0t & chazbotic";
	timepacked = "1591030445";
};
