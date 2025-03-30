#include <iostream>
#include <string>
using namespace std;

int main () {
        string search;
        cout << "Search for a word: ";
        cin >> search;
        if (search == "AERODYNAMICS") {
            cout << "The study of how gases interact with objects, especially in motion.";
        }
        
        else if (search == "ALGORITHM") {
            cout << "A set of step-by-step instructions for solving a problem.";
         }
         
        else if (search == "AUTOMATION") {
            cout << "The use of technology to perform tasks without human intervention.";
         } 
         
        else if (search == "CIRCUITS") {
            cout << "A closed path through which electricity flows.";
    } 
        else if (search == "COMPUTATION") {
            cout << "The process of performing calculations or processing data.";
    } 
        else if (search == "CONTROL") {
            cout << "The regulation of systems to maintain stability and performance.";
    } 
        else if (search == "CYBERNETICS") {
            cout << "The study of systems, control, and communication in machines and living organisms.";
    } 
        else if (search == "DATA") {
            cout << "Information that is processed or stored for analysis and decision-making.";
    }
         else if (search == "DYNAMICS") {
            cout << "The study of forces and motion in physical systems.";
    } 
        else if (search == "ELECTROMAGNETISM") {
            cout << "The branch of physics dealing with electric and magnetic fields and their interactions.";
    }
         else if (search == "EMBEDDED") {
            cout << "A computing system designed for specific tasks within a larger device.";
    }
         else if (search == "FINITE") {
            cout << "A numerical method used in engineering to solve complex problems by breaking them into smaller parts.";
    } 
        else if (search == "FLUIDS") {
            cout << "Substances that flow, including liquids and gases, studied in fluid mechanics.";
    } 
        else if (search == "HEAT") {
            cout << "A form of energy transfer due to temperature differences.";
    } 
        else if (search == "INTERNET") {
            cout << "A global network that allows data exchange and communication between computers.";
    }
         else if (search == "KINEMATICS") {
            cout << "The study of motion without considering forces causing it.";
    } 
        else if (search == "MACHINE") {
            cout << "A device that applies mechanical power to perform work.";
    } 
        else if (search == "MATERIALS") {
            cout << "Substances used in engineering applications based on their properties.";
    } 
        else if (search == "MECHATRONICS") {
            cout << "A field combining mechanical, electrical, and software engineering.";
    } 
        else if (search == "MICROCONTROLLER") {
            cout << "A small integrated circuit that controls electronic devices.";
    } 
        else if (search == "OPTOELECTRONICS") {
            cout << "The study of electronic devices that interact with light.";
    } 
        else if (search == "QUANTUM") {
            cout << "A field dealing with physics at the smallest scales, used in quantum computing.";
    } 
        else if (search == "RENEWABLES") {
            cout << "Energy sources that are naturally replenished, like solar and wind.";
    } 
        else if (search == "RESISTOR") {
            cout << "An electrical component that limits or regulates current in a circuit.";
    } 
        else if (search == "ROBOTICS") {
            cout << "The design, construction, and operation of robots.";
    } 
        else if (search == "SOFTWARE") {
            cout << "Programs and instructions that tell a computer how to perform tasks.";
    }
        else if (search == "STATICS") {
            cout << "The study of forces and equilibrium, where objects do not move.";
    } 
        else if (search == "STRUCTURES") {
            cout << "The arrangement and design of materials to support loads.";
    } 
        else if (search == "INTEGRITY") {
            cout << "The strength and durability of a structure to withstand stress.";
    } 
        else if (search == "THERMODYNAMICS") {
            cout << "The study of heat, energy, and their transformations.";
    } 
    
        else {
            cout << "Word not found in dictionary.";
    }

    return 0;
}
         