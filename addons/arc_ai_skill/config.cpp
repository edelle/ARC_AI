class CfgPatches {
    class arc_ai_skill {
        ammo[] = {};
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.54;
        author[] = {"Ed", "Kingsley"};
        authorUrl = "https://github.com/ARCOMM/ARC_AI";
        requiredAddons[] = {"arc_ai_main"};
    };
};

class CfgAISkill {
    aimingAccuracy[] = {0,0.05,1,0.05}; // Values of 0 causes AI to shoot at their feet
    aimingShake[] = {0,0.1,1,0.1};
    aimingSpeed[] = {0,0.5,1,0.5};
    commanding[] = {0,1,1,1};
    courage[] = {0,1,1,1};
    endurance[] = {0,1,1,1};
    general[] = {0,1,1,1};
    reloadSpeed[] = {0,1,1,1};
    spotDistance[] = {0,0.5,1,0.5};
    spotTime[] = {0,0.75,1,0.75};
};