// main.cpp
#include <iostream>
#include "include/StandardModelParticles.h"
//https://e.ventures
//the@e.ventures
//MIT License
int main() {

    //Standard Model

    Electron electron;
    Neutrino neutrino;
    UpQuark upQuark;
    DownQuark downQuark;
    Photon photon;
    Wboson wboson;
    Zboson zboson;

    std::cout << "Standard Model Particles:" << std::endl;
    std::cout << " - " << electron.getName() << " (mass: " << electron.getMass() << " MeV, charge: " << electron.getCharge() << " e)" << std::endl;
    std::cout << " - " << neutrino.getName() << " (mass: " << neutrino.getMass() << " MeV, charge: " << neutrino.getCharge() << " e)" << std::endl;
    std::cout << " - " << upQuark.getName() << " (mass: " << upQuark.getMass() << " MeV, charge: " << upQuark.getCharge() << " e)" << std::endl;
    std::cout << " - " << downQuark.getName() << " (mass: " << downQuark.getMass() << " MeV, charge: " << downQuark.getCharge() << " e)" << std::endl;
    std::cout << " - " << photon.getName() << " (mass: " << photon.getMass() << " MeV, spin: " << photon.getSpin() << ")" << std::endl;
    std::cout << " - " << wboson.getName() << " (mass: " << wboson.getMass() << " MeV, spin: " << wboson.getSpin() << ")" << std::endl;
    std::cout << " - " << zboson.getName() << " (mass: " << zboson.getMass() << " MeV, spin: " << zboson.getSpin() << ")" << std::endl;

    return 0;
}
