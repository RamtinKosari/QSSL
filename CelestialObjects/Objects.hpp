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
    /**
     * @brief Galaxy Information
     * @param morphology Shape Classification of Galaxies
     * @param size Size Classification of Galaxies
     * @param type Type Classification of Galaxies
     */
    namespace galaxy {
        /**
         * @brief Shape Classification of Galaxies
         * @note a System that is Used by Astronomers to Divide Galaxies Into Groups Based on Their Visual Appearance
         * @param SPIRAL Spiral Shaped Galaxy
         * @param BARRED_SPIRAL Barred Spiral Shaped Galaxy
         * @param LENTICULAR Between Elliptical Shaped and Spiral Shaped Galaxy
         * @param ELLIPTICAL Ellipsoidal Shaped Galaxy
         * @param RING Circle Ring Shaped Galaxy
         * @param IRREGULAR Galaxies that Does Not have Distinct Regular Shape
         */
        namespace morphology {
            /**
             * @brief Galaxy Morphology Classification List
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
        /**
         * @brief Size Classification of Galaxies
         * @param BCG Brightest Cluster Galaxy has Largest Size
         * @param ELLIPTICAL Ellipsoidal Shaped Galaxy has Medium Size
         * @param DWARF Galaxies that has Small Size
         */
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
        /**
         * @brief Type Classification of Galaxies
         * @note Classified to Show How Galaxies Act or Their Combination
         * @param PROTO Cloud of Gas Which is Forming Into a Galaxy
         * @param STARBURST High Rate of Star Formation
         * @param DARK Hypothesized Galaxy with No (or Very Few) Stars
         * @param AGN_RADIO Galaxy with Giant Regions of Radio Emission Extending Well Beyond Its Visibke Structure
         * @param AGN_SEYFERT Seyfert Galaxies are One of the Two Largest Groups of AGN (Active Galactic Nucleus)
         * @param AGN_QUASAR an Extremely Luminous Active Galactic Nucleus (AGN) 
         * @param AGN_MICRO_QUASAR a Smaller Version of a Quasar
         * @param AGN_BLAZAR an Active Galactic Nucleus (AGN) with a Relativistic Jet
         * @param AGN_OVV_BLAZAR an Optically Violent Variable Quasar (Often Abbreviated as OVV Quasar)
         * @param RED_NUGGET Rare, Unusually Small Galaxies Packed with Large Amounts of Red Stars
         * @param VOID_GALAXY a Galaxy that is Located in a Cosmological Void 
         * 
         */
        namespace type {
            /**
             * @brief Galaxy Types
             */
            enum type {
                /**
                 * @brief Cloud of Gas Which is Forming Into a Galaxy
                 * @note in Proto Galaxies It is Believed that the Rate 
                 * of Star Formation During this Period of Galactic
                 * Evolution will Determine Whether a Galaxy is a Spiral 
                 * or Elliptical Galaxy
                 */
                PROTO,
                /**
                 * @brief High Rate of Star Formation
                 * @note a Starburst Galaxy is One Undergoing an Exceptionally High Rate
                 * of Star Formation, as Compared to the Long-Term Average Rate of Star
                 * Formation in the Galaxy or the Star Formation Rate Obserbed in Most Other Galaxies
                 */
                STARBURST,
                /**
                 * @brief Hypothesized Galaxy with No (or Very Few) Stars
                 * @note They Received Their Name Because They Have No Visible Stars but May
                 * be Detectable if They Contain Significant Amounts of Gas. Astronomers have
                 * Long Theorized the Existence of Dark Galaxies, But there are No Confirmed Examples to Date
                 */
                DARK,
                /**
                 * @brief Galaxy with Giant Regions of Radio Emission Extending Well Beyond Its Visibke Structure
                 * @note These Energetic Radio Lobes are Powered by Jets from Its Active Galactic Nucleus.
                 * @note They have Luminosities Up to 10^39 W at Radio Wavelengths between 10 MHz and 100 GHz
                 */
                AGN_RADIO,
                /**
                 * @brief Seyfert Galaxies are One of the Two Largest Groups of AGN (Active Galactic Nucleus)
                 * @note Along with Quasars. They have Quasar-Like Nuclei (Very Luminous, Distant and Bright
                 * Sources of ELectromagnetic Radiation) with Very High Surface Brightnesses Whose Spectra Reveal
                 * Strong, High-Ionisation Emission Lines, but Unlike Quasars, Their Host Galaxies are Clearly Detectable
                 */
                AGN_SEYFERT,
                /**
                 * @brief an Extremely Luminous Active Galactic Nucleus (AGN) 
                 * @note This Emission from an AGN is Powered by a Supermassive Black Hole with a Mass Ranging from Millions
                 * to Tens of Billions of Solar Masses, Surrounded by a Gaseous Accretion Disc.
                 */
                AGN_QUASAR,
                /**
                 * @brief a Smaller Version of a Quasar
                 * @note a Compact Region Surrounding a Stellar Black Hole with a Mass Several Times that of Its Companion Star
                 * @note The Matter being Pulled from the Companion Star Forms an Accretion Disk Around the Black Hole
                 */
                AGN_MICRO_QUASAR,
                /**
                 * @brief an Active Galactic Nucleus (AGN) with a Relativistic Jet
                 * @note Active Galactic Nucleus (AGN) with a Relativistic Jet (a Jet Composed of Ionized Matter Travelling at
                 * Nearly the Speed of Light) Directed Very Nearly Towards an Observer.
                 */
                AGN_BLAZAR,
                /**
                 * @brief an Optically Violent Variable Quasar (Often Abbreviated as OVV Quasar)
                 * @note a Type of Highly Variable Quasar
                 * @note It is a Subtype of Blazar that Consists of a Few Rare, Bright Radio Galaxies, Whose Visible Light Output
                 * Can Change By 50% in a Day
                 */
                AGN_OVV_BLAZAR,
                /**
                 * @brief Rare, Unusually Small Galaxies Packed with Large Amounts of Red Stars
                 * @note Red Nuggets are Ancient Remnants of the First Massive Galaxies
                 * @note The Environments of Red Nuggets are Usually Consistent with the General Elliptical Galaxy Population 
                 */
                RED_NUGGET,
                /**
                 * @brief a Galaxy that is Located in a Cosmological Void 
                 * @note Few Galaxies Exist in Voids
                 * @note Many Void Galaxies are Connected Through Void Filaments or Tendrills, Lightweight Versions of the Regular
                 * Galaxy Filaments that Surround Voids
                 */
                VOID_GALAXY
            };
        }
    }
# endif // __QSSL_CELESTIAL_OBJECTS
