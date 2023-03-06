# ifndef __QSSL_CELESTIAL_OBJECTS
    /**
     * @attention Read Before Downloading, Copying, Installing or Using.
     * @attention by Downloading, Copying, Installing or Using this Library, You Agree to this License !
     * @brief Open Source Astronomy and Astrophysics Library's Celestial Objects Macro
     * @copyright Copyright (c) 2023-2037, QSS Company - Section IRC (International Research Center)
     * @file Core.hpp
     * @author Qatora Bataka
     * @details This Library Can be Used in Games that Astronomical Calculations are Needed or for Creating Your Own Universe
     * @version 1.0
     * @date 2023-03-06
     */
    # define __QSSL_CELESTIAL_OBJECTS
    /**
     * @brief Celestial Objects List
     */
    enum Objects {
        /**
         * @brief Universe Itself !
         * @note The Cosmic Microwave Background (CMB, CMBR) is
         * Microwave Radiation that Fills All Space.
         * @note It is a Remnant that Provides an Important Source
         * of Data on the Primordial Universe.
         */
        CMB,
        /**
         * @brief Exist Everywhere
         * @note Cosmic Dust is Dust that Occurs in Outer Space.
         * @note Most Cosmic Dust Particles Measure between a
         * Few Molecules and 0.1 mm, Larger Partcles are Called
         * Meteoroids
         */
        DUST,
        /**
         * @brief 
         * @note Cosmic Voids are Vast Spaces between Filaments
         * Which Contain Very Few or No Galaxies. Even the
         * Emptiest Regions of Voids Contain More than ~15%
         * of the Average Matter Density of the Universe
         */
        VOID,
        /**
         * @brief Largest Known Object in the Universe !
         * @note in Cosmology, Galaxy Filaments Are the Largest
         * Known Structures in the Universe, Consisting of
         * Walls of Gravitationally Bound Galaxy Superclusters
         */
        FILAMENT,
        /**
         * @brief Large Group of Smaller Galaxy Clusters
         * @note They are Among the Largest Known Structures in the
         * Universe, 
         * @note The Large Size and Low Density of Superclusters Means
         * that They, Unlike Clusters, Expand with the Hubble Expansion
         * @note The NUmber of Superclusters in the Observable Universe
         * is Estimated to be 10 Million
         */
        SUPER_GALAXY_CLUSTERS,
        /**
         * @brief System of Galaxies
         * @note Galaxy Groups and Clusters are the Largest Known
         * Gravitationally Bound Objects to have Arisen thus far
         * in the Process of Cosmic Structure Formation
         */
        GALAXY_CLUSTERS,
        /**
         * @brief System of Stars
         * @note Galaxies are Categorized According to Their Visual
         * Morphology as Elliptical, Spiral or Irregular.
         * @note Many are Thought to have Supermassive
         * Black Holes at Their Centers
         */
        GALAXY,
        /**
         * @brief Smaller Companion Galaxy
         * @note Smaller Galaxy that Travels on Bound Orbits within
         * the Gravitational Potential of a More Massive and Luminos Host Galaxy.
         * @note Satellite Galaxies and Their Constituents are Bound to Their Host Galaxy.
         * @note While Most Satellite Galaxies are Dwarf Galaxies, Satellite
         * Galaxies of Large Galaxy Clusters Can be Much More Massive
         */
        SATELLITE_GALAXY,
        // to be added :
        // HELIOSPHERE,CLOUD,METEOROID,MICRO_METEOROID,BOLIDE,MOONS,MOONLET,ASTEROID,BINARY_ASTEROID,SYNESTIA,DWARF,PLANET,RING,COMET,PLANETESIMAL,CONTACT_BINARY,BELT
    };
    namespace galaxy {
        namespace morphology {
            /**
             * @brief Galaxy Morphology
             */
            enum GalaxyMorphology {
                /**
                 * @brief Spiral Shaped Galaxy
                 */
                SPIRAL,
                /**
                 * @brief Barred Spiral Shaped Galaxy
                 */
                BARRED_SPIRAL,
                /**
                 * @brief Between Elliptical Shaped and Spiral Shaped Galaxy
                 */
                LENTICULAR,
                /**
                 * @brief Ellipsoidal Shaped Galaxy
                 */
                ELLIPTICAL,
                /**
                 * @brief Circle Ring Shaped Galaxy
                 */
                RING,
                /**
                 * @brief Galaxies that Does Not have Distinct Regular Shape
                 */
                IRREGULAR
            };
        }
        namespace size {
            /**
             * @brief Galaxy Size
             */
            enum size {
                /**
                 * @brief Brightest Cluster Galaxy has Largest Size
                 * @note Brightest Galaxy in a Cluster of Galaxies.
                 * @note BCGs Include the Most Massive Galaxies in the Universe.
                 * @note They are Generally Elliptical Galaxies Which Lie Close
                 * to the Geometric and Kinematical Center of Their Host Galaxy Cluster
                 */
                BCG,
                /**
                 * @brief Ellipsoidal Shaped Galaxy has Medium Size
                 * @note Most Elliptical Galaxies are Composed of Older, Low-Mass Stars,
                 * with a Sparse Interstellar Medium and Minimal Star Formation Activity
                 * and They Tend to be Surrounded by Large Numbers of Globular Clusters
                 */
                ELLIPTICAL,
                /**
                 * @brief Galaxies that has Small Size
                 * @note a Dwarf Galaxy is a Small Galaxy Composed of About 1000 up to
                 * Several Billion Stars
                 * @note Dwarf Galaxies Formation and Activity are Thought to be Heavily
                 * Influenced by Interactions with Larger Galaxies
                 */
                DWARF
            };
        }
    }
# endif // __QSSL_CELESTIAL_OBJECTS