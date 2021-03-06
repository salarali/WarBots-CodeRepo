#ifndef __WORLD_H__
#define __WORLD_H__

#include <vector>
#include "../Physics/Vector3D.h"
#include "../Objects/Object.h"

namespace World{

    /*!
     *    \class    World
     *    \brief    world class for containing everything
     */
    class World{
      private:
        Physics::Vector3D size_;                        /*!< size of the world to be simulated, bounds are infinite */
        double airdrag_;                                /*!< the air drag coefficient */
        double friction_;                               /*!< the ground friction coefficient */
        double timestep_;                               /*!< the time steps to calculate simulations */
        
        double time_;                                   /*!< the current time of the simulated world */
        std::vector<Movable::Movable> movables_;        /*!< list of movable objects in the world */
        std::vector<Immovable::Immovable> immovables_;  /*!< list of immovable objects in the world */
        
      public:
      
        /*!
         *    \brief        default constructor
         *    \param        none
         *    \details      nothing special
         */
        World();
            
        /*!
         *    \brief        default destructor
         *    \param        none
         *    \details      nothing special
         */    
        virtual ~World();

        /*! 
         *  \fn         addMovableObject
         *  \brief      add a movable object to the world
         *  \details
         *  \param      obj, the movable object to be added
         *  \return     void
         *  \bug        none
         *  \warning    none
         */
        void addMovableObject(Movable::Movable obj);

        /*! 
         *  \fn         addImmovableObject
         *  \brief      add a immovable object to the world
         *  \details
         *  \param      obj, the immovable object to be added
         *  \return     void
         *  \bug        none
         *  \warning    none
         */
        void addImmovableObject(Immovable::Immovable obj);

        /*! 
         *  \fn         simulate
         *  \brief      simulate the world by a time specified by timestep
         *  \details
         *  \param      none
         *  \return     void
         *  \bug        none
         *  \warning    none
         */
        void simulate();
        
    };
    
};


#endif /* __WORLD_H__ */

